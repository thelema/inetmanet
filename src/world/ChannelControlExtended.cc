/***************************************************************************
 * file:        ChannelControlExtended.cc
 *
 * copyright:   (C) 2005 Andras Varga
 * copyright:   (C) 2009 Juan-Carlos Maureira
 * copyright:   (C) 2009 Alfonso Ariza
 *
 *              This program is free software; you can redistribute it
 *              and/or modify it under the terms of the GNU General Public
 *              License as published by the Free Software Foundation; either
 *              version 2 of the License, or (at your option) any later
 *              version.
 *              For further information see file COPYING
 *              in the top level directory
 ***************************************************************************
 * part of:     framework implementation developed by tkn
 **************************************************************************/


#include "ChannelControlExtended.h"
#include "FWMath.h"
#include <cassert>

using namespace std;
#define coreEV (ev.isDisabled()||!coreDebug) ? ev : ev << "ChannelControl: "

Define_Module(ChannelControlExtended);


//std::ostream& operator<<(std::ostream& os, const ChannelControl::HostEntry& h)
//{
//    os << h.host->getFullPath() << " (x=" << h.pos.x << ",y=" << h.pos.y << "), "
//       << h.neighbors.size() << " neighbor(s)";
//   return os;
//}

// New operator to show the HostEntry now showing each radio channel and gate id
std::ostream& operator<<(std::ostream& os, const ChannelControlExtended::HostEntryExtended& h)
{
    os << h.host->getFullPath() << " (x=" << h.pos.x << ",y=" << h.pos.y << "), " << h.neighbors.size() << " neighbor(s)" << endl;
    int count = 0;
    for(ChannelControlExtended::RadioList::const_iterator it = h.radioList.begin();it!=h.radioList.end();it++) {
         os << "                 radio " << count << " " << (*it).radioModule << " channel " << (*it).channel << " gate id " << (*it).hostGateId << endl;
         count++;
    }
    return os;
}


std::ostream& operator<<(std::ostream& os, const ChannelControlExtended::TransmissionList& tl)
{
    for (ChannelControlExtended::TransmissionList::const_iterator it = tl.begin(); it != tl.end(); ++it)
        os << endl << *it;
    return os;
}


// NEW METHODS TO SUPPORT MULTIPLES RADIOS

/* Check if the host entry has a radio in the given channel */
bool ChannelControlExtended::HostEntryExtended::isReceivingInChannel(int channel,double freq) {
   /* if there is some radio on the channel on this host */
   for(ChannelControlExtended::RadioList::const_iterator it = radioList.begin();it!=radioList.end();it++)
   {
      if (((*it).channel==channel) && (abs(((*it).radioCarrier - freq)/freq)<=percentaje))
	  {
         return(true);
      }
   }
   return(false);
}

/* return a std::list with the radioIn host gates that points to radios on the given channel */
ChannelControlExtended::radioGatesList ChannelControlExtended::HostEntryExtended::getHostGatesOnChannel(int channel,double freq) {

	ChannelControlExtended::radioGatesList theRadioList;

   if (freq==0.0)
	   freq=carrierFrequency;

   for(ChannelControlExtended::RadioList::const_iterator it = radioList.begin();it!=radioList.end();it++) {
	   if (((*it).channel==channel) && (abs(((*it).radioCarrier - freq)/freq)<=percentaje)) {
         cGate* radioGate = NULL;
         if ((*it).hostGateId!=-1) {
            radioGate = (this->host)->gate((*it).hostGateId);
         } else {
            radioGate = (this->host)->gate("radioIn");
         }
         if (radioGate != NULL ){
            theRadioList.push_back(radioGate);
         }
      }
   }
   return(theRadioList);
}

void ChannelControlExtended::HostEntryExtended::registerRadio(cModule* ar) {
	ChannelControlExtended::RadioEntry ra;
    ra.radioModule = ar;
    ra.channel = -1;
    ra.radioCarrier=carrierFrequency;

    cGate* radioIn = ar->gate("radioIn");

    for(ChannelControlExtended::RadioList::iterator it = radioList.begin();it!=radioList.end();it++)
    {
    	if (ra.hostGateId == radioIn->getId())
          return; // Is register
    }

    // JcM
    // look for the host gate id for each radio module.

    while (radioIn!=NULL && radioIn->getOwnerModule() != host ) {
       radioIn = radioIn->getPreviousGate();
    }

    if (radioIn!=NULL && radioIn->getOwnerModule() == host) {
       ra.hostGateId = radioIn->getId();
    } else {
       ra.hostGateId = -1;
    }

    ChannelControlExtended::HostEntryExtended::radioList.push_back(ra);
}

/*
bool ChannelControl::HostEntry::updateRadioChannel(cModule* ar,int ch) {
   EV << "HostEntry " << this->host->getFullPath() << " updating radio channel to " << ar << " ch " << ch  << endl;
   for(ChannelControl::RadioList::iterator it = radioList.begin();it!=radioList.end();it++) {
      EV << "UpdateRadioChannel ar: " << ar->getFullPath() << " radioModule :" << (*it).radioModule->getFullPath() << endl;
      if ((*it).radioModule==ar) {
        (*it).channel = ch;
		(*it).radioCarrier=carrierFrequency;
        return(true);
      }
   }
   return(false);
}
*/

bool ChannelControlExtended::HostEntryExtended::updateRadioChannel(cModule* ar,int ch,double freq) {
   EV << "HostEntry " << this->host->getFullPath() << " updating radio channel to " << ar << " ch " << ch  << endl;
   for(ChannelControlExtended::RadioList::iterator it = radioList.begin();it!=radioList.end();it++) {
      EV << "UpdateRadioChannel ar: " << ar->getFullPath() << " radioModule :" << (*it).radioModule->getFullPath() << endl;
      if ((*it).radioModule==ar) {
        (*it).channel = ch;
		(*it).radioCarrier=carrierFrequency;
		if (freq>0.0)
			(*it).radioCarrier=freq;
        return(true);
      }
   }
   return(false);
}

bool ChannelControlExtended::HostEntryExtended::isRadioRegistered(cModule* r) {
   for(ChannelControlExtended::RadioList::iterator it = radioList.begin();it!=radioList.end();it++) {
      if ((*it).radioModule==r) {
        return(true);
      }
   }
   return(false);
}

cModule* ChannelControlExtended::getHostByRadio(AbstractRadio* ar) {
    Enter_Method_Silent();
    for (HostList::iterator it = hosts.begin(); it != hosts.end(); it++) {
        if (it->isRadioRegistered((cModule*)ar)) {
            return it->host;
        }
    }
    return NULL;
}

// END NEW METHODS FOR SUPPORT MULTIPLES RADIOS

ChannelControlExtended::ChannelControlExtended()
{
}

ChannelControlExtended::~ChannelControlExtended()
{
    for (unsigned int i = 0; i < transmissions.size(); i++)
        for (TransmissionList::iterator it = transmissions[i].begin(); it != transmissions[i].end(); it++)
            delete *it;
}

ChannelControlExtended *ChannelControlExtended::get()
{
	ChannelControlExtended *cc = dynamic_cast<ChannelControlExtended *>(simulation.getModuleByPath("channelcontrolextended"));
    if (!cc)
        cc = dynamic_cast<ChannelControlExtended *>(simulation.getModuleByPath("channelControlExtended"));
    return cc;
}

/**
 * Sets up the playgroundSize and calculates the
 * maxInterferenceDistance
 *
 * @ref calcInterfDist
 */
void ChannelControlExtended::initialize()
{
    coreDebug = hasPar("coreDebug") ? (bool) par("coreDebug") : false;

    coreEV << "initializing ChannelControl\n";

    playgroundSize.x = par("playgroundSizeX");
    playgroundSize.y = par("playgroundSizeY");

    numChannels = par("numChannels");
    transmissions.resize(numChannels);

    lastOngoingTransmissionsUpdate = 0;

    maxInterferenceDistance = calcInterfDist();

    WATCH(maxInterferenceDistance);
    WATCH_LIST(hosts);
    WATCH_VECTOR(transmissions);

    updateDisplayString(getParentModule());
	carrierFrequency = par("carrierFrequency");
	percentaje = 0.1;
}


