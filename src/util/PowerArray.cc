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
}

PowerArray::~PowerArray() {
	// TODO Auto-generated destructor stub
}

int PowerArray::addMeasurement(IPAddress add, double recdPower) {
	data[add] = data[add] * .75 + recdPower * .25;
	return 1;
}

double PowerArray::getIntfCost(IPAddress add) {
	double sum = 0.0;
	for(map<const IPAddress, double>::const_iterator it = data.begin(); it != data.end(); ++it) {
		sum += it->second; // accumulate the RSS values
	}
	return (sum - data[add]) / RSS_CALIB;
}

uint32_t PowerArray::getTRSS() {
	double sum = 0.0;
	for(map<const IPAddress, double>::const_iterator it = data.begin(); it != data.end(); ++it) {
		sum += it->second; // accumulate the RSS values
	}
	uint32_t trss = sum * RSS_CALIB;
	return trss;
}
