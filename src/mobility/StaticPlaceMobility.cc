#include "StaticPlaceMobility.h"

Define_Module(StaticPlaceMobility);

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ===================================
/**
 * Initialization routine
 */
void StaticPlaceMobility::initialize(int aStage)
{
    BasicMobility::initialize(aStage);

    EV << "initializing StaticPlaceMobility stage " << aStage << endl;

	if (1 == aStage)
	{
		mNumHosts = par("numHosts");

        int size    = (int)ceil (sqrt(mNumHosts));
		double row  = ceil((hostPtr->getIndex()) / size);
		int col     = (hostPtr->getIndex()) % size;
		pos.x       = col * getPlaygroundSizeX() / (size-1);
		if(pos.x == getPlaygroundSizeX()) pos.x-=1;
		pos.y       = row * getPlaygroundSizeY() / (size-1);
		if(pos.y == getPlaygroundSizeY()) pos.y-=1;

		updatePosition();
	}

}

void StaticPlaceMobility::finish()
{
	BasicMobility::finish();
	recordScalar("x", pos.x);
	recordScalar("y", pos.y);
}