ChannelControl::HostRef ChannelControlExtended::registerHost(cModule * host, const Coord& initialPos)
{
    Enter_Method_Silent();
    if (lookupHost(host) != NULL)
        error("ChannelControlExtended::registerHost(): host (%s)%s already registered",
              host->getClassName(), host->getFullPath().c_str());

    HostEntryExtended he;
    he.host = host;
    he.pos = initialPos;
    he.carrierFrequency=carrierFrequency;
    he.percentaje=percentaje;
    he.isModuleListValid = false;
    // TODO: get it from caller
    he.channel = 0;
    hosts.push_back(he);
    return &hosts.back(); // last element
}

/**
 * Calculation of the interference distance based on the transmitter
 * power, wavelength, pathloss coefficient and a threshold for the
 * minimal receive Power
 *
 * You may want to overwrite this function in order to do your own
 * interference calculation
 */
double ChannelControlExtended::calcInterfDistExtended(double freq)
{
    double SPEED_OF_LIGHT = 300000000.0;
    double interfDistance;

    //the carrier frequency used
    // double carrierFrequency = par("carrierFrequency");
    //maximum transmission power possible
    double pMax = par("pMax");
    //signal attenuation threshold
    double sat = par("sat");
    //path loss coefficient
    double alpha = par("alpha");

    double waveLength = (SPEED_OF_LIGHT / freq);
    //minimum power level to be able to physically receive a signal
    double minReceivePower = pow(10.0, sat / 10.0);

    interfDistance = pow(waveLength * waveLength * pMax /
                         (16.0 * M_PI * M_PI * minReceivePower), 1.0 / alpha);

    coreEV << "max interference distance:" << interfDistance << endl;

    return interfDistance;
}

void ChannelControlExtended::updateConnections(HostRef aux)
{

	HostRefExtended h = (HostRefExtended) aux;
	if (!h)
		error("ChannelControlExtended::updateConnections");

    Coord& hpos = h->pos;
    double maxDistSquared = maxInterferenceDistance * maxInterferenceDistance;
    for (HostList::iterator it = hosts.begin(); it != hosts.end(); ++it)
    {
    	HostEntryExtended *hi = &(*it);
        if (hi == h)
            continue;

        // get the distance between the two hosts.
        // (omitting the square root (calling sqrdist() instead of distance()) saves about 5% CPU)
        bool inRange = hpos.sqrdist(hi->pos) < maxDistSquared;

        if (inRange)
        {
            // nodes within communication range: connect
            if (h->neighbors.insert(hi).second == true)
            {
                hi->neighbors.insert(h);
                h->isModuleListValid = hi->isModuleListValid = false;
            }
        }
        else
        {
            // out of range: disconnect
            if (h->neighbors.erase(hi))
            {
                hi->neighbors.erase(h);
                h->isModuleListValid = hi->isModuleListValid = false;
            }
        }
    }
}


void ChannelControlExtended::updateHostChannel(HostRef h, const int channel)
{
    Enter_Method_Silent();
    checkChannel(channel);
    HostRefExtended hExt = (HostRefExtended) h;


    if (hExt->radioList.empty())
    {
    	cModule *module = hExt->host;
    	ChannelControlExtended::RadioEntry ra;
    	cGate *radioIn = module->gate("radioIn");
        ra.radioModule = radioIn->getOwnerModule();
        ra.channel = channel;
        ra.hostGateId = radioIn->getId();
        ra.radioCarrier = carrierFrequency;
        hExt->radioList.push_back(ra);
    }
    hExt->radioList.front().channel= channel;
}


/*
void ChannelControl::updateHostChannel(HostRef h, const int channel, cModule* ca)
{
    Enter_Method_Silent();

    checkChannel(channel);

    h->updateRadioChannel(ca,channel);
}
*/

void ChannelControlExtended::updateHostChannel(HostRef h, const int channel, cModule* ca,double freq)
{
    Enter_Method_Silent();

    checkChannel(channel);

    ((HostRefExtended)h)->updateRadioChannel(ca,channel,freq);
}
