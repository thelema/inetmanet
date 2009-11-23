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

import inet.world.ChannelControl;
import inet.networklayer.autorouting.FlatNetworkConfigurator;

import WSNNode;

network Test1
{
    parameters:
        double playgroundSizeX;
        double playgroundSizeY;

    submodules:
        channelControl: ChannelControl {
            parameters:
                playgroundSizeX = playgroundSizeX;
                playgroundSizeY = playgroundSizeY;
                @display("p=41,30");
        }
        configurator: FlatNetworkConfigurator {
            parameters:
                networkAddress = "140.236.0.0";
                netmask = "255.255.0.0";
                @display("p=41,85;i=block/cogwheel_s");
        }
        Sink: WSNNode {
            @display("p=374,125;i=old/bwsink");
        }
        Node1: WSNNode {
            @display("p=134,202");
        }
        Node2: WSNNode {
            @display("p=214,253");
        }
        Node3: WSNNode {
            @display("p=279,143");
        }
        Node4: WSNNode {
            @display("p=128,108");
        }
        Node5: WSNNode {
            @display("p=214,85");
        }
        Node6: WSNNode {
            @display("p=161,31");
        }
        Node7: WSNNode {
            @display("p=300,31");
        }
        Node8: WSNNode {
            @display("p=313,242");
        }
}
