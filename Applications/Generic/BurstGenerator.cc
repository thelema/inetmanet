/*
    file: BurstGenerator.cc
    Purpose: Traffic Generator that sends out a number of
        packets all at once, then stops
    author: Jochen Reber
*/

#include <omnetpp.h>
#include "BurstGenerator.h"
#include "IPInterfacePacket.h"
#include "IPDatagram.h"
#include "ICMP.h"

Define_Module_Like(BurstGenerator, GeneratorAppOut);

void BurstGenerator::initialize()
{
    burstSize = par("burstPackets");
    packetSize = par("generationSize");
    usesTCPProt = par("tcpProtocol");
    destAddress = par("destAddress").stringValue();
}

void BurstGenerator::activity()
{
    int packetsSent;
    int contCtr = id()*10000+100;
    char dest[20];
    cPacket *transportPacket = NULL;
    IPInterfacePacket *iPacket = NULL;

    wait(1);

    for (packetsSent = 0; packetsSent < burstSize; packetsSent++)
    {

        transportPacket = new cPacket;
        transportPacket->setLength(packetSize);
        transportPacket->addPar("content") = contCtr++;

        iPacket = new IPInterfacePacket;
        iPacket->encapsulate(transportPacket);
        iPacket->setDestAddr(destAddress);
        iPacket->setProtocol(usesTCPProt ? IP_PROT_TCP : IP_PROT_UDP);
        send(iPacket, "out");
    }

    if (burstSize > 0)
    {
        ev << "Burst Generator: " << burstSize
           << " packets sent to "<< iPacket->destAddr()
           << "\n";
    }

}

