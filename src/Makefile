#
# OMNeT++/OMNEST Makefile for libinet
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -o inet -O out
#

# Name of target to be created (-o option)
TARGET = libinet$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I. \
    -Iapplications \
    -Iapplications/ethernet \
    -Iapplications/generic \
    -Iapplications/pingapp \
    -Iapplications/rtpapp \
    -Iapplications/tcpapp \
    -Iapplications/udpapp \
    -Ibase \
    -Iexperimental \
    -Iexperimental/applications \
    -Iexperimental/applications/ethernet \
    -Iexperimental/applications/generic \
    -Iexperimental/applications/pingapp \
    -Iexperimental/applications/rtpapp \
    -Iexperimental/applications/tcpapp \
    -Iexperimental/applications/udpapp \
    -Iexperimental/base \
    -Iexperimental/linklayer \
    -Iexperimental/linklayer/contract \
    -Iexperimental/linklayer/ethernet \
    -Iexperimental/linklayer/etherswitch \
    -Iexperimental/linklayer/ieee80211 \
    -Iexperimental/linklayer/ieee80211/mac \
    -Iexperimental/linklayer/ieee80211/mgmt \
    -Iexperimental/linklayer/mf80211 \
    -Iexperimental/linklayer/mf80211/macLayer \
    -Iexperimental/linklayer/mf80211/phyLayer \
    -Iexperimental/linklayer/mf80211/phyLayer/decider \
    -Iexperimental/linklayer/mf80211/phyLayer/snrEval \
    -Iexperimental/linklayer/mfcore \
    -Iexperimental/linklayer/ppp \
    -Iexperimental/linklayer/radio \
    -Iexperimental/mobility \
    -Iexperimental/networklayer \
    -Iexperimental/networklayer/arp \
    -Iexperimental/networklayer/autorouting \
    -Iexperimental/networklayer/common \
    -Iexperimental/networklayer/contract \
    -Iexperimental/networklayer/extras \
    -Iexperimental/networklayer/icmpv6 \
    -Iexperimental/networklayer/ipv4 \
    -Iexperimental/networklayer/ipv6 \
    -Iexperimental/networklayer/ldp \
    -Iexperimental/networklayer/manetrouting \
    -Iexperimental/networklayer/mpls \
    -Iexperimental/networklayer/ospfv2 \
    -Iexperimental/networklayer/queue \
    -Iexperimental/networklayer/rsvp_te \
    -Iexperimental/networklayer/ted \
    -Iexperimental/nodes \
    -Iexperimental/nodes/adhoc \
    -Iexperimental/nodes/ethernet \
    -Iexperimental/nodes/inet \
    -Iexperimental/nodes/ipv6 \
    -Iexperimental/nodes/mpls \
    -Iexperimental/nodes/wireless \
    -Iexperimental/transport \
    -Iexperimental/transport/contract \
    -Iexperimental/transport/rtp \
    -Iexperimental/transport/tcp \
    -Iexperimental/transport/tcp/flavours \
    -Iexperimental/transport/tcp/queues \
    -Iexperimental/transport/udp \
    -Iexperimental/util \
    -Iexperimental/world \
    -Ilinklayer \
    -Ilinklayer/contract \
    -Ilinklayer/ethernet \
    -Ilinklayer/etherswitch \
    -Ilinklayer/ieee80211 \
    -Ilinklayer/ieee80211/mac \
    -Ilinklayer/ieee80211/mgmt \
    -Ilinklayer/mf80211 \
    -Ilinklayer/mf80211/macLayer \
    -Ilinklayer/mf80211/phyLayer \
    -Ilinklayer/mf80211/phyLayer/decider \
    -Ilinklayer/mf80211/phyLayer/snrEval \
    -Ilinklayer/mfcore \
    -Ilinklayer/ppp \
    -Ilinklayer/radio \
    -Imobility \
    -Inetworklayer \
    -Inetworklayer/arp \
    -Inetworklayer/autorouting \
    -Inetworklayer/common \
    -Inetworklayer/contract \
    -Inetworklayer/extras \
    -Inetworklayer/icmpv6 \
    -Inetworklayer/ipv4 \
    -Inetworklayer/ipv6 \
    -Inetworklayer/ldp \
    -Inetworklayer/manetrouting \
    -Inetworklayer/manetrouting/aodv \
    -Inetworklayer/manetrouting/aodv/aodv-uu \
    -Inetworklayer/manetrouting/base \
    -Inetworklayer/manetrouting/dsdv \
    -Inetworklayer/manetrouting/dsr \
    -Inetworklayer/manetrouting/dsr/dsr-uu \
    -Inetworklayer/manetrouting/dymo \
    -Inetworklayer/manetrouting/dymo/dymoum \
    -Inetworklayer/manetrouting/dymo_fau \
    -Inetworklayer/manetrouting/manager \
    -Inetworklayer/manetrouting/olsr \
    -Inetworklayer/mpls \
    -Inetworklayer/ospfv2 \
    -Inetworklayer/ospfv2/interface \
    -Inetworklayer/ospfv2/messagehandler \
    -Inetworklayer/ospfv2/neighbor \
    -Inetworklayer/ospfv2/router \
    -Inetworklayer/queue \
    -Inetworklayer/rsvp_te \
    -Inetworklayer/ted \
    -Inodes \
    -Inodes/adhoc \
    -Inodes/ethernet \
    -Inodes/inet \
    -Inodes/ipv6 \
    -Inodes/mpls \
    -Inodes/wireless \
    -Itransport \
    -Itransport/contract \
    -Itransport/rtp \
    -Itransport/rtp/profiles \
    -Itransport/rtp/profiles/avprofile \
    -Itransport/tcp \
    -Itransport/tcp/flavours \
    -Itransport/tcp/queues \
    -Itransport/udp \
    -Iutil \
    -Iutil/headerserializers \
    -Iutil/headerserializers/headers \
    -Iworld

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = /src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/applications/ethernet/EtherAppCli.o \
    $O/applications/ethernet/EtherAppSrv.o \
    $O/applications/generic/IPTrafGen.o \
    $O/applications/pingapp/PingApp.o \
    $O/applications/rtpapp/RTPApplication.o \
    $O/applications/tcpapp/TCPBasicClientApp.o \
    $O/applications/tcpapp/TCPEchoApp.o \
    $O/applications/tcpapp/TCPGenericCliAppBase.o \
    $O/applications/tcpapp/TCPGenericSrvApp.o \
    $O/applications/tcpapp/TCPGenericSrvThread.o \
    $O/applications/tcpapp/TCPSessionApp.o \
    $O/applications/tcpapp/TCPSinkApp.o \
    $O/applications/tcpapp/TCPSpoof.o \
    $O/applications/tcpapp/TCPSrvHostApp.o \
    $O/applications/tcpapp/TelnetApp.o \
    $O/applications/udpapp/UDPAppBase.o \
    $O/applications/udpapp/UDPBasicApp.o \
    $O/applications/udpapp/UDPBasicBurst.o \
    $O/applications/udpapp/UDPEchoApp.o \
    $O/applications/udpapp/UDPSink.o \
    $O/applications/udpapp/UDPVideoStreamCli.o \
    $O/applications/udpapp/UDPVideoStreamSvr.o \
    $O/base/AbstractQueue.o \
    $O/base/BasicModule.o \
    $O/base/Blackboard.o \
    $O/base/ByteArrayMessage.o \
    $O/base/Join.o \
    $O/base/ModuleAccess.o \
    $O/base/NotificationBoard.o \
    $O/base/NotifierConsts.o \
    $O/base/PassiveQueueBase.o \
    $O/base/ProtocolMap.o \
    $O/base/QueueBase.o \
    $O/base/QueueWithQoS.o \
    $O/base/ReassemblyBuffer.o \
    $O/base/Sink.o \
    $O/experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.o \
    $O/experimental/linklayer/ieee80211/mgmt/lwmpls_data.o \
    $O/linklayer/contract/MACAddress.o \
    $O/linklayer/ethernet/EtherBus.o \
    $O/linklayer/ethernet/EtherEncap.o \
    $O/linklayer/ethernet/EtherHub.o \
    $O/linklayer/ethernet/EtherLLC.o \
    $O/linklayer/ethernet/EtherMAC.o \
    $O/linklayer/ethernet/EtherMAC2.o \
    $O/linklayer/ethernet/EtherMACBase.o \
    $O/linklayer/etherswitch/MACRelayUnitBase.o \
    $O/linklayer/etherswitch/MACRelayUnitNP.o \
    $O/linklayer/etherswitch/MACRelayUnitPP.o \
    $O/linklayer/ieee80211/mac/Ieee80211aMac.o \
    $O/linklayer/ieee80211/mac/Ieee80211gMac.o \
    $O/linklayer/ieee80211/mac/Ieee80211Mac.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/linklayer/mf80211/macLayer/CSMAMacLayer.o \
    $O/linklayer/mf80211/macLayer/Mac80211.o \
    $O/linklayer/mf80211/phyLayer/decider/Decider80211.o \
    $O/linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.o \
    $O/linklayer/mf80211/phyLayer/decider/SnrDecider.o \
    $O/linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.o \
    $O/linklayer/mf80211/phyLayer/snrEval/SnrEval.o \
    $O/linklayer/mf80211/phyLayer/snrEval/SnrEval80211.o \
    $O/linklayer/mfcore/BasicDecider.o \
    $O/linklayer/mfcore/BasicSnrEval.o \
    $O/linklayer/mfcore/WirelessMacBase.o \
    $O/linklayer/ppp/PPP.o \
    $O/linklayer/ppp/ThruputMeter.o \
    $O/linklayer/radio/AbstractRadio.o \
    $O/linklayer/radio/bpskMode.o \
    $O/linklayer/radio/GenericRadio.o \
    $O/linklayer/radio/GenericRadioModel.o \
    $O/linklayer/radio/Ieee80211aRadio.o \
    $O/linklayer/radio/Ieee80211aRadioModel.o \
    $O/linklayer/radio/Ieee80211gRadio.o \
    $O/linklayer/radio/Ieee80211gRadioModel.o \
    $O/linklayer/radio/Ieee80211Radio.o \
    $O/linklayer/radio/Ieee80211RadioModel.o \
    $O/linklayer/radio/Modulation.o \
    $O/linklayer/radio/PathLossReceptionModel.o \
    $O/linklayer/radio/qamMode.o \
    $O/linklayer/radio/transmissionMode.o \
    $O/linklayer/radio/TwoRayModel.o \
    $O/mobility/ANSimMobility.o \
    $O/mobility/BasicMobility.o \
    $O/mobility/BonnMotionFileCache.o \
    $O/mobility/BonnMotionMobility.o \
    $O/mobility/CircleMobility.o \
    $O/mobility/ConstSpeedMobility.o \
    $O/mobility/LinearMobility.o \
    $O/mobility/LineSegmentsMobilityBase.o \
    $O/mobility/MassMobility.o \
    $O/mobility/Ns2MotionMobility.o \
    $O/mobility/NullMobility.o \
    $O/mobility/RandomWPMobility.o \
    $O/mobility/RectangleMobility.o \
    $O/mobility/TraCIMobility.o \
    $O/mobility/TurtleMobility.o \
    $O/networklayer/arp/ARP.o \
    $O/networklayer/autorouting/FlatNetworkConfigurator.o \
    $O/networklayer/autorouting/FlatNetworkConfigurator6.o \
    $O/networklayer/autorouting/NetworkConfigurator.o \
    $O/networklayer/common/InterfaceEntry.o \
    $O/networklayer/common/InterfaceTable.o \
    $O/networklayer/contract/IPAddress.o \
    $O/networklayer/contract/IPAddressResolver.o \
    $O/networklayer/contract/IPControlInfo.o \
    $O/networklayer/contract/IPv6Address.o \
    $O/networklayer/contract/IPv6ControlInfo.o \
    $O/networklayer/contract/IPvXAddress.o \
    $O/networklayer/extras/Dummy.o \
    $O/networklayer/extras/FailureManager.o \
    $O/networklayer/extras/NetworkInfo.o \
    $O/networklayer/icmpv6/ICMPv6.o \
    $O/networklayer/icmpv6/IPv6NeighbourCache.o \
    $O/networklayer/icmpv6/IPv6NeighbourDiscovery.o \
    $O/networklayer/ipv4/ErrorHandling.o \
    $O/networklayer/ipv4/ICMP.o \
    $O/networklayer/ipv4/IP.o \
    $O/networklayer/ipv4/IPFragBuf.o \
    $O/networklayer/ipv4/IPRoute.o \
    $O/networklayer/ipv4/IPv4InterfaceData.o \
    $O/networklayer/ipv4/RoutingTable.o \
    $O/networklayer/ipv4/RoutingTableParser.o \
    $O/networklayer/ipv6/IPv6.o \
    $O/networklayer/ipv6/IPv6Datagram.o \
    $O/networklayer/ipv6/IPv6ErrorHandling.o \
    $O/networklayer/ipv6/IPv6FragBuf.o \
    $O/networklayer/ipv6/IPv6InterfaceData.o \
    $O/networklayer/ipv6/RoutingTable6.o \
    $O/networklayer/ldp/LDP.o \
    $O/networklayer/manetrouting/aodv/aodv_msg_struct.o \
    $O/networklayer/manetrouting/aodv/aodv_uu_omnet.o \
    $O/networklayer/manetrouting/aodv/packet_queue_omnet.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_hello.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_socket.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/debug.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/list.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/locality.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/routing_table.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/seek_list.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/timer_queue.o \
    $O/networklayer/manetrouting/base/int128.o \
    $O/networklayer/manetrouting/base/ManetRoutingBase.o \
    $O/networklayer/manetrouting/base/uint128.o \
    $O/networklayer/manetrouting/dsdv/DSDV_2.o \
    $O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o \
    $O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/neigh.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o \
    $O/networklayer/manetrouting/dymo/dymo_msg_struct.o \
    $O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o \
    $O/networklayer/manetrouting/dymo/dymo_um_omnet.o \
    $O/networklayer/manetrouting/dymo/dymoum/blacklist.o \
    $O/networklayer/manetrouting/dymo/dymoum/debug.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_re.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o \
    $O/networklayer/manetrouting/dymo/dymoum/rtable.o \
    $O/networklayer/manetrouting/dymo/dymoum/timer_queue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o \
    $O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o \
    $O/networklayer/manetrouting/manager/ManetManager.o \
    $O/networklayer/manetrouting/olsr/OLSR.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_state.o \
    $O/networklayer/manetrouting/olsr/OLSR_rtable.o \
    $O/networklayer/manetrouting/olsr/OLSR_state.o \
    $O/networklayer/mpls/LIBTable.o \
    $O/networklayer/mpls/MPLS.o \
    $O/networklayer/mpls/MPLSPacket.o \
    $O/networklayer/ospfv2/OSPFRouting.o \
    $O/networklayer/ospfv2/interface/OSPFInterface.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceState.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o \
    $O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o \
    $O/networklayer/ospfv2/messagehandler/HelloHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o \
    $O/networklayer/ospfv2/messagehandler/MessageHandler.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighbor.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborState.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o \
    $O/networklayer/ospfv2/router/ASExternalLSA.o \
    $O/networklayer/ospfv2/router/NetworkLSA.o \
    $O/networklayer/ospfv2/router/OSPFArea.o \
    $O/networklayer/ospfv2/router/OSPFRouter.o \
    $O/networklayer/ospfv2/router/RouterLSA.o \
    $O/networklayer/ospfv2/router/SummaryLSA.o \
    $O/networklayer/queue/BasicDSCPClassifier.o \
    $O/networklayer/queue/DropTailQoSQueue.o \
    $O/networklayer/queue/DropTailQueue.o \
    $O/networklayer/queue/REDQueue.o \
    $O/networklayer/rsvp_te/RSVP.o \
    $O/networklayer/rsvp_te/SimpleClassifier.o \
    $O/networklayer/rsvp_te/Utils.o \
    $O/networklayer/ted/LinkStateRouting.o \
    $O/networklayer/ted/TED.o \
    $O/transport/contract/TCPSocket.o \
    $O/transport/contract/TCPSocketMap.o \
    $O/transport/contract/UDPSocket.o \
    $O/transport/rtp/reports.o \
    $O/transport/rtp/RTCP.o \
    $O/transport/rtp/RTCPPacket.o \
    $O/transport/rtp/RTP.o \
    $O/transport/rtp/RTPInnerPacket.o \
    $O/transport/rtp/RTPInterfacePacket.o \
    $O/transport/rtp/RTPPacket.o \
    $O/transport/rtp/RTPParticipantInfo.o \
    $O/transport/rtp/RTPPayloadReceiver.o \
    $O/transport/rtp/RTPPayloadSender.o \
    $O/transport/rtp/RTPProfile.o \
    $O/transport/rtp/RTPReceiverInfo.o \
    $O/transport/rtp/RTPSenderInfo.o \
    $O/transport/rtp/sdes.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfile.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o \
    $O/transport/tcp/TCP.o \
    $O/transport/tcp/TCPConnectionBase.o \
    $O/transport/tcp/TCPConnectionEventProc.o \
    $O/transport/tcp/TCPConnectionRcvSegment.o \
    $O/transport/tcp/TCPConnectionUtil.o \
    $O/transport/tcp/TCPSegment.o \
    $O/transport/tcp/flavours/DumbTCP.o \
    $O/transport/tcp/flavours/TCPBaseAlg.o \
    $O/transport/tcp/flavours/TCPNoCongestionControl.o \
    $O/transport/tcp/flavours/TCPReno.o \
    $O/transport/tcp/flavours/TCPTahoe.o \
    $O/transport/tcp/flavours/TCPTahoeRenoFamily.o \
    $O/transport/tcp/queues/TCPMsgBasedRcvQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedSendQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataRcvQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataSendQueue.o \
    $O/transport/udp/UDP.o \
    $O/util/common.o \
    $O/util/NAMTraceWriter.o \
    $O/util/opp_utils.o \
    $O/util/TCPDump.o \
    $O/util/ThruputMeteringChannel.o \
    $O/util/XMLUtils.o \
    $O/util/headerserializers/ICMPSerializer.o \
    $O/util/headerserializers/IPSerializer.o \
    $O/util/headerserializers/UDPSerializer.o \
    $O/world/ChannelAccess.o \
    $O/world/ChannelControl.o \
    $O/world/ChannelInstaller.o \
    $O/world/NAMTrace.o \
    $O/world/ScenarioManager.o \
    $O/world/TraCIScenarioManager.o \
    $O/applications/ethernet/EtherApp_m.o \
    $O/applications/pingapp/PingPayload_m.o \
    $O/applications/tcpapp/GenericAppMsg_m.o \
    $O/applications/udpapp/UDPEchoAppMsg_m.o \
    $O/base/ByteArrayMessage_m.o \
    $O/experimental/linklayer/contract/MeshControlInfo_m.o \
    $O/experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.o \
    $O/linklayer/contract/ControlInfoBreakLink_m.o \
    $O/linklayer/contract/Ieee802Ctrl_m.o \
    $O/linklayer/contract/PhyControlInfo_m.o \
    $O/linklayer/contract/Radio80211aControlInfo_m.o \
    $O/linklayer/ethernet/EtherFrame_m.o \
    $O/linklayer/ieee80211/mac/Ieee80211Frame_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/linklayer/mf80211/macLayer/Mac80211Pkt_m.o \
    $O/linklayer/mf80211/macLayer/MacPkt_m.o \
    $O/linklayer/mfcore/AirFrame_m.o \
    $O/linklayer/mfcore/SnrControlInfo_m.o \
    $O/linklayer/mfcore/TransmComplete_m.o \
    $O/linklayer/ppp/PPPFrame_m.o \
    $O/networklayer/arp/ARPPacket_m.o \
    $O/networklayer/contract/IPControlInfo_m.o \
    $O/networklayer/contract/IPProtocolId_m.o \
    $O/networklayer/contract/IPv6ControlInfo_m.o \
    $O/networklayer/icmpv6/ICMPv6Message_m.o \
    $O/networklayer/icmpv6/IPv6NDMessage_m.o \
    $O/networklayer/ipv4/ControlManetRouting_m.o \
    $O/networklayer/ipv4/ICMPMessage_m.o \
    $O/networklayer/ipv4/IPDatagram_m.o \
    $O/networklayer/ipv6/IPv6Datagram_m.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders_m.o \
    $O/networklayer/ldp/LDPPacket_m.o \
    $O/networklayer/manetrouting/dsdv/DSDVhello_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o \
    $O/networklayer/manetrouting/olsr/OLSRpkt_m.o \
    $O/networklayer/ospfv2/OSPFPacket_m.o \
    $O/networklayer/ospfv2/OSPFTimer_m.o \
    $O/networklayer/rsvp_te/IntServ_m.o \
    $O/networklayer/rsvp_te/RSVPHello_m.o \
    $O/networklayer/rsvp_te/RSVPPacket_m.o \
    $O/networklayer/rsvp_te/RSVPPathMsg_m.o \
    $O/networklayer/rsvp_te/RSVPResvMsg_m.o \
    $O/networklayer/rsvp_te/SignallingMsg_m.o \
    $O/networklayer/ted/LinkStatePacket_m.o \
    $O/networklayer/ted/TED_m.o \
    $O/transport/contract/TCPCommand_m.o \
    $O/transport/contract/UDPControlInfo_m.o \
    $O/transport/rtp/RTPSenderControlMessage_m.o \
    $O/transport/rtp/RTPSenderStatusMessage_m.o \
    $O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o \
    $O/transport/tcp/TCPSegment_m.o \
    $O/transport/udp/UDPPacket_m.o

