/**
 * @short Mobility model which places all hosts at constant distances
 *  within the simulation area (resulting in a regular grid)
 * @author Isabel Dietrich
*/

#ifndef STATIC_PLACE_MOBILITY_H
#define STATIC_PLACE_MOBILITY_H

// SYSTEM INCLUDES
#include <omnetpp.h>
#include "BasicMobility.h"

class INET_API StaticPlaceMobility : public BasicMobility
{
public:
    // LIFECYCLE
    virtual void initialize(int);
	virtual void finish();
	
	/** @brief Called upon arrival of a self messages */
    virtual void handleSelfMsg(cMessage *msg) {}

private:
    // MEMBER VARIABLES
	int mNumHosts;
};

#endif
