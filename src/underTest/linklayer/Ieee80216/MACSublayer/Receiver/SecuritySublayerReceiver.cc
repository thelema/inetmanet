
#include "SecuritySublayerReceiver.h"
#include "PhyControlInfo_m.h"

Define_Module(SecuritySublayerReceiver);

SecuritySublayerReceiver::SecuritySublayerReceiver()
{

}

SecuritySublayerReceiver::~SecuritySublayerReceiver()
{

}

void SecuritySublayerReceiver::initialize()
{
    receiverRadioGateIn  = findGate("receiverRadioGateIn");
    receiverRadioGateOut = findGate("receiverRadioGateOut");
    commonPartGateIn  = findGate("commonPartGateIn");
    commonPartGateOut = findGate("commonPartGateOut");
}

void SecuritySublayerReceiver::handleMessage(cMessage *msg)
{
	ev << "(in handleMessage) message "<<msg->getName()<<" eingetroffen an SecuritySublayerReceiver.\n";

  if (msg->getArrivalGateId() == receiverRadioGateIn )
    {
	  ev << "von receiverRadioGateIn: "<< msg << ". An commonPartGateOut gesendet.\n";
	send(msg, commonPartGateOut);
    }
  else if (msg->getArrivalGateId() == commonPartGateIn )
    {
	  ev << "von commonPartGateIn: "<< msg << ". An receiverRadioGateOut gesendet.\n";
	send(msg, receiverRadioGateOut);
    }
  else
    {
    ev << "nothing to do in function SecuritySublayerReceiver::handleMessage" << endl;
    }

}