# Message files
MSGFILES = \
    applications/ethernet/EtherApp.msg \
    applications/pingapp/PingPayload.msg \
    applications/tcpapp/GenericAppMsg.msg \
    applications/udpapp/UDPEchoAppMsg.msg \
    base/ByteArrayMessage.msg \
    experimental/linklayer/contract/MeshControlInfo.msg \
    experimental/linklayer/ieee80211/mgmt/LWMPLSPacket.msg \
    linklayer/contract/ControlInfoBreakLink.msg \
    linklayer/contract/Ieee802Ctrl.msg \
    linklayer/contract/PhyControlInfo.msg \
    linklayer/contract/Radio80211aControlInfo.msg \
    linklayer/ethernet/EtherFrame.msg \
    linklayer/ieee80211/mac/Ieee80211Frame.msg \
    linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    linklayer/ieee80211/mgmt/Ieee80211Primitives.msg \
    linklayer/mf80211/macLayer/Mac80211Pkt.msg \
    linklayer/mf80211/macLayer/MacPkt.msg \
    linklayer/mfcore/AirFrame.msg \
    linklayer/mfcore/SnrControlInfo.msg \
    linklayer/mfcore/TransmComplete.msg \
    linklayer/ppp/PPPFrame.msg \
    networklayer/arp/ARPPacket.msg \
    networklayer/contract/IPControlInfo.msg \
    networklayer/contract/IPProtocolId.msg \
    networklayer/contract/IPv6ControlInfo.msg \
    networklayer/icmpv6/ICMPv6Message.msg \
    networklayer/icmpv6/IPv6NDMessage.msg \
    networklayer/ipv4/ControlManetRouting.msg \
    networklayer/ipv4/ICMPMessage.msg \
    networklayer/ipv4/IPDatagram.msg \
    networklayer/ipv6/IPv6Datagram.msg \
    networklayer/ipv6/IPv6ExtensionHeaders.msg \
    networklayer/ldp/LDPPacket.msg \
    networklayer/manetrouting/dsdv/DSDVhello.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Packet.msg \
    networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RERR.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RM.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREP.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREQ.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Timeout.msg \
    networklayer/manetrouting/dymo_fau/DYMO_UERR.msg \
    networklayer/manetrouting/olsr/OLSRpkt.msg \
    networklayer/ospfv2/OSPFPacket.msg \
    networklayer/ospfv2/OSPFTimer.msg \
    networklayer/rsvp_te/IntServ.msg \
    networklayer/rsvp_te/RSVPHello.msg \
    networklayer/rsvp_te/RSVPPacket.msg \
    networklayer/rsvp_te/RSVPPathMsg.msg \
    networklayer/rsvp_te/RSVPResvMsg.msg \
    networklayer/rsvp_te/SignallingMsg.msg \
    networklayer/ted/LinkStatePacket.msg \
    networklayer/ted/TED.msg \
    transport/contract/TCPCommand.msg \
    transport/contract/UDPControlInfo.msg \
    transport/rtp/RTPSenderControlMessage.msg \
    transport/rtp/RTPSenderStatusMessage.msg \
    transport/rtp/profiles/avprofile/RTPMpegPacket.msg \
    transport/tcp/TCPSegment.msg \
    transport/udp/UDPPacket.msg

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $(TARGET)

$(TARGET) : $O/$(TARGET)
	ln -s -f $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@mkdir -p $O
	$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(LIBS) $(OMNETPP_LIBS) $(LDFLAGS)

.PHONY:

.SUFFIXES: .cc

$O/%.o: %.cc
	@mkdir -p $(dir $@)
	$(CXX) -c $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	-rm -rf $O
	-rm -f inet inet.exe libinet.so libinet.a libinet.dll libinet.dylib
	-rm -f ./*_m.cc ./*_m.h
	-rm -f applications/*_m.cc applications/*_m.h
	-rm -f applications/ethernet/*_m.cc applications/ethernet/*_m.h
	-rm -f applications/generic/*_m.cc applications/generic/*_m.h
	-rm -f applications/pingapp/*_m.cc applications/pingapp/*_m.h
	-rm -f applications/rtpapp/*_m.cc applications/rtpapp/*_m.h
	-rm -f applications/tcpapp/*_m.cc applications/tcpapp/*_m.h
	-rm -f applications/udpapp/*_m.cc applications/udpapp/*_m.h
	-rm -f base/*_m.cc base/*_m.h
	-rm -f experimental/*_m.cc experimental/*_m.h
	-rm -f experimental/applications/*_m.cc experimental/applications/*_m.h
	-rm -f experimental/applications/ethernet/*_m.cc experimental/applications/ethernet/*_m.h
	-rm -f experimental/applications/generic/*_m.cc experimental/applications/generic/*_m.h
	-rm -f experimental/applications/pingapp/*_m.cc experimental/applications/pingapp/*_m.h
	-rm -f experimental/applications/rtpapp/*_m.cc experimental/applications/rtpapp/*_m.h
	-rm -f experimental/applications/tcpapp/*_m.cc experimental/applications/tcpapp/*_m.h
	-rm -f experimental/applications/udpapp/*_m.cc experimental/applications/udpapp/*_m.h
	-rm -f experimental/base/*_m.cc experimental/base/*_m.h
	-rm -f experimental/linklayer/*_m.cc experimental/linklayer/*_m.h
	-rm -f experimental/linklayer/contract/*_m.cc experimental/linklayer/contract/*_m.h
	-rm -f experimental/linklayer/ethernet/*_m.cc experimental/linklayer/ethernet/*_m.h
	-rm -f experimental/linklayer/etherswitch/*_m.cc experimental/linklayer/etherswitch/*_m.h
	-rm -f experimental/linklayer/ieee80211/*_m.cc experimental/linklayer/ieee80211/*_m.h
	-rm -f experimental/linklayer/ieee80211/mac/*_m.cc experimental/linklayer/ieee80211/mac/*_m.h
	-rm -f experimental/linklayer/ieee80211/mgmt/*_m.cc experimental/linklayer/ieee80211/mgmt/*_m.h
	-rm -f experimental/linklayer/mf80211/*_m.cc experimental/linklayer/mf80211/*_m.h
	-rm -f experimental/linklayer/mf80211/macLayer/*_m.cc experimental/linklayer/mf80211/macLayer/*_m.h
	-rm -f experimental/linklayer/mf80211/phyLayer/*_m.cc experimental/linklayer/mf80211/phyLayer/*_m.h
	-rm -f experimental/linklayer/mf80211/phyLayer/decider/*_m.cc experimental/linklayer/mf80211/phyLayer/decider/*_m.h
	-rm -f experimental/linklayer/mf80211/phyLayer/snrEval/*_m.cc experimental/linklayer/mf80211/phyLayer/snrEval/*_m.h
	-rm -f experimental/linklayer/mfcore/*_m.cc experimental/linklayer/mfcore/*_m.h
	-rm -f experimental/linklayer/ppp/*_m.cc experimental/linklayer/ppp/*_m.h
	-rm -f experimental/linklayer/radio/*_m.cc experimental/linklayer/radio/*_m.h
	-rm -f experimental/mobility/*_m.cc experimental/mobility/*_m.h
	-rm -f experimental/networklayer/*_m.cc experimental/networklayer/*_m.h
	-rm -f experimental/networklayer/arp/*_m.cc experimental/networklayer/arp/*_m.h
	-rm -f experimental/networklayer/autorouting/*_m.cc experimental/networklayer/autorouting/*_m.h
	-rm -f experimental/networklayer/common/*_m.cc experimental/networklayer/common/*_m.h
	-rm -f experimental/networklayer/contract/*_m.cc experimental/networklayer/contract/*_m.h
	-rm -f experimental/networklayer/extras/*_m.cc experimental/networklayer/extras/*_m.h
	-rm -f experimental/networklayer/icmpv6/*_m.cc experimental/networklayer/icmpv6/*_m.h
	-rm -f experimental/networklayer/ipv4/*_m.cc experimental/networklayer/ipv4/*_m.h
	-rm -f experimental/networklayer/ipv6/*_m.cc experimental/networklayer/ipv6/*_m.h
	-rm -f experimental/networklayer/ldp/*_m.cc experimental/networklayer/ldp/*_m.h
	-rm -f experimental/networklayer/manetrouting/*_m.cc experimental/networklayer/manetrouting/*_m.h
	-rm -f experimental/networklayer/mpls/*_m.cc experimental/networklayer/mpls/*_m.h
	-rm -f experimental/networklayer/ospfv2/*_m.cc experimental/networklayer/ospfv2/*_m.h
	-rm -f experimental/networklayer/queue/*_m.cc experimental/networklayer/queue/*_m.h
	-rm -f experimental/networklayer/rsvp_te/*_m.cc experimental/networklayer/rsvp_te/*_m.h
	-rm -f experimental/networklayer/ted/*_m.cc experimental/networklayer/ted/*_m.h
	-rm -f experimental/nodes/*_m.cc experimental/nodes/*_m.h
	-rm -f experimental/nodes/adhoc/*_m.cc experimental/nodes/adhoc/*_m.h
	-rm -f experimental/nodes/ethernet/*_m.cc experimental/nodes/ethernet/*_m.h
	-rm -f experimental/nodes/inet/*_m.cc experimental/nodes/inet/*_m.h
	-rm -f experimental/nodes/ipv6/*_m.cc experimental/nodes/ipv6/*_m.h
	-rm -f experimental/nodes/mpls/*_m.cc experimental/nodes/mpls/*_m.h
	-rm -f experimental/nodes/wireless/*_m.cc experimental/nodes/wireless/*_m.h
	-rm -f experimental/transport/*_m.cc experimental/transport/*_m.h
	-rm -f experimental/transport/contract/*_m.cc experimental/transport/contract/*_m.h
	-rm -f experimental/transport/rtp/*_m.cc experimental/transport/rtp/*_m.h
	-rm -f experimental/transport/tcp/*_m.cc experimental/transport/tcp/*_m.h
	-rm -f experimental/transport/tcp/flavours/*_m.cc experimental/transport/tcp/flavours/*_m.h
	-rm -f experimental/transport/tcp/queues/*_m.cc experimental/transport/tcp/queues/*_m.h
	-rm -f experimental/transport/udp/*_m.cc experimental/transport/udp/*_m.h
	-rm -f experimental/util/*_m.cc experimental/util/*_m.h
	-rm -f experimental/world/*_m.cc experimental/world/*_m.h
	-rm -f linklayer/*_m.cc linklayer/*_m.h
	-rm -f linklayer/contract/*_m.cc linklayer/contract/*_m.h
	-rm -f linklayer/ethernet/*_m.cc linklayer/ethernet/*_m.h
	-rm -f linklayer/etherswitch/*_m.cc linklayer/etherswitch/*_m.h
	-rm -f linklayer/ieee80211/*_m.cc linklayer/ieee80211/*_m.h
	-rm -f linklayer/ieee80211/mac/*_m.cc linklayer/ieee80211/mac/*_m.h
	-rm -f linklayer/ieee80211/mgmt/*_m.cc linklayer/ieee80211/mgmt/*_m.h
	-rm -f linklayer/mf80211/*_m.cc linklayer/mf80211/*_m.h
	-rm -f linklayer/mf80211/macLayer/*_m.cc linklayer/mf80211/macLayer/*_m.h
	-rm -f linklayer/mf80211/phyLayer/*_m.cc linklayer/mf80211/phyLayer/*_m.h
	-rm -f linklayer/mf80211/phyLayer/decider/*_m.cc linklayer/mf80211/phyLayer/decider/*_m.h
	-rm -f linklayer/mf80211/phyLayer/snrEval/*_m.cc linklayer/mf80211/phyLayer/snrEval/*_m.h
	-rm -f linklayer/mfcore/*_m.cc linklayer/mfcore/*_m.h
	-rm -f linklayer/ppp/*_m.cc linklayer/ppp/*_m.h
	-rm -f linklayer/radio/*_m.cc linklayer/radio/*_m.h
	-rm -f mobility/*_m.cc mobility/*_m.h
	-rm -f networklayer/*_m.cc networklayer/*_m.h
	-rm -f networklayer/arp/*_m.cc networklayer/arp/*_m.h
	-rm -f networklayer/autorouting/*_m.cc networklayer/autorouting/*_m.h
	-rm -f networklayer/common/*_m.cc networklayer/common/*_m.h
	-rm -f networklayer/contract/*_m.cc networklayer/contract/*_m.h
	-rm -f networklayer/extras/*_m.cc networklayer/extras/*_m.h
	-rm -f networklayer/icmpv6/*_m.cc networklayer/icmpv6/*_m.h
	-rm -f networklayer/ipv4/*_m.cc networklayer/ipv4/*_m.h
	-rm -f networklayer/ipv6/*_m.cc networklayer/ipv6/*_m.h
	-rm -f networklayer/ldp/*_m.cc networklayer/ldp/*_m.h
	-rm -f networklayer/manetrouting/*_m.cc networklayer/manetrouting/*_m.h
	-rm -f networklayer/manetrouting/aodv/*_m.cc networklayer/manetrouting/aodv/*_m.h
	-rm -f networklayer/manetrouting/aodv/aodv-uu/*_m.cc networklayer/manetrouting/aodv/aodv-uu/*_m.h
	-rm -f networklayer/manetrouting/base/*_m.cc networklayer/manetrouting/base/*_m.h
	-rm -f networklayer/manetrouting/dsdv/*_m.cc networklayer/manetrouting/dsdv/*_m.h
	-rm -f networklayer/manetrouting/dsr/*_m.cc networklayer/manetrouting/dsr/*_m.h
	-rm -f networklayer/manetrouting/dsr/dsr-uu/*_m.cc networklayer/manetrouting/dsr/dsr-uu/*_m.h
	-rm -f networklayer/manetrouting/dymo/*_m.cc networklayer/manetrouting/dymo/*_m.h
	-rm -f networklayer/manetrouting/dymo/dymoum/*_m.cc networklayer/manetrouting/dymo/dymoum/*_m.h
	-rm -f networklayer/manetrouting/dymo_fau/*_m.cc networklayer/manetrouting/dymo_fau/*_m.h
	-rm -f networklayer/manetrouting/manager/*_m.cc networklayer/manetrouting/manager/*_m.h
	-rm -f networklayer/manetrouting/olsr/*_m.cc networklayer/manetrouting/olsr/*_m.h
	-rm -f networklayer/mpls/*_m.cc networklayer/mpls/*_m.h
	-rm -f networklayer/ospfv2/*_m.cc networklayer/ospfv2/*_m.h
	-rm -f networklayer/ospfv2/interface/*_m.cc networklayer/ospfv2/interface/*_m.h
	-rm -f networklayer/ospfv2/messagehandler/*_m.cc networklayer/ospfv2/messagehandler/*_m.h
	-rm -f networklayer/ospfv2/neighbor/*_m.cc networklayer/ospfv2/neighbor/*_m.h
	-rm -f networklayer/ospfv2/router/*_m.cc networklayer/ospfv2/router/*_m.h
	-rm -f networklayer/queue/*_m.cc networklayer/queue/*_m.h
	-rm -f networklayer/rsvp_te/*_m.cc networklayer/rsvp_te/*_m.h
	-rm -f networklayer/ted/*_m.cc networklayer/ted/*_m.h
	-rm -f nodes/*_m.cc nodes/*_m.h
	-rm -f nodes/adhoc/*_m.cc nodes/adhoc/*_m.h
	-rm -f nodes/ethernet/*_m.cc nodes/ethernet/*_m.h
	-rm -f nodes/inet/*_m.cc nodes/inet/*_m.h
	-rm -f nodes/ipv6/*_m.cc nodes/ipv6/*_m.h
	-rm -f nodes/mpls/*_m.cc nodes/mpls/*_m.h
	-rm -f nodes/wireless/*_m.cc nodes/wireless/*_m.h
	-rm -f transport/*_m.cc transport/*_m.h
	-rm -f transport/contract/*_m.cc transport/contract/*_m.h
	-rm -f transport/rtp/*_m.cc transport/rtp/*_m.h
	-rm -f transport/rtp/profiles/*_m.cc transport/rtp/profiles/*_m.h
	-rm -f transport/rtp/profiles/avprofile/*_m.cc transport/rtp/profiles/avprofile/*_m.h
	-rm -f transport/tcp/*_m.cc transport/tcp/*_m.h
	-rm -f transport/tcp/flavours/*_m.cc transport/tcp/flavours/*_m.h
	-rm -f transport/tcp/queues/*_m.cc transport/tcp/queues/*_m.h
	-rm -f transport/udp/*_m.cc transport/udp/*_m.h
	-rm -f util/*_m.cc util/*_m.h
	-rm -f util/headerserializers/*_m.cc util/headerserializers/*_m.h
	-rm -f util/headerserializers/headers/*_m.cc util/headerserializers/headers/*_m.h
	-rm -f world/*_m.cc world/*_m.h

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/ethernet/*.cc applications/generic/*.cc applications/pingapp/*.cc applications/rtpapp/*.cc applications/tcpapp/*.cc applications/udpapp/*.cc base/*.cc experimental/*.cc experimental/applications/*.cc experimental/applications/ethernet/*.cc experimental/applications/generic/*.cc experimental/applications/pingapp/*.cc experimental/applications/rtpapp/*.cc experimental/applications/tcpapp/*.cc experimental/applications/udpapp/*.cc experimental/base/*.cc experimental/linklayer/*.cc experimental/linklayer/contract/*.cc experimental/linklayer/ethernet/*.cc experimental/linklayer/etherswitch/*.cc experimental/linklayer/ieee80211/*.cc experimental/linklayer/ieee80211/mac/*.cc experimental/linklayer/ieee80211/mgmt/*.cc experimental/linklayer/mf80211/*.cc experimental/linklayer/mf80211/macLayer/*.cc experimental/linklayer/mf80211/phyLayer/*.cc experimental/linklayer/mf80211/phyLayer/decider/*.cc experimental/linklayer/mf80211/phyLayer/snrEval/*.cc experimental/linklayer/mfcore/*.cc experimental/linklayer/ppp/*.cc experimental/linklayer/radio/*.cc experimental/mobility/*.cc experimental/networklayer/*.cc experimental/networklayer/arp/*.cc experimental/networklayer/autorouting/*.cc experimental/networklayer/common/*.cc experimental/networklayer/contract/*.cc experimental/networklayer/extras/*.cc experimental/networklayer/icmpv6/*.cc experimental/networklayer/ipv4/*.cc experimental/networklayer/ipv6/*.cc experimental/networklayer/ldp/*.cc experimental/networklayer/manetrouting/*.cc experimental/networklayer/mpls/*.cc experimental/networklayer/ospfv2/*.cc experimental/networklayer/queue/*.cc experimental/networklayer/rsvp_te/*.cc experimental/networklayer/ted/*.cc experimental/nodes/*.cc experimental/nodes/adhoc/*.cc experimental/nodes/ethernet/*.cc experimental/nodes/inet/*.cc experimental/nodes/ipv6/*.cc experimental/nodes/mpls/*.cc experimental/nodes/wireless/*.cc experimental/transport/*.cc experimental/transport/contract/*.cc experimental/transport/rtp/*.cc experimental/transport/tcp/*.cc experimental/transport/tcp/flavours/*.cc experimental/transport/tcp/queues/*.cc experimental/transport/udp/*.cc experimental/util/*.cc experimental/world/*.cc linklayer/*.cc linklayer/contract/*.cc linklayer/ethernet/*.cc linklayer/etherswitch/*.cc linklayer/ieee80211/*.cc linklayer/ieee80211/mac/*.cc linklayer/ieee80211/mgmt/*.cc linklayer/mf80211/*.cc linklayer/mf80211/macLayer/*.cc linklayer/mf80211/phyLayer/*.cc linklayer/mf80211/phyLayer/decider/*.cc linklayer/mf80211/phyLayer/snrEval/*.cc linklayer/mfcore/*.cc linklayer/ppp/*.cc linklayer/radio/*.cc mobility/*.cc networklayer/*.cc networklayer/arp/*.cc networklayer/autorouting/*.cc networklayer/common/*.cc networklayer/contract/*.cc networklayer/extras/*.cc networklayer/icmpv6/*.cc networklayer/ipv4/*.cc networklayer/ipv6/*.cc networklayer/ldp/*.cc networklayer/manetrouting/*.cc networklayer/manetrouting/aodv/*.cc networklayer/manetrouting/aodv/aodv-uu/*.cc networklayer/manetrouting/base/*.cc networklayer/manetrouting/dsdv/*.cc networklayer/manetrouting/dsr/*.cc networklayer/manetrouting/dsr/dsr-uu/*.cc networklayer/manetrouting/dymo/*.cc networklayer/manetrouting/dymo/dymoum/*.cc networklayer/manetrouting/dymo_fau/*.cc networklayer/manetrouting/manager/*.cc networklayer/manetrouting/olsr/*.cc networklayer/mpls/*.cc networklayer/ospfv2/*.cc networklayer/ospfv2/interface/*.cc networklayer/ospfv2/messagehandler/*.cc networklayer/ospfv2/neighbor/*.cc networklayer/ospfv2/router/*.cc networklayer/queue/*.cc networklayer/rsvp_te/*.cc networklayer/ted/*.cc nodes/*.cc nodes/adhoc/*.cc nodes/ethernet/*.cc nodes/inet/*.cc nodes/ipv6/*.cc nodes/mpls/*.cc nodes/wireless/*.cc transport/*.cc transport/contract/*.cc transport/rtp/*.cc transport/rtp/profiles/*.cc transport/rtp/profiles/avprofile/*.cc transport/tcp/*.cc transport/tcp/flavours/*.cc transport/tcp/queues/*.cc transport/udp/*.cc util/*.cc util/headerserializers/*.cc util/headerserializers/headers/*.cc world/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/ethernet/EtherAppCli.o: applications/ethernet/EtherAppCli.cc \
  applications/ethernet/EtherApp_m.h \
  applications/ethernet/EtherAppCli.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/applications/ethernet/EtherAppSrv.o: applications/ethernet/EtherAppSrv.cc \
  applications/ethernet/EtherApp_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  applications/ethernet/EtherAppSrv.h
$O/applications/generic/IPTrafGen.o: applications/generic/IPTrafGen.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPControlInfo_m.h \
  applications/generic/IPTrafGen.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/pingapp/PingApp.o: applications/pingapp/PingApp.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPAddressResolver.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  applications/pingapp/PingApp.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/rtpapp/RTPApplication.o: applications/rtpapp/RTPApplication.cc \
  applications/rtpapp/RTPApplication.h \
  transport/rtp/RTPInterfacePacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPAddress.h
$O/applications/tcpapp/TCPBasicClientApp.o: applications/tcpapp/TCPBasicClientApp.cc \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/TCPGenericCliAppBase.h \
  transport/contract/TCPCommand_m.h \
  applications/tcpapp/TCPBasicClientApp.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/tcpapp/TCPEchoApp.o: applications/tcpapp/TCPEchoApp.cc \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  applications/tcpapp/TCPEchoApp.h \
  networklayer/contract/IPAddress.h
$O/applications/tcpapp/TCPGenericCliAppBase.o: applications/tcpapp/TCPGenericCliAppBase.cc \
  networklayer/contract/IPAddressResolver.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  applications/tcpapp/TCPGenericCliAppBase.h \
  transport/contract/TCPCommand_m.h \
  applications/tcpapp/GenericAppMsg_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/tcpapp/TCPGenericSrvApp.o: applications/tcpapp/TCPGenericSrvApp.cc \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPCommand_m.h \
  applications/tcpapp/GenericAppMsg_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  applications/tcpapp/TCPGenericSrvApp.h
$O/applications/tcpapp/TCPGenericSrvThread.o: applications/tcpapp/TCPGenericSrvThread.cc \
  transport/contract/TCPSocket.h \
  applications/tcpapp/TCPSrvHostApp.h \
  applications/tcpapp/TCPGenericSrvThread.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocketMap.h \
  applications/tcpapp/GenericAppMsg_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/tcpapp/TCPSessionApp.o: applications/tcpapp/TCPSessionApp.cc \
  networklayer/contract/IPAddressResolver.h \
  transport/contract/TCPSocket.h \
  applications/tcpapp/TCPSessionApp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/tcpapp/TCPSinkApp.o: applications/tcpapp/TCPSinkApp.cc \
  transport/contract/TCPSocket.h \
  applications/tcpapp/TCPSinkApp.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/tcpapp/TCPSpoof.o: applications/tcpapp/TCPSpoof.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPAddressResolver.h \
  applications/tcpapp/TCPSpoof.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h
$O/applications/tcpapp/TCPSrvHostApp.o: applications/tcpapp/TCPSrvHostApp.cc \
  transport/contract/TCPSocket.h \
  applications/tcpapp/TCPSrvHostApp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocketMap.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/tcpapp/TelnetApp.o: applications/tcpapp/TelnetApp.cc \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  applications/tcpapp/TelnetApp.h \
  applications/tcpapp/TCPGenericCliAppBase.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/udpapp/UDPAppBase.o: applications/udpapp/UDPAppBase.cc \
  applications/udpapp/UDPAppBase.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicApp.o: applications/udpapp/UDPBasicApp.cc \
  applications/udpapp/UDPAppBase.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  applications/udpapp/UDPBasicApp.h \
  networklayer/contract/IPAddress.h
$O/applications/udpapp/UDPBasicBurst.o: applications/udpapp/UDPBasicBurst.cc \
  applications/udpapp/UDPAppBase.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPAddressResolver.h \
  applications/udpapp/UDPBasicBurst.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/udpapp/UDPEchoApp.o: applications/udpapp/UDPEchoApp.cc \
  applications/udpapp/UDPAppBase.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/contract/IPv6Address.h \
  applications/udpapp/UDPEchoApp.h \
  base/INETDefs.h \
  applications/udpapp/UDPBasicApp.h \
  applications/udpapp/UDPEchoAppMsg_m.h \
  networklayer/contract/IPAddress.h
$O/applications/udpapp/UDPSink.o: applications/udpapp/UDPSink.cc \
  applications/udpapp/UDPAppBase.h \
  transport/contract/UDPControlInfo_m.h \
  applications/udpapp/UDPSink.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/udpapp/UDPVideoStreamCli.o: applications/udpapp/UDPVideoStreamCli.cc \
  applications/udpapp/UDPAppBase.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  applications/udpapp/UDPVideoStreamCli.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/applications/udpapp/UDPVideoStreamSvr.o: applications/udpapp/UDPVideoStreamSvr.cc \
  applications/udpapp/UDPAppBase.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPvXAddress.h \
  applications/udpapp/UDPVideoStreamSvr.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/base/AbstractQueue.o: base/AbstractQueue.cc \
  base/AbstractQueue.h \
  base/INETDefs.h
$O/base/BasicModule.o: base/BasicModule.cc \
  base/BasicModule.h \
  base/INotifiable.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  base/ModuleAccess.h
$O/base/Blackboard.o: base/Blackboard.cc \
  base/Blackboard.h \
  base/INETDefs.h \
  base/ModuleAccess.h
$O/base/ByteArrayMessage.o: base/ByteArrayMessage.cc \
  base/ByteArrayMessage_m.h \
  base/INETDefs.h \
  base/ByteArrayMessage.h
$O/base/Join.o: base/Join.cc \
  base/INETDefs.h
$O/base/ModuleAccess.o: base/ModuleAccess.cc \
  base/INETDefs.h \
  base/ModuleAccess.h
$O/base/NotificationBoard.o: base/NotificationBoard.cc \
  base/INotifiable.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/INETDefs.h
$O/base/NotifierConsts.o: base/NotifierConsts.cc \
  base/NotifierConsts.h \
  base/INETDefs.h
$O/base/PassiveQueueBase.o: base/PassiveQueueBase.cc \
  base/PassiveQueueBase.h \
  base/IPassiveQueue.h \
  base/INETDefs.h
$O/base/ProtocolMap.o: base/ProtocolMap.cc \
  base/ProtocolMap.h \
  base/INETDefs.h
$O/base/QueueBase.o: base/QueueBase.cc \
  base/QueueBase.h \
  base/AbstractQueue.h \
  base/INETDefs.h
$O/base/QueueWithQoS.o: base/QueueWithQoS.cc \
  base/EnqueueHook.h \
  base/AbstractQueue.h \
  base/INETDefs.h \
  base/QueueWithQoS.h
$O/base/ReassemblyBuffer.o: base/ReassemblyBuffer.cc \
  base/ReassemblyBuffer.h \
  base/INETDefs.h
$O/base/Sink.o: base/Sink.cc \
  base/Sink.h \
  base/INETDefs.h
$O/experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.o: experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  linklayer/contract/ControlInfoBreakLink_m.h \
  base/PassiveQueueBase.h \
  networklayer/ipv4/IRoutingTable.h \
  experimental/linklayer/ieee80211/mgmt/lwmpls_data.h \
  base/ModuleAccess.h \
  experimental/linklayer/contract/MeshControlInfo_m.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPAddress.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.h
$O/experimental/linklayer/ieee80211/mgmt/lwmpls_data.o: experimental/linklayer/ieee80211/mgmt/lwmpls_data.cc \
  experimental/linklayer/ieee80211/mgmt/lwmpls_data.h
$O/linklayer/contract/MACAddress.o: linklayer/contract/MACAddress.cc \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/linklayer/ethernet/EtherBus.o: linklayer/ethernet/EtherBus.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherBus.h
$O/linklayer/ethernet/EtherEncap.o: linklayer/ethernet/EtherEncap.cc \
  linklayer/contract/TxNotifDetails.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/ethernet/EtherMAC.h \
  linklayer/ethernet/Ethernet.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  linklayer/ethernet/EtherEncap.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/ethernet/EtherHub.o: linklayer/ethernet/EtherHub.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/ethernet/EtherHub.h
$O/linklayer/ethernet/EtherLLC.o: linklayer/ethernet/EtherLLC.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherLLC.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/ethernet/EtherMAC.o: linklayer/ethernet/EtherMAC.cc \
  linklayer/contract/TxNotifDetails.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/ethernet/EtherMAC.h \
  linklayer/ethernet/Ethernet.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/ethernet/EtherMAC2.o: linklayer/ethernet/EtherMAC2.cc \
  linklayer/contract/TxNotifDetails.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherMAC2.h
$O/linklayer/ethernet/EtherMACBase.o: linklayer/ethernet/EtherMACBase.cc \
  linklayer/contract/TxNotifDetails.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h \
  linklayer/ethernet/EtherMACBase.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/etherswitch/MACRelayUnitBase.o: linklayer/etherswitch/MACRelayUnitBase.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/etherswitch/MACRelayUnitBase.h
$O/linklayer/etherswitch/MACRelayUnitNP.o: linklayer/etherswitch/MACRelayUnitNP.cc \
  linklayer/etherswitch/MACRelayUnitNP.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/etherswitch/MACRelayUnitBase.h
$O/linklayer/etherswitch/MACRelayUnitPP.o: linklayer/etherswitch/MACRelayUnitPP.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/etherswitch/MACRelayUnitPP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/etherswitch/MACRelayUnitBase.h
$O/linklayer/ieee80211/mac/Ieee80211Mac.o: linklayer/ieee80211/mac/Ieee80211Mac.cc \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mac/Ieee80211Mac.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  linklayer/contract/ControlInfoBreakLink_m.h \
  base/FSMA.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/mfcore/WirelessMacBase.h
$O/linklayer/ieee80211/mac/Ieee80211aMac.o: linklayer/ieee80211/mac/Ieee80211aMac.cc \
  util/FWMath.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  linklayer/contract/ControlInfoBreakLink_m.h \
  base/FSMA.h \
  linklayer/ieee80211/mac/Ieee80211aMac.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/mac/Ieee80211aConsts.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/mfcore/WirelessMacBase.h \
  linklayer/contract/Radio80211aControlInfo_m.h
$O/linklayer/ieee80211/mac/Ieee80211gMac.o: linklayer/ieee80211/mac/Ieee80211gMac.cc \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceToken.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INotifiable.h \
  linklayer/contract/ControlInfoBreakLink_m.h \
  base/FSMA.h \
  linklayer/ieee80211/mac/Ieee80211gMac.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/mfcore/WirelessMacBase.h
$O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
  linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
  linklayer/contract/MACAddress.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  base/INotifiable.h \
  linklayer/ethernet/Ethernet.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/INotifiable.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/INotifiable.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
  util/FWMath.h \
  linklayer/contract/MACAddress.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  base/IPassiveQueue.h \
  base/Coord.h \
  base/INotifiable.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h \
  base/INotifiable.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/mf80211/macLayer/CSMAMacLayer.o: linklayer/mf80211/macLayer/CSMAMacLayer.cc \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/mf80211/macLayer/MacPkt_m.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/mfcore/WirelessMacBase.h \
  linklayer/mf80211/macLayer/CSMAMacLayer.h
$O/linklayer/mf80211/macLayer/Mac80211.o: linklayer/mf80211/macLayer/Mac80211.cc \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/mf80211/macLayer/Mac80211Pkt_m.h \
  base/ModuleAccess.h \
  linklayer/mf80211/macLayer/Consts80211.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/mf80211/macLayer/MacPkt_m.h \
  linklayer/mf80211/macLayer/Mac80211.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/mfcore/WirelessMacBase.h
$O/linklayer/mf80211/phyLayer/decider/Decider80211.o: linklayer/mf80211/phyLayer/decider/Decider80211.cc \
  util/FWMath.h \
  base/BasicModule.h \
  linklayer/mf80211/phyLayer/decider/Decider80211.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  base/ModuleAccess.h \
  linklayer/mf80211/macLayer/Consts80211.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  linklayer/mfcore/BasicDecider.h
$O/linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.o: linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.cc \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  linklayer/mf80211/phyLayer/decider/SnrDecider.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  linklayer/mfcore/BasicDecider.h
$O/linklayer/mf80211/phyLayer/decider/SnrDecider.o: linklayer/mf80211/phyLayer/decider/SnrDecider.cc \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  base/ModuleAccess.h \
  linklayer/mf80211/phyLayer/decider/SnrDecider.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  linklayer/mfcore/BasicDecider.h
$O/linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.o: linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.cc \
  util/FWMath.h \
  base/BasicModule.h \
  linklayer/mfcore/BasicSnrEval.h \
  linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  world/ChannelControl.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
  world/ChannelAccess.h \
  base/INETDefs.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  linklayer/contract/PhyControlInfo_m.h
$O/linklayer/mf80211/phyLayer/snrEval/SnrEval.o: linklayer/mf80211/phyLayer/snrEval/SnrEval.cc \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/mfcore/BasicSnrEval.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  world/ChannelAccess.h \
  linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  linklayer/contract/PhyControlInfo_m.h
$O/linklayer/mf80211/phyLayer/snrEval/SnrEval80211.o: linklayer/mf80211/phyLayer/snrEval/SnrEval80211.cc \
  util/FWMath.h \
  base/BasicModule.h \
  linklayer/mfcore/BasicSnrEval.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  world/ChannelControl.h \
  base/ModuleAccess.h \
  linklayer/mf80211/macLayer/Consts80211.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/mf80211/phyLayer/snrEval/SnrEval80211.h \
  linklayer/contract/RadioState.h \
  linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
  world/ChannelAccess.h \
  base/INETDefs.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  linklayer/contract/PhyControlInfo_m.h
$O/linklayer/mfcore/BasicDecider.o: linklayer/mfcore/BasicDecider.cc \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  linklayer/mfcore/BasicDecider.h
$O/linklayer/mfcore/BasicSnrEval.o: linklayer/mfcore/BasicSnrEval.cc \
  util/FWMath.h \
  base/BasicModule.h \
  linklayer/mfcore/BasicSnrEval.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  world/ChannelControl.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/mfcore/TransmComplete_m.h \
  world/ChannelAccess.h \
  base/INETDefs.h \
  linklayer/mfcore/SnrControlInfo_m.h
$O/linklayer/mfcore/WirelessMacBase.o: linklayer/mfcore/WirelessMacBase.cc \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  linklayer/mfcore/WirelessMacBase.h
$O/linklayer/ppp/PPP.o: linklayer/ppp/PPP.cc \
  linklayer/contract/TxNotifDetails.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  base/IPassiveQueue.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/ppp/PPP.h \
  base/INETDefs.h \
  linklayer/ppp/PPPFrame_m.h
$O/linklayer/ppp/ThruputMeter.o: linklayer/ppp/ThruputMeter.cc \
  linklayer/ppp/ThruputMeter.h \
  base/INETDefs.h
$O/linklayer/radio/AbstractRadio.o: linklayer/radio/AbstractRadio.cc \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/mfcore/SnrList.h \
  linklayer/radio/AbstractRadio.h \
  world/ChannelControl.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  world/ChannelAccess.h \
  base/INETDefs.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/contract/PhyControlInfo_m.h \
  linklayer/contract/Radio80211aControlInfo_m.h
$O/linklayer/radio/GenericRadio.o: linklayer/radio/GenericRadio.cc \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/GenericRadio.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  linklayer/radio/AbstractRadio.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  world/ChannelAccess.h \
  linklayer/radio/IReceptionModel.h
$O/linklayer/radio/GenericRadioModel.o: linklayer/radio/GenericRadioModel.cc \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/Modulation.h \
  base/Coord.h \
  linklayer/radio/GenericRadioModel.h \
  linklayer/mfcore/SnrList.h \
  base/INETDefs.h \
  linklayer/radio/IModulation.h
$O/linklayer/radio/Ieee80211Radio.o: linklayer/radio/Ieee80211Radio.cc \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  linklayer/radio/AbstractRadio.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  world/ChannelAccess.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/radio/Ieee80211Radio.h
$O/linklayer/radio/Ieee80211RadioModel.o: linklayer/radio/Ieee80211RadioModel.cc \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/mfcore/SnrList.h \
  base/INETDefs.h \
  linklayer/radio/Ieee80211RadioModel.h
$O/linklayer/radio/Ieee80211aRadio.o: linklayer/radio/Ieee80211aRadio.cc \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  linklayer/radio/AbstractRadio.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  linklayer/radio/Ieee80211aRadio.h \
  base/INETDefs.h \
  world/ChannelAccess.h \
  linklayer/radio/IReceptionModel.h
$O/linklayer/radio/Ieee80211aRadioModel.o: linklayer/radio/Ieee80211aRadioModel.cc \
  linklayer/radio/qamMode.h \
  util/FWMath.h \
  linklayer/radio/Ieee80211aRadioModel.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/Modulation.h \
  base/Coord.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/mfcore/SnrList.h \
  linklayer/radio/bpskMode.h \
  base/INETDefs.h \
  linklayer/radio/transmissionMode.h \
  linklayer/ieee80211/mac/Ieee80211aConsts.h \
  linklayer/radio/IModulation.h
$O/linklayer/radio/Ieee80211gRadio.o: linklayer/radio/Ieee80211gRadio.cc \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  linklayer/mfcore/SnrList.h \
  linklayer/radio/AbstractRadio.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  world/ChannelAccess.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/radio/Ieee80211gRadio.h
$O/linklayer/radio/Ieee80211gRadioModel.o: linklayer/radio/Ieee80211gRadioModel.cc \
  util/FWMath.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/radio/Ieee80211gRadioModel.h \
  linklayer/mfcore/SnrList.h \
  base/INETDefs.h
$O/linklayer/radio/Modulation.o: linklayer/radio/Modulation.cc \
  linklayer/radio/Modulation.h \
  base/INETDefs.h \
  linklayer/radio/IModulation.h
$O/linklayer/radio/PathLossReceptionModel.o: linklayer/radio/PathLossReceptionModel.cc \
  util/FWMath.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h \
  base/INETDefs.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/radio/PathLossReceptionModel.h
$O/linklayer/radio/TwoRayModel.o: linklayer/radio/TwoRayModel.cc \
  util/FWMath.h \
  linklayer/radio/TwoRayModel.h \
  base/INETDefs.h \
  linklayer/radio/IReceptionModel.h
$O/linklayer/radio/bpskMode.o: linklayer/radio/bpskMode.cc \
  linklayer/radio/qamMode.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/radio/bpskMode.h \
  base/INETDefs.h \
  linklayer/radio/transmissionMode.h \
  linklayer/radio/IModulation.h
$O/linklayer/radio/qamMode.o: linklayer/radio/qamMode.cc \
  linklayer/radio/qamMode.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  linklayer/radio/transmissionMode.h \
  linklayer/radio/IModulation.h
$O/linklayer/radio/transmissionMode.o: linklayer/radio/transmissionMode.cc \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  linklayer/radio/transmissionMode.h \
  linklayer/radio/IModulation.h
$O/mobility/ANSimMobility.o: mobility/ANSimMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/ANSimMobility.h \
  world/ChannelControl.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  mobility/LineSegmentsMobilityBase.h
$O/mobility/BasicMobility.o: mobility/BasicMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  world/ChannelControl.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h
$O/mobility/BonnMotionFileCache.o: mobility/BonnMotionFileCache.cc \
  util/FWMath.h \
  base/BasicModule.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/BonnMotionFileCache.h \
  base/INETDefs.h
$O/mobility/BonnMotionMobility.o: mobility/BonnMotionMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  world/ChannelControl.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/BonnMotionFileCache.h \
  base/INETDefs.h \
  mobility/LineSegmentsMobilityBase.h \
  mobility/BonnMotionMobility.h
$O/mobility/CircleMobility.o: mobility/CircleMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  mobility/CircleMobility.h
$O/mobility/ConstSpeedMobility.o: mobility/ConstSpeedMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/ConstSpeedMobility.h \
  base/INETDefs.h
$O/mobility/LineSegmentsMobilityBase.o: mobility/LineSegmentsMobilityBase.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  mobility/LineSegmentsMobilityBase.h
$O/mobility/LinearMobility.o: mobility/LinearMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  mobility/LinearMobility.h
$O/mobility/MassMobility.o: mobility/MassMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/MassMobility.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h
$O/mobility/Ns2MotionMobility.o: mobility/Ns2MotionMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  world/ChannelControl.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  mobility/Ns2MotionMobility.h \
  mobility/LineSegmentsMobilityBase.h
$O/mobility/NullMobility.o: mobility/NullMobility.cc \
  util/FWMath.h \
  base/BasicModule.h \
  mobility/NullMobility.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h
$O/mobility/RandomWPMobility.o: mobility/RandomWPMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  world/ChannelControl.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  mobility/RandomWPMobility.h \
  mobility/LineSegmentsMobilityBase.h
$O/mobility/RectangleMobility.o: mobility/RectangleMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  mobility/RectangleMobility.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h
$O/mobility/TraCIMobility.o: mobility/TraCIMobility.cc \
  util/FWMath.h \
  base/BasicModule.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  mobility/TraCIMobility.h \
  base/Coord.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  world/TraCIScenarioManager.h \
  base/INETDefs.h
$O/mobility/TurtleMobility.o: mobility/TurtleMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  world/ChannelControl.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  mobility/TurtleMobility.h \
  base/INETDefs.h \
  mobility/LineSegmentsMobilityBase.h
$O/networklayer/arp/ARP.o: networklayer/arp/ARP.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/arp/ARP.h
$O/networklayer/autorouting/FlatNetworkConfigurator.o: networklayer/autorouting/FlatNetworkConfigurator.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  networklayer/autorouting/FlatNetworkConfigurator.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/autorouting/FlatNetworkConfigurator6.o: networklayer/autorouting/FlatNetworkConfigurator6.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddressResolver.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv6/RoutingTable6.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/autorouting/FlatNetworkConfigurator6.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/autorouting/NetworkConfigurator.o: networklayer/autorouting/NetworkConfigurator.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/autorouting/NetworkConfigurator.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/common/InterfaceEntry.o: networklayer/common/InterfaceEntry.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/common/InterfaceTable.o: networklayer/common/InterfaceTable.cc \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  networklayer/common/InterfaceTable.h
$O/networklayer/contract/IPAddress.o: networklayer/contract/IPAddress.cc \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/contract/IPAddressResolver.o: networklayer/contract/IPAddressResolver.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddressResolver.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/contract/IPControlInfo.o: networklayer/contract/IPControlInfo.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ipv4/IPDatagram_m.h
$O/networklayer/contract/IPv6Address.o: networklayer/contract/IPv6Address.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h \
  base/INETDefs.h
$O/networklayer/contract/IPv6ControlInfo.o: networklayer/contract/IPv6ControlInfo.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/contract/IPvXAddress.o: networklayer/contract/IPvXAddress.cc \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/extras/Dummy.o: networklayer/extras/Dummy.cc
$O/networklayer/extras/FailureManager.o: networklayer/extras/FailureManager.cc \
  base/IScriptable.h \
  base/INETDefs.h \
  networklayer/extras/FailureManager.h
$O/networklayer/extras/NetworkInfo.o: networklayer/extras/NetworkInfo.cc \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/extras/NetworkInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/NotifierConsts.h \
  base/IScriptable.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/icmpv6/ICMPv6.o: networklayer/icmpv6/ICMPv6.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/RoutingTable6.h \
  base/INETDefs.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/icmpv6/IPv6NeighbourCache.o: networklayer/icmpv6/IPv6NeighbourCache.cc \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  base/INETDefs.h
$O/networklayer/icmpv6/IPv6NeighbourDiscovery.o: networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  base/INETDefs.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h
$O/networklayer/ipv4/ErrorHandling.o: networklayer/ipv4/ErrorHandling.cc \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ipv4/ErrorHandling.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/ipv4/ICMP.o: networklayer/ipv4/ICMP.cc \
  networklayer/ipv4/ICMP.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/ipv4/IP.o: networklayer/ipv4/IP.cc \
  networklayer/ipv4/ICMP.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IP.h \
  base/AbstractQueue.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPFragBuf.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/ipv4/IPFragBuf.o: networklayer/ipv4/IPFragBuf.cc \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/ipv4/IPRoute.o: networklayer/ipv4/IPRoute.cc \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ipv4/IPv4InterfaceData.o: networklayer/ipv4/IPv4InterfaceData.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ipv4/RoutingTable.o: networklayer/ipv4/RoutingTable.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTableParser.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ipv4/RoutingTableParser.o: networklayer/ipv4/RoutingTableParser.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/RoutingTableParser.h \
  base/INotifiable.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ipv6/IPv6.o: networklayer/ipv6/IPv6.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv6Address.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  base/AbstractQueue.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/ipv6/IPv6FragBuf.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/ProtocolMap.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/ipv6/IPv6Datagram.o: networklayer/ipv6/IPv6Datagram.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  base/INETDefs.h
$O/networklayer/ipv6/IPv6ErrorHandling.o: networklayer/ipv6/IPv6ErrorHandling.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6ErrorHandling.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/ipv6/IPv6FragBuf.o: networklayer/ipv6/IPv6FragBuf.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  base/ReassemblyBuffer.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/IPv6Datagram.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv6/IPv6FragBuf.h \
  base/INETDefs.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/contract/IPv6ControlInfo.h
$O/networklayer/ipv6/IPv6InterfaceData.o: networklayer/ipv6/IPv6InterfaceData.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/NotifierConsts.h \
  base/INETDefs.h
$O/networklayer/ipv6/RoutingTable6.o: networklayer/ipv6/RoutingTable6.cc \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  util/opp_utils.h \
  base/NotificationBoard.h \
  networklayer/ipv6/RoutingTable6.h \
  base/INETDefs.h
$O/networklayer/ldp/LDP.o: networklayer/ldp/LDP.cc \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/ted/TED_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ted/TEDAccess.h \
  networklayer/mpls/ConstType.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  transport/contract/TCPCommand_m.h \
  networklayer/mpls/LIBTable.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/ldp/LDP.h \
  networklayer/contract/IPAddress.h \
  networklayer/ted/TED.h \
  transport/contract/TCPSocket.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/mpls/IClassifier.h \
  transport/contract/TCPSocketMap.h \
  transport/tcp/TCPSegment.h \
  transport/contract/UDPSocket.h
$O/networklayer/manetrouting/aodv/aodv_msg_struct.o: networklayer/manetrouting/aodv/aodv_msg_struct.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  base/ProtocolMap.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/aodv/aodv_msg_struct.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/aodv/aodv_uu_omnet.o: networklayer/manetrouting/aodv/aodv_uu_omnet.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/manetrouting/aodv/aodv_uu_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv_msg_struct.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/packet_queue_omnet.h
$O/networklayer/manetrouting/aodv/packet_queue_omnet.o: networklayer/manetrouting/aodv/packet_queue_omnet.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv_uu_omnet.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv_msg_struct.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/packet_queue_omnet.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_hello.o: networklayer/manetrouting/aodv/aodv-uu/aodv_hello.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.o: networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_socket.o: networklayer/manetrouting/aodv/aodv-uu/aodv_socket.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.o: networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/nl.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv/aodv-uu/debug.o: networklayer/manetrouting/aodv/aodv-uu/debug.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv/aodv-uu/list.o: networklayer/manetrouting/aodv/aodv-uu/list.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h
$O/networklayer/manetrouting/aodv/aodv-uu/locality.o: networklayer/manetrouting/aodv/aodv-uu/locality.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv/aodv-uu/routing_table.o: networklayer/manetrouting/aodv/aodv-uu/routing_table.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/nl.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv/aodv-uu/seek_list.o: networklayer/manetrouting/aodv/aodv-uu/seek_list.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/aodv/aodv-uu/timer_queue.o: networklayer/manetrouting/aodv/aodv-uu/timer_queue.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/defs.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/debug.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h
$O/networklayer/manetrouting/base/ManetRoutingBase.o: networklayer/manetrouting/base/ManetRoutingBase.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/manetrouting/base/int128.o: networklayer/manetrouting/base/int128.cc \
  networklayer/manetrouting/base/int128.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/manetrouting/base/uint128.o: networklayer/manetrouting/base/uint128.cc \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/manetrouting/dsdv/DSDV_2.o: networklayer/manetrouting/dsdv/DSDV_2.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/dsdv/DSDV_2.h \
  networklayer/manetrouting/dsdv/DSDVhello_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ipv4/IPDatagram_m.h
$O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  util/headerserializers/headers/ip.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h
$O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/neigh.o: networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/debug.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  base/Blackboard.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h
$O/networklayer/manetrouting/dymo/dymo_msg_struct.o: networklayer/manetrouting/dymo/dymo_msg_struct.cc \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/defs.h
$O/networklayer/manetrouting/dymo/dymo_um_omnet.o: networklayer/manetrouting/dymo/dymo_um_omnet.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ControlManetRouting.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  experimental/linklayer/contract/MeshControlInfo_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/contract/IPControlInfo_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.h \
  networklayer/manetrouting/dymo/dymoum/defs.h
$O/networklayer/manetrouting/dymo/dymoum/blacklist.o: networklayer/manetrouting/dymo/dymoum/blacklist.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/debug.o: networklayer/manetrouting/dymo/dymoum/debug.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_re.o: networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  experimental/linklayer/contract/MeshControlInfo_m.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/rtable.o: networklayer/manetrouting/dymo/dymoum/rtable.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/k_route.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/timer_queue.o: networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo/dymoum/defs.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo_fau/DYMO.o: networklayer/manetrouting/dymo_fau/DYMO.cc \
  transport/udp/UDPPacket.h \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/ipv4/IP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/AbstractQueue.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/base/uint128.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/contract/IPControlInfo_m.h \
  base/ProtocolMap.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  transport/contract/UDPSocket.h
$O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv4/IP.h \
  networklayer/common/IInterfaceTable.h \
  base/AbstractQueue.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPAddress.h \
  base/ProtocolMap.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/ICMPMessage.h
$O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/ipv4/IP.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/AbstractQueue.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
  base/ReassemblyBuffer.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/ipv4/IP.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/AbstractQueue.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/RoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
  networklayer/ipv4/ICMP.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/ipv4/IP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/AbstractQueue.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/QueueBase.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/ipv4/IPFragBuf.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
  networklayer/contract/IPControlInfo_m.h \
  base/ProtocolMap.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h
$O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h
$O/networklayer/manetrouting/manager/ManetManager.o: networklayer/manetrouting/manager/ManetManager.cc \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/manager/ManetManager.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPAddress.h
$O/networklayer/manetrouting/olsr/OLSR.o: networklayer/manetrouting/olsr/OLSR.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/manetrouting/olsr/OLSR_ETX.o: networklayer/manetrouting/olsr/OLSR_ETX.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o: networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_state.o: networklayer/manetrouting/olsr/OLSR_ETX_state.cc \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/manetrouting/olsr/OLSR_rtable.o: networklayer/manetrouting/olsr/OLSR_rtable.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/manetrouting/olsr/OLSR_state.o: networklayer/manetrouting/olsr/OLSR_state.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/manetrouting/base/uint128.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/olsr/OLSR_state.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/mpls/LIBTable.o: networklayer/mpls/LIBTable.cc \
  util/XMLUtils.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/ConstType.h \
  base/ModuleAccess.h \
  networklayer/mpls/LIBTable.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/IPDatagram_m.h
$O/networklayer/mpls/MPLS.o: networklayer/mpls/MPLS.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/mpls/MPLSPacket.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/MPLS.h \
  networklayer/mpls/ConstType.h \
  base/ModuleAccess.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  transport/contract/TCPCommand_m.h \
  networklayer/mpls/LIBTable.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/rsvp_te/Utils.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/ldp/LDP.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/contract/IPAddress.h \
  transport/contract/TCPSocket.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/mpls/IClassifier.h \
  transport/contract/TCPSocketMap.h \
  transport/tcp/TCPSegment.h \
  transport/contract/UDPSocket.h
$O/networklayer/mpls/MPLSPacket.o: networklayer/mpls/MPLSPacket.cc \
  networklayer/mpls/MPLSPacket.h \
  base/INETDefs.h
$O/networklayer/ospfv2/OSPFRouting.o: networklayer/ospfv2/OSPFRouting.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/interface/OSPFInterface.o: networklayer/ospfv2/interface/OSPFInterface.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/interface/OSPFInterfaceState.o: networklayer/ospfv2/interface/OSPFInterfaceState.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/messagehandler/HelloHandler.o: networklayer/ospfv2/messagehandler/HelloHandler.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/messagehandler/MessageHandler.o: networklayer/ospfv2/messagehandler/MessageHandler.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/neighbor/OSPFNeighbor.o: networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborState.o: networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/router/ASExternalLSA.o: networklayer/ospfv2/router/ASExternalLSA.cc \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/NetworkLSA.o: networklayer/ospfv2/router/NetworkLSA.cc \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFArea.o: networklayer/ospfv2/router/OSPFArea.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  base/INETDefs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/router/OSPFRouter.o: networklayer/ospfv2/router/OSPFRouter.cc \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/router/OSPFArea.h
$O/networklayer/ospfv2/router/RouterLSA.o: networklayer/ospfv2/router/RouterLSA.cc \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/SummaryLSA.o: networklayer/ospfv2/router/SummaryLSA.cc \
  networklayer/ospfv2/router/LSA.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/queue/BasicDSCPClassifier.o: networklayer/queue/BasicDSCPClassifier.cc \
  networklayer/queue/IQoSClassifier.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/queue/BasicDSCPClassifier.h
$O/networklayer/queue/DropTailQoSQueue.o: networklayer/queue/DropTailQoSQueue.cc \
  networklayer/queue/IQoSClassifier.h \
  base/IPassiveQueue.h \
  networklayer/queue/DropTailQoSQueue.h \
  base/PassiveQueueBase.h \
  base/INETDefs.h
$O/networklayer/queue/DropTailQueue.o: networklayer/queue/DropTailQueue.cc \
  base/IPassiveQueue.h \
  base/PassiveQueueBase.h \
  base/INETDefs.h \
  networklayer/queue/DropTailQueue.h
$O/networklayer/queue/REDQueue.o: networklayer/queue/REDQueue.cc \
  base/IPassiveQueue.h \
  base/PassiveQueueBase.h \
  networklayer/queue/REDQueue.h \
  base/INETDefs.h
$O/networklayer/rsvp_te/RSVP.o: networklayer/rsvp_te/RSVP.cc \
  networklayer/rsvp_te/RSVPPathMsg.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  util/XMLUtils.h \
  networklayer/ted/TED_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddressResolver.h \
  base/INotifiable.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/rsvp_te/RSVP.h \
  util/common.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/ConstType.h \
  networklayer/ted/TEDAccess.h \
  base/ModuleAccess.h \
  base/IScriptable.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/mpls/LIBTable.h \
  networklayer/rsvp_te/Utils.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ted/TED.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/mpls/IClassifier.h \
  networklayer/rsvp_te/IRSVPClassifier.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h
$O/networklayer/rsvp_te/SimpleClassifier.o: networklayer/rsvp_te/SimpleClassifier.cc \
  networklayer/rsvp_te/RSVPPathMsg.h \
  util/XMLUtils.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/INotifiable.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/rsvp_te/RSVP.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/ConstType.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/IScriptable.h \
  base/NotificationBoard.h \
  networklayer/rsvp_te/SimpleClassifier.h \
  networklayer/rsvp_te/RSVPAccess.h \
  networklayer/mpls/LIBTable.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/contract/IPAddress.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/mpls/IClassifier.h \
  networklayer/rsvp_te/IRSVPClassifier.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h
$O/networklayer/rsvp_te/Utils.o: networklayer/rsvp_te/Utils.cc \
  networklayer/rsvp_te/IntServ.h \
  networklayer/rsvp_te/Utils.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/rsvp_te/IntServ_m.h
$O/networklayer/ted/LinkStateRouting.o: networklayer/ted/LinkStateRouting.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ted/LinkStatePacket_m.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/ted/TED_m.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ted/TEDAccess.h \
  base/ModuleAccess.h \
  networklayer/ted/LinkStateRouting.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ted/TED.h \
  networklayer/rsvp_te/IntServ_m.h
$O/networklayer/ted/TED.o: networklayer/ted/TED.cc \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ted/TED_m.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ted/TED.h \
  networklayer/rsvp_te/IntServ_m.h
$O/transport/contract/TCPSocket.o: transport/contract/TCPSocket.cc \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h
$O/transport/contract/TCPSocketMap.o: transport/contract/TCPSocketMap.cc \
  networklayer/contract/IPv6Address.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/contract/TCPSocket.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/TCPSocketMap.h
$O/transport/contract/UDPSocket.o: transport/contract/UDPSocket.cc \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/contract/UDPSocket.h
$O/transport/rtp/RTCP.o: transport/rtp/RTCP.cc \
  networklayer/contract/IPv6Address.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPReceiverInfo.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/contract/UDPControlInfo_m.h \
  transport/rtp/RTCP.h \
  base/INETDefs.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/rtp/reports.h \
  transport/contract/UDPSocket.h
$O/transport/rtp/RTCPPacket.o: transport/rtp/RTCPPacket.cc \
  transport/rtp/sdes.h \
  transport/rtp/RTCPPacket.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/reports.h
$O/transport/rtp/RTP.o: transport/rtp/RTP.cc \
  transport/rtp/RTPInterfacePacket.h \
  networklayer/contract/IPv6Address.h \
  transport/rtp/RTPProfile.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/contract/UDPControlInfo_m.h \
  base/INETDefs.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/rtp/RTP.h \
  transport/contract/UDPSocket.h
$O/transport/rtp/RTPInnerPacket.o: transport/rtp/RTPInnerPacket.cc \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPInterfacePacket.o: transport/rtp/RTPInterfacePacket.cc \
  transport/rtp/RTPInterfacePacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPPacket.o: transport/rtp/RTPPacket.cc \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h
$O/transport/rtp/RTPParticipantInfo.o: transport/rtp/RTPParticipantInfo.cc \
  transport/rtp/sdes.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPParticipantInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/reports.h
$O/transport/rtp/RTPPayloadReceiver.o: transport/rtp/RTPPayloadReceiver.cc \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPPayloadReceiver.h
$O/transport/rtp/RTPPayloadSender.o: transport/rtp/RTPPayloadSender.cc \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/RTPPayloadSender.h
$O/transport/rtp/RTPProfile.o: transport/rtp/RTPProfile.cc \
  transport/rtp/RTPProfile.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPParticipantInfo.h \
  base/INETDefs.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/reports.h \
  transport/rtp/RTPPayloadReceiver.h \
  transport/rtp/RTPPayloadSender.h
$O/transport/rtp/RTPReceiverInfo.o: transport/rtp/RTPReceiverInfo.cc \
  transport/rtp/sdes.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTPReceiverInfo.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/reports.h
$O/transport/rtp/RTPSenderInfo.o: transport/rtp/RTPSenderInfo.cc \
  transport/rtp/sdes.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/reports.h
$O/transport/rtp/reports.o: transport/rtp/reports.cc \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/reports.h
$O/transport/rtp/sdes.o: transport/rtp/sdes.cc \
  transport/rtp/sdes.h \
  base/INETDefs.h
$O/transport/rtp/profiles/avprofile/RTPAVProfile.o: transport/rtp/profiles/avprofile/RTPAVProfile.cc \
  transport/rtp/RTPProfile.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/profiles/avprofile/RTPAVProfile.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h \
  base/INETDefs.h \
  transport/rtp/RTPPayloadReceiver.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPPayloadSender.h
$O/transport/tcp/TCP.o: transport/tcp/TCP.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/TCPConnectionBase.o: transport/tcp/TCPConnectionBase.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/TCPConnectionEventProc.o: transport/tcp/TCPConnectionEventProc.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/TCPConnectionRcvSegment.o: transport/tcp/TCPConnectionRcvSegment.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/TCPConnectionUtil.o: transport/tcp/TCPConnectionUtil.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/TCPSegment.o: transport/tcp/TCPSegment.cc \
  base/INETDefs.h \
  transport/tcp/TCPSegment_m.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/flavours/DumbTCP.o: transport/tcp/flavours/DumbTCP.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/DumbTCP.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/flavours/TCPBaseAlg.o: transport/tcp/flavours/TCPBaseAlg.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/flavours/TCPNoCongestionControl.o: transport/tcp/flavours/TCPNoCongestionControl.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/flavours/TCPNoCongestionControl.h \
  transport/tcp/TCPConnection.h \
  base/INETDefs.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/flavours/TCPReno.o: transport/tcp/flavours/TCPReno.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPReno.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/flavours/TCPTahoe.o: transport/tcp/flavours/TCPTahoe.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/flavours/TCPTahoe.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/flavours/TCPTahoeRenoFamily.o: transport/tcp/flavours/TCPTahoeRenoFamily.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPAlgorithm.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/TCPConnection.h \
  base/INETDefs.h \
  transport/tcp/TCPSegment_m.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/queues/TCPMsgBasedRcvQueue.o: transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPReceiveQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/queues/TCPMsgBasedSendQueue.o: transport/tcp/queues/TCPMsgBasedSendQueue.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h \
  transport/tcp/TCPSendQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/queues/TCPVirtualDataRcvQueue.o: transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPReceiveQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPSegment_m.h \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/tcp/queues/TCPVirtualDataSendQueue.o: transport/tcp/queues/TCPVirtualDataSendQueue.cc \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCP.h \
  transport/tcp/TCPSegment.h
$O/transport/udp/UDP.o: transport/udp/UDP.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/ipv6/RoutingTable6Access.h \
  base/INotifiable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPAccess.h \
  base/ModuleAccess.h \
  transport/udp/UDP.h \
  transport/contract/UDPControlInfo_m.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/ipv4/IPRoute.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/ICMPMessage.h
$O/util/NAMTraceWriter.o: util/NAMTraceWriter.cc \
  linklayer/contract/TxNotifDetails.h \
  networklayer/common/IInterfaceTable.h \
  util/NAMTraceWriter.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  world/NAMTrace.h \
  base/INETDefs.h
$O/util/TCPDump.o: util/TCPDump.cc \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/INETDefs.h \
  transport/tcp/TCPSegment_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPvXAddress.h \
  util/TCPDump.h \
  transport/tcp/TCPSegment.h
$O/util/ThruputMeteringChannel.o: util/ThruputMeteringChannel.cc \
  util/ThruputMeteringChannel.h \
  base/INETDefs.h
$O/util/XMLUtils.o: util/XMLUtils.cc \
  util/XMLUtils.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/util/common.o: util/common.cc \
  networklayer/rsvp_te/IntServ.h \
  util/common.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/rsvp_te/IntServ_m.h
$O/util/opp_utils.o: util/opp_utils.cc \
  util/opp_utils.h \
  base/INETDefs.h
$O/util/headerserializers/ICMPSerializer.o: util/headerserializers/ICMPSerializer.cc \
  util/headerserializers/IPSerializer.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/headerserializers/ICMPSerializer.h \
  base/INETDefs.h \
  util/headerserializers/headers/ip_icmp.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/contract/IPAddress.h \
  util/headerserializers/headers/in_systm.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/in.h
$O/util/headerserializers/IPSerializer.o: util/headerserializers/IPSerializer.cc \
  transport/udp/UDPPacket.h \
  util/headerserializers/UDPSerializer.h \
  util/headerserializers/IPSerializer.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram.h \
  transport/udp/UDPPacket_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/headerserializers/ICMPSerializer.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/contract/IPAddress.h \
  util/headerserializers/headers/in_systm.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/ip.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/in.h
$O/util/headerserializers/UDPSerializer.o: util/headerserializers/UDPSerializer.cc \
  transport/udp/UDPPacket.h \
  util/headerserializers/headers/udp.h \
  util/headerserializers/UDPSerializer.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  util/headerserializers/headers/bsdint.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/in.h
$O/world/ChannelAccess.o: world/ChannelAccess.cc \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  base/INotifiable.h \
  base/ModuleAccess.h \
  world/ChannelControl.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  base/INETDefs.h \
  world/ChannelAccess.h
$O/world/ChannelControl.o: world/ChannelControl.cc \
  util/FWMath.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h \
  base/INETDefs.h
$O/world/ChannelInstaller.o: world/ChannelInstaller.cc \
  base/INETDefs.h \
  world/ChannelInstaller.h
$O/world/NAMTrace.o: world/NAMTrace.cc \
  world/NAMTrace.h \
  base/INETDefs.h
$O/world/ScenarioManager.o: world/ScenarioManager.cc \
  world/ScenarioManager.h \
  base/IScriptable.h \
  base/INETDefs.h
$O/world/TraCIScenarioManager.o: world/TraCIScenarioManager.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  world/TraCIConstants.h \
  linklayer/mfcore/AirFrame_m.h \
  mobility/TraCIMobility.h \
  base/Coord.h \
  base/INotifiable.h \
  world/ChannelControl.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/NotificationBoard.h \
  world/TraCIScenarioManager.h \
  base/INETDefs.h
