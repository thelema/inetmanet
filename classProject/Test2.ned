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

network Test2
{
    parameters:
        double playgroundSizeX;
        double playgroundSizeY;

    submodules:
        channelControl: ChannelControl {
            parameters:
                playgroundSizeX = playgroundSizeX;
                playgroundSizeY = playgroundSizeY;
                @display("p=41,73");
        }
        configurator: FlatNetworkConfigurator {
            parameters:
                networkAddress = "140.236.0.0";
                netmask = "255.255.0.0";
                @display("p=41,128;i=block/cogwheel_s");
        }
        Sink: WSNNode {
            @display("p=318,249;i=old/bwsink");
        }
        Node1: WSNNode {
            @display("p=172,186");
        }
        Node2: WSNNode {
            @display("p=214,249");
        }
        Node3: WSNNode {
            @display("p=260,186");
        }
        Node4: WSNNode {
            @display("p=125,128");
        }
        Node5: WSNNode {
            @display("p=214,21");
        }
        Node6: WSNNode {
            @display("p=172,74");
        }
        Node7: WSNNode {
            @display("p=260,74");
        }
        Node8: WSNNode {
            @display("p=318,128");
        }
        Node9: WSNNode {
            @display("p=214,128");
        }
}
