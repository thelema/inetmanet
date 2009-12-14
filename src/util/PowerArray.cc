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
	totalData = 0.0;
	minPower = 1.0;
}

PowerArray::~PowerArray() {
	// TODO Auto-generated destructor stub
}

int PowerArray::addMeasurement(IPAddress add, double recdPower) {
	int ret = data[add] != recdPower;
	if (ret) {
		totalData -= data[add];
		data[add] = recdPower;
		totalData += recdPower;
	}
	if (recdPower < minPower) {
		minPower = recdPower;
	}
	return ret;
}

double PowerArray::getIntfCost(IPAddress add) {
	return (totalData - data[add]) / minPower;
}

uint32_t PowerArray::getTRSS(double calib) {
	uint32_t trss = totalData / calib;
	return trss;
}
