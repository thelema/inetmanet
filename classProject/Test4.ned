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

network Test4
{
    parameters:
        double playgroundSizeX;
        double playgroundSizeY;

        @display("bgb=823,520");
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
            @display("p=699,287;i=old/bwsink");
        }
        Node1: WSNNode {
            @display("p=617,188");
        }
        Node2: WSNNode {
            @display("p=638,356");
        }
        Node3: WSNNode {
            @display("p=552,379");
        }
        Node4: WSNNode {
            @display("p=517,181");
        }
        Node5: WSNNode {
            @display("p=481,120");
        }
        Node6: WSNNode {
            @display("p=672,151");
        }
        Node7: WSNNode {
            @display("p=377,217");
        }
        Node8: WSNNode {
            @display("p=460,356");
        }
        Node9: WSNNode {
            @display("p=384,307");
        }
        Node10: WSNNode {
            @display("p=581,128");
        }
        Node11: WSNNode {
            @display("p=439,181");
        }
        Node12: WSNNode {
            @display("p=315,251");
        }
        Node13: WSNNode {
            @display("p=222,251");
        }
        Node14: WSNNode {
            @display("p=120,251");
        }
}
