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

network Test3
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
            @display("p=752,239;i=old/bwsink");
        }
        Node1: WSNNode {
            @display("p=623,158");
        }
        Node2: WSNNode {
            @display("p=623,326");
        }
        Node3: WSNNode {
            @display("p=474,429");
        }
        Node4: WSNNode {
            @display("p=467,239");
        }
        Node5: WSNNode {
            @display("p=467,69");
        }
        Node6: WSNNode {
            @display("p=356,69");
        }
        Node7: WSNNode {
            @display("p=410,158");
        }
        Node8: WSNNode {
            @display("p=410,491");
        }
        Node9: WSNNode {
            @display("p=356,429");
        }
        Node10: WSNNode {
            @display("p=271,6");
        }
        Node11: WSNNode {
            @display("p=271,133");
        }
        Node12: WSNNode {
            @display("p=271,253");
        }
        Node13: WSNNode {
            @display("p=271,366");
        }
        Node14: WSNNode {
            @display("p=271,491");
        }
}