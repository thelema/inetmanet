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

#include "PowerArray.h"

PowerArray::PowerArray() {
	totalRSS = 0.0;
//	minPower = 1.0;
}

PowerArray::~PowerArray() {
	// TODO Auto-generated destructor stub
}

int PowerArray::addMeasurement(IPAddress add, double recdPower) {
//	if (data[add] != 0.0) return false;
//	if (data[add] == recdPower) return false;
//	totalRSS += recdPower - data[add];
	data[add] = recdPower;
	return true;  //return whether or not we added the measurement
}

double PowerArray::getIntfCost(IPAddress add) {
	return (totalRSS - data[add]) / minPower;
}

uint32_t PowerArray::getTRSS(double calib) {
	double sum = 0.0;
	for(map<const IPAddress, double>::const_iterator it = data.begin(); it != data.end(); ++it) {
		sum += it->second; // accumulate the RSS values
	}
	uint32_t trss = sum / calib;
	return trss;
}