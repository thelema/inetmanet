//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//

#ifndef POWERARRAY_H_
#define POWERARRAY_H_

#include <omnetpp.h>
#include "INETDefs.h"
#include "IPDatagram.h"
#include <map>

using namespace std;

class PowerArray : public cPolymorphic {
public:
	PowerArray();
	virtual ~PowerArray();
	void addMeasurement(IPAddress add, double recdPower);
	double getIntfCost(IPAddress add);
private:
	map<const IPAddress,double> data;
	double totalData;
};

#endif /* POWERARRAY_H_ */
