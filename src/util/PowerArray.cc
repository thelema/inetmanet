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

void PowerArray::addMeasurement(IPAddress add, double recdPower) {
	if (data[add] == 0.0) {
		data[add] = recdPower;
		totalData += data[add];
	}
	if (recdPower < minPower) {
		minPower = recdPower;
	}
}

double PowerArray::getIntfCost(IPAddress add) {
	return (totalData - data[add]) / minPower;
}

uint8_t PowerArray::getTRSS() {
	uint8_t trss = totalData / minPower;
	if (trss < 1) trss=1;
	if (trss > 20) trss=20;
	return 1;
}
