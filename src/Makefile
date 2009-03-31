#
# OMNeT++/OMNEST Makefile for libinet
#
# This file was generated with the command:
#  opp_makemake -f --deep -lpcap --make-so -o inet -O out
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
    -Iapplications/sctpapp \
    -Iapplications/tcpapp \
    -Iapplications/udpapp \
    -Ibase \
    -Iexperimental \
    -Iexperimental/linklayer \
    -Iexperimental/linklayer/contract \
    -Iexperimental/linklayer/ieee80211 \
    -Iexperimental/linklayer/ieee80211/mgmt \
    -Iexperimental/nodes \
    -Iexperimental/nodes/adhoc \
    -Ilinklayer \
    -Ilinklayer/contract \
    -Ilinklayer/ethernet \
    -Ilinklayer/etherswitch \
    -Ilinklayer/ext \
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
    -Itransport/sctp \
    -Itransport/tcp \
    -Itransport/tcp/flavours \
    -Itransport/tcp/queues \
    -Itransport/udp \
    -IunderTest \
    -IunderTest/applications \
    -IunderTest/applications/TrafficGenerator_Erlangen \
    -IunderTest/linklayer \
    -IunderTest/linklayer/Ieee80216 \
    -IunderTest/linklayer/Ieee80216/ControlPlane \
    -IunderTest/linklayer/Ieee80216/Mac \
    -IunderTest/linklayer/Ieee80216/MACSublayer \
    -IunderTest/linklayer/Ieee80216/MACSublayer/QoS \
    -IunderTest/linklayer/Ieee80216/MACSublayer/Receiver \
    -IunderTest/linklayer/Ieee80216/MACSublayer/Transceiver \
    -IunderTest/linklayer/Ieee80216/phyLayer \
    -IunderTest/linklayer/Ieee80216/phyLayer/decider \
    -IunderTest/linklayer/Ieee80216/phyLayer/snrEval \
    -IunderTest/linklayer/radio \
    -IunderTest/nodes \
    -IunderTest/nodes/adhoc \
    -IunderTest/nodes/WiMAX \
    -IunderTest/transport \
    -IunderTest/transport/aki \
    -Iutil \
    -Iutil/headerserializers \
    -Iutil/headerserializers/headers \
    -Iworld

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =  -lpcap

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
    $O/applications/sctpapp/SCTPClient.o \
    $O/applications/sctpapp/SCTPPeer.o \
    $O/applications/sctpapp/SCTPServer.o \
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
    $O/linklayer/ext/cSocketRTScheduler.o \
    $O/linklayer/ext/ExtInterface.o \
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
    $O/networklayer/autorouting/HostAutoConfigurator.o \
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
    $O/networklayer/manetrouting/aodv/aodv-uu/debug_aodv.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/list.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/locality.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/routing_table.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/seek_list.o \
    $O/networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.o \
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
    $O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o \
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
    $O/transport/contract/SCTPSocket.o \
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
    $O/transport/sctp/SCTP.o \
    $O/transport/sctp/SCTPAlg.o \
    $O/transport/sctp/SCTPAssociationBase.o \
    $O/transport/sctp/SCTPAssociationEventProc.o \
    $O/transport/sctp/SCTPAssociationRcvMessage.o \
    $O/transport/sctp/SCTPAssociationUtil.o \
    $O/transport/sctp/SCTPCCFunctions.o \
    $O/transport/sctp/SCTPMessage.o \
    $O/transport/sctp/SCTPQueue.o \
    $O/transport/sctp/SCTPReceiveStream.o \
    $O/transport/sctp/SCTPSendStream.o \
    $O/transport/sctp/SCTPSSFunctions.o \
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
    $O/underTest/applications/TrafficGenerator_Erlangen/TrafGen.o \
    $O/underTest/applications/TrafficGenerator_Erlangen/WiMAXQoSTrafficGenerator.o \
    $O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneAP.o \
    $O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.o \
    $O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseAP.o \
    $O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseMS.o \
    $O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.o \
    $O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneMobilestation.o \
    $O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneMS.o \
    $O/underTest/linklayer/Ieee80216/Mac/CommonPartSublayerDown.o \
    $O/underTest/linklayer/Ieee80216/Mac/CommonPartSublayerUp.o \
    $O/underTest/linklayer/Ieee80216/Mac/ConvergenceSublayerDown.o \
    $O/underTest/linklayer/Ieee80216/Mac/ConvergenceSublayerUp.o \
    $O/underTest/linklayer/Ieee80216/Mac/SecuritySublayerDown.o \
    $O/underTest/linklayer/Ieee80216/Mac/SecuritySublayerUp.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerAuthorizationModule.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerControlModule.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerFragmentation.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerQoSAP.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerControlModule.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerHeaderCompression.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerTrafficClassification.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/Receiver/ConvergenceSublayerReceiver.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/Receiver/SecuritySublayerReceiver.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/Transceiver/CommonPartSublayerTransceiver.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/Transceiver/ConvergenceSublayerTransceiver.o \
    $O/underTest/linklayer/Ieee80216/MACSublayer/Transceiver/SecuritySublayerTransceiver.o \
    $O/underTest/linklayer/Ieee80216/phyLayer/decider/Decider80216.o \
    $O/underTest/linklayer/radio/Ieee80216Radio.o \
    $O/underTest/linklayer/radio/Ieee80216RadioModel.o \
    $O/underTest/linklayer/radio/WiMAXPathLossReceptionModel.o \
    $O/underTest/transport/aki/aki.o \
    $O/util/common.o \
    $O/util/NAMTraceWriter.o \
    $O/util/opp_utils.o \
    $O/util/TCPDump.o \
    $O/util/ThruputMeteringChannel.o \
    $O/util/XMLUtils.o \
    $O/util/headerserializers/ICMPSerializer.o \
    $O/util/headerserializers/IPSerializer.o \
    $O/util/headerserializers/SCTPSerializer.o \
    $O/util/headerserializers/TCPSerializer.o \
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
    $O/linklayer/ext/ExtFrame_m.o \
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
    $O/transport/contract/SCTPCommand_m.o \
    $O/transport/contract/TCPCommand_m.o \
    $O/transport/contract/UDPControlInfo_m.o \
    $O/transport/rtp/RTPSenderControlMessage_m.o \
    $O/transport/rtp/RTPSenderStatusMessage_m.o \
    $O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o \
    $O/transport/sctp/SCTPMessage_m.o \
    $O/transport/tcp/TCPSegment_m.o \
    $O/transport/udp/UDPPacket_m.o \
    $O/underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.o \
    $O/underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.o \
    $O/underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.o \
    $O/underTest/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.o \
    $O/underTest/transport/aki/AkiControlInfo_m.o \
    $O/underTest/transport/aki/akiMsg_m.o \
    $O/underTest/transport/aki/AkiPacket_m.o

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
    linklayer/ext/ExtFrame.msg \
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
    transport/contract/SCTPCommand.msg \
    transport/contract/TCPCommand.msg \
    transport/contract/UDPControlInfo.msg \
    transport/rtp/RTPSenderControlMessage.msg \
    transport/rtp/RTPSenderStatusMessage.msg \
    transport/rtp/profiles/avprofile/RTPMpegPacket.msg \
    transport/sctp/SCTPMessage.msg \
    transport/tcp/TCPSegment.msg \
    transport/udp/UDPPacket.msg \
    underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages.msg \
    underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives.msg \
    underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader.msg \
    underTest/linklayer/Ieee80216/Mac/WiMAXRadioControl.msg \
    underTest/transport/aki/AkiControlInfo.msg \
    underTest/transport/aki/akiMsg.msg \
    underTest/transport/aki/AkiPacket.msg

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
	-rm -f applications/sctpapp/*_m.cc applications/sctpapp/*_m.h
	-rm -f applications/tcpapp/*_m.cc applications/tcpapp/*_m.h
	-rm -f applications/udpapp/*_m.cc applications/udpapp/*_m.h
	-rm -f base/*_m.cc base/*_m.h
	-rm -f experimental/*_m.cc experimental/*_m.h
	-rm -f experimental/linklayer/*_m.cc experimental/linklayer/*_m.h
	-rm -f experimental/linklayer/contract/*_m.cc experimental/linklayer/contract/*_m.h
	-rm -f experimental/linklayer/ieee80211/*_m.cc experimental/linklayer/ieee80211/*_m.h
	-rm -f experimental/linklayer/ieee80211/mgmt/*_m.cc experimental/linklayer/ieee80211/mgmt/*_m.h
	-rm -f experimental/nodes/*_m.cc experimental/nodes/*_m.h
	-rm -f experimental/nodes/adhoc/*_m.cc experimental/nodes/adhoc/*_m.h
	-rm -f linklayer/*_m.cc linklayer/*_m.h
	-rm -f linklayer/contract/*_m.cc linklayer/contract/*_m.h
	-rm -f linklayer/ethernet/*_m.cc linklayer/ethernet/*_m.h
	-rm -f linklayer/etherswitch/*_m.cc linklayer/etherswitch/*_m.h
	-rm -f linklayer/ext/*_m.cc linklayer/ext/*_m.h
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
	-rm -f transport/sctp/*_m.cc transport/sctp/*_m.h
	-rm -f transport/tcp/*_m.cc transport/tcp/*_m.h
	-rm -f transport/tcp/flavours/*_m.cc transport/tcp/flavours/*_m.h
	-rm -f transport/tcp/queues/*_m.cc transport/tcp/queues/*_m.h
	-rm -f transport/udp/*_m.cc transport/udp/*_m.h
	-rm -f underTest/*_m.cc underTest/*_m.h
	-rm -f underTest/applications/*_m.cc underTest/applications/*_m.h
	-rm -f underTest/applications/TrafficGenerator_Erlangen/*_m.cc underTest/applications/TrafficGenerator_Erlangen/*_m.h
	-rm -f underTest/linklayer/*_m.cc underTest/linklayer/*_m.h
	-rm -f underTest/linklayer/Ieee80216/*_m.cc underTest/linklayer/Ieee80216/*_m.h
	-rm -f underTest/linklayer/Ieee80216/ControlPlane/*_m.cc underTest/linklayer/Ieee80216/ControlPlane/*_m.h
	-rm -f underTest/linklayer/Ieee80216/Mac/*_m.cc underTest/linklayer/Ieee80216/Mac/*_m.h
	-rm -f underTest/linklayer/Ieee80216/MACSublayer/*_m.cc underTest/linklayer/Ieee80216/MACSublayer/*_m.h
	-rm -f underTest/linklayer/Ieee80216/MACSublayer/QoS/*_m.cc underTest/linklayer/Ieee80216/MACSublayer/QoS/*_m.h
	-rm -f underTest/linklayer/Ieee80216/MACSublayer/Receiver/*_m.cc underTest/linklayer/Ieee80216/MACSublayer/Receiver/*_m.h
	-rm -f underTest/linklayer/Ieee80216/MACSublayer/Transceiver/*_m.cc underTest/linklayer/Ieee80216/MACSublayer/Transceiver/*_m.h
	-rm -f underTest/linklayer/Ieee80216/phyLayer/*_m.cc underTest/linklayer/Ieee80216/phyLayer/*_m.h
	-rm -f underTest/linklayer/Ieee80216/phyLayer/decider/*_m.cc underTest/linklayer/Ieee80216/phyLayer/decider/*_m.h
	-rm -f underTest/linklayer/Ieee80216/phyLayer/snrEval/*_m.cc underTest/linklayer/Ieee80216/phyLayer/snrEval/*_m.h
	-rm -f underTest/linklayer/radio/*_m.cc underTest/linklayer/radio/*_m.h
	-rm -f underTest/nodes/*_m.cc underTest/nodes/*_m.h
	-rm -f underTest/nodes/adhoc/*_m.cc underTest/nodes/adhoc/*_m.h
	-rm -f underTest/nodes/WiMAX/*_m.cc underTest/nodes/WiMAX/*_m.h
	-rm -f underTest/transport/*_m.cc underTest/transport/*_m.h
	-rm -f underTest/transport/aki/*_m.cc underTest/transport/aki/*_m.h
	-rm -f util/*_m.cc util/*_m.h
	-rm -f util/headerserializers/*_m.cc util/headerserializers/*_m.h
	-rm -f util/headerserializers/headers/*_m.cc util/headerserializers/headers/*_m.h
	-rm -f world/*_m.cc world/*_m.h

cleanall: clean
	-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/ethernet/*.cc applications/generic/*.cc applications/pingapp/*.cc applications/rtpapp/*.cc applications/sctpapp/*.cc applications/tcpapp/*.cc applications/udpapp/*.cc base/*.cc experimental/*.cc experimental/linklayer/*.cc experimental/linklayer/contract/*.cc experimental/linklayer/ieee80211/*.cc experimental/linklayer/ieee80211/mgmt/*.cc experimental/nodes/*.cc experimental/nodes/adhoc/*.cc linklayer/*.cc linklayer/contract/*.cc linklayer/ethernet/*.cc linklayer/etherswitch/*.cc linklayer/ext/*.cc linklayer/ieee80211/*.cc linklayer/ieee80211/mac/*.cc linklayer/ieee80211/mgmt/*.cc linklayer/mf80211/*.cc linklayer/mf80211/macLayer/*.cc linklayer/mf80211/phyLayer/*.cc linklayer/mf80211/phyLayer/decider/*.cc linklayer/mf80211/phyLayer/snrEval/*.cc linklayer/mfcore/*.cc linklayer/ppp/*.cc linklayer/radio/*.cc mobility/*.cc networklayer/*.cc networklayer/arp/*.cc networklayer/autorouting/*.cc networklayer/common/*.cc networklayer/contract/*.cc networklayer/extras/*.cc networklayer/icmpv6/*.cc networklayer/ipv4/*.cc networklayer/ipv6/*.cc networklayer/ldp/*.cc networklayer/manetrouting/*.cc networklayer/manetrouting/aodv/*.cc networklayer/manetrouting/aodv/aodv-uu/*.cc networklayer/manetrouting/base/*.cc networklayer/manetrouting/dsdv/*.cc networklayer/manetrouting/dsr/*.cc networklayer/manetrouting/dsr/dsr-uu/*.cc networklayer/manetrouting/dymo/*.cc networklayer/manetrouting/dymo/dymoum/*.cc networklayer/manetrouting/dymo_fau/*.cc networklayer/manetrouting/manager/*.cc networklayer/manetrouting/olsr/*.cc networklayer/mpls/*.cc networklayer/ospfv2/*.cc networklayer/ospfv2/interface/*.cc networklayer/ospfv2/messagehandler/*.cc networklayer/ospfv2/neighbor/*.cc networklayer/ospfv2/router/*.cc networklayer/queue/*.cc networklayer/rsvp_te/*.cc networklayer/ted/*.cc nodes/*.cc nodes/adhoc/*.cc nodes/ethernet/*.cc nodes/inet/*.cc nodes/ipv6/*.cc nodes/mpls/*.cc nodes/wireless/*.cc transport/*.cc transport/contract/*.cc transport/rtp/*.cc transport/rtp/profiles/*.cc transport/rtp/profiles/avprofile/*.cc transport/sctp/*.cc transport/tcp/*.cc transport/tcp/flavours/*.cc transport/tcp/queues/*.cc transport/udp/*.cc underTest/*.cc underTest/applications/*.cc underTest/applications/TrafficGenerator_Erlangen/*.cc underTest/linklayer/*.cc underTest/linklayer/Ieee80216/*.cc underTest/linklayer/Ieee80216/ControlPlane/*.cc underTest/linklayer/Ieee80216/Mac/*.cc underTest/linklayer/Ieee80216/MACSublayer/*.cc underTest/linklayer/Ieee80216/MACSublayer/QoS/*.cc underTest/linklayer/Ieee80216/MACSublayer/Receiver/*.cc underTest/linklayer/Ieee80216/MACSublayer/Transceiver/*.cc underTest/linklayer/Ieee80216/phyLayer/*.cc underTest/linklayer/Ieee80216/phyLayer/decider/*.cc underTest/linklayer/Ieee80216/phyLayer/snrEval/*.cc underTest/linklayer/radio/*.cc underTest/nodes/*.cc underTest/nodes/adhoc/*.cc underTest/nodes/WiMAX/*.cc underTest/transport/*.cc underTest/transport/aki/*.cc util/*.cc util/headerserializers/*.cc util/headerserializers/headers/*.cc world/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/ethernet/EtherAppCli.o: applications/ethernet/EtherAppCli.cc \
  applications/ethernet/EtherAppCli.h \
  applications/ethernet/EtherApp_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h
$O/applications/ethernet/EtherAppSrv.o: applications/ethernet/EtherAppSrv.cc \
  applications/ethernet/EtherAppSrv.h \
  applications/ethernet/EtherApp_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/INETDefs.h \
  linklayer/contract/MACAddress.h
$O/applications/ethernet/EtherApp_m.o: applications/ethernet/EtherApp_m.cc \
  applications/ethernet/EtherApp_m.h \
  base/INETDefs.h
$O/applications/generic/IPTrafGen.o: applications/generic/IPTrafGen.cc \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  applications/generic/IPTrafGen.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPv6Address.h \
  base/INETDefs.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/contract/IPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/contract/IPv6ControlInfo.h
$O/applications/pingapp/PingApp.o: applications/pingapp/PingApp.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  linklayer/contract/MACAddress.h \
  applications/pingapp/PingPayload_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPvXAddress.h \
  applications/pingapp/PingApp.h \
  base/INETDefs.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h
$O/applications/pingapp/PingPayload_m.o: applications/pingapp/PingPayload_m.cc \
  applications/pingapp/PingPayload_m.h \
  base/INETDefs.h
$O/applications/rtpapp/RTPApplication.o: applications/rtpapp/RTPApplication.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  applications/rtpapp/RTPApplication.h \
  transport/rtp/RTPInterfacePacket.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h
$O/applications/sctpapp/SCTPClient.o: applications/sctpapp/SCTPClient.cc \
  applications/sctpapp/SCTPClient.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  transport/contract/SCTPSocket.h \
  base/NotifierConsts.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/applications/sctpapp/SCTPPeer.o: applications/sctpapp/SCTPPeer.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  applications/sctpapp/SCTPPeer.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  transport/contract/SCTPSocket.h \
  base/NotifierConsts.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/applications/sctpapp/SCTPServer.o: applications/sctpapp/SCTPServer.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  transport/contract/SCTPSocket.h \
  base/NotifierConsts.h \
  applications/sctpapp/SCTPServer.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/applications/tcpapp/GenericAppMsg_m.o: applications/tcpapp/GenericAppMsg_m.cc \
  applications/tcpapp/GenericAppMsg_m.h \
  base/INETDefs.h
$O/applications/tcpapp/TCPBasicClientApp.o: applications/tcpapp/TCPBasicClientApp.cc \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  applications/tcpapp/TCPBasicClientApp.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  applications/tcpapp/TCPGenericCliAppBase.h
$O/applications/tcpapp/TCPEchoApp.o: applications/tcpapp/TCPEchoApp.cc \
  transport/contract/TCPSocket.h \
  applications/tcpapp/TCPEchoApp.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPGenericCliAppBase.o: applications/tcpapp/TCPGenericCliAppBase.cc \
  applications/tcpapp/GenericAppMsg_m.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  applications/tcpapp/TCPGenericCliAppBase.h
$O/applications/tcpapp/TCPGenericSrvApp.o: applications/tcpapp/TCPGenericSrvApp.cc \
  applications/tcpapp/GenericAppMsg_m.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  applications/tcpapp/TCPGenericSrvApp.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPGenericSrvThread.o: applications/tcpapp/TCPGenericSrvThread.cc \
  applications/tcpapp/TCPSrvHostApp.h \
  applications/tcpapp/GenericAppMsg_m.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocketMap.h \
  applications/tcpapp/TCPGenericSrvThread.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPSessionApp.o: applications/tcpapp/TCPSessionApp.cc \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  applications/tcpapp/TCPSessionApp.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPSinkApp.o: applications/tcpapp/TCPSinkApp.cc \
  transport/contract/TCPSocket.h \
  applications/tcpapp/TCPSinkApp.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPSpoof.o: applications/tcpapp/TCPSpoof.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  transport/tcp/TCPSegment.h \
  applications/tcpapp/TCPSpoof.h \
  transport/tcp/TCPSegment_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TCPSrvHostApp.o: applications/tcpapp/TCPSrvHostApp.cc \
  applications/tcpapp/TCPSrvHostApp.h \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocketMap.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/tcpapp/TelnetApp.o: applications/tcpapp/TelnetApp.cc \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  applications/tcpapp/TelnetApp.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  applications/tcpapp/TCPGenericCliAppBase.h
$O/applications/udpapp/UDPAppBase.o: applications/udpapp/UDPAppBase.cc \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  applications/udpapp/UDPAppBase.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/udpapp/UDPBasicApp.o: applications/udpapp/UDPBasicApp.cc \
  applications/udpapp/UDPBasicApp.h \
  base/INETDefs.h \
  applications/udpapp/UDPAppBase.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/udpapp/UDPBasicBurst.o: applications/udpapp/UDPBasicBurst.cc \
  applications/udpapp/UDPBasicBurst.h \
  base/INETDefs.h \
  applications/udpapp/UDPAppBase.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/udpapp/UDPEchoApp.o: applications/udpapp/UDPEchoApp.cc \
  applications/udpapp/UDPBasicApp.h \
  base/INETDefs.h \
  applications/udpapp/UDPAppBase.h \
  applications/udpapp/UDPEchoAppMsg_m.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  applications/udpapp/UDPEchoApp.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/udpapp/UDPEchoAppMsg_m.o: applications/udpapp/UDPEchoAppMsg_m.cc \
  base/INETDefs.h \
  applications/udpapp/UDPEchoAppMsg_m.h
$O/applications/udpapp/UDPSink.o: applications/udpapp/UDPSink.cc \
  applications/udpapp/UDPSink.h \
  base/INETDefs.h \
  applications/udpapp/UDPAppBase.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/udpapp/UDPVideoStreamCli.o: applications/udpapp/UDPVideoStreamCli.cc \
  applications/udpapp/UDPVideoStreamCli.h \
  base/INETDefs.h \
  applications/udpapp/UDPAppBase.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/applications/udpapp/UDPVideoStreamSvr.o: applications/udpapp/UDPVideoStreamSvr.cc \
  base/INETDefs.h \
  applications/udpapp/UDPAppBase.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  applications/udpapp/UDPVideoStreamSvr.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/base/AbstractQueue.o: base/AbstractQueue.cc \
  base/INETDefs.h \
  base/AbstractQueue.h
$O/base/BasicModule.o: base/BasicModule.cc \
  base/BasicModule.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h
$O/base/Blackboard.o: base/Blackboard.cc \
  base/INETDefs.h \
  base/Blackboard.h \
  base/ModuleAccess.h
$O/base/ByteArrayMessage.o: base/ByteArrayMessage.cc \
  base/ByteArrayMessage_m.h \
  base/INETDefs.h \
  base/ByteArrayMessage.h
$O/base/ByteArrayMessage_m.o: base/ByteArrayMessage_m.cc \
  base/ByteArrayMessage_m.h \
  base/INETDefs.h
$O/base/Join.o: base/Join.cc \
  base/INETDefs.h
$O/base/ModuleAccess.o: base/ModuleAccess.cc \
  base/INETDefs.h \
  base/ModuleAccess.h
$O/base/NotificationBoard.o: base/NotificationBoard.cc \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h
$O/base/NotifierConsts.o: base/NotifierConsts.cc \
  base/INETDefs.h \
  base/NotifierConsts.h
$O/base/PassiveQueueBase.o: base/PassiveQueueBase.cc \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/PassiveQueueBase.h
$O/base/ProtocolMap.o: base/ProtocolMap.cc \
  base/ProtocolMap.h \
  base/INETDefs.h
$O/base/QueueBase.o: base/QueueBase.cc \
  base/QueueBase.h \
  base/INETDefs.h \
  base/AbstractQueue.h
$O/base/QueueWithQoS.o: base/QueueWithQoS.cc \
  base/QueueWithQoS.h \
  base/INETDefs.h \
  base/EnqueueHook.h \
  base/AbstractQueue.h
$O/base/ReassemblyBuffer.o: base/ReassemblyBuffer.cc \
  base/INETDefs.h \
  base/ReassemblyBuffer.h
$O/base/Sink.o: base/Sink.cc \
  base/Sink.h \
  base/INETDefs.h
$O/experimental/linklayer/contract/MeshControlInfo_m.o: experimental/linklayer/contract/MeshControlInfo_m.cc \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/contract/IPv6Address.h \
  experimental/linklayer/contract/MeshControlInfo_m.h \
  networklayer/contract/IPAddress.h
$O/experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.o: experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  base/IPassiveQueue.h \
  experimental/linklayer/ieee80211/mgmt/Ieee80211Mesh.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  linklayer/contract/ControlInfoBreakLink_m.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/PassiveQueueBase.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  experimental/linklayer/contract/MeshControlInfo_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  experimental/linklayer/ieee80211/mgmt/lwmpls_data.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.o: experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.cc \
  experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h
$O/experimental/linklayer/ieee80211/mgmt/lwmpls_data.o: experimental/linklayer/ieee80211/mgmt/lwmpls_data.cc \
  experimental/linklayer/ieee80211/mgmt/lwmpls_data.h
$O/linklayer/contract/ControlInfoBreakLink_m.o: linklayer/contract/ControlInfoBreakLink_m.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/ControlInfoBreakLink_m.h
$O/linklayer/contract/Ieee802Ctrl_m.o: linklayer/contract/Ieee802Ctrl_m.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h
$O/linklayer/contract/MACAddress.o: linklayer/contract/MACAddress.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceToken.h
$O/linklayer/contract/PhyControlInfo_m.o: linklayer/contract/PhyControlInfo_m.cc \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h
$O/linklayer/contract/Radio80211aControlInfo_m.o: linklayer/contract/Radio80211aControlInfo_m.cc \
  linklayer/contract/Radio80211aControlInfo_m.h
$O/linklayer/ethernet/EtherBus.o: linklayer/ethernet/EtherBus.cc \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/EtherBus.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h
$O/linklayer/ethernet/EtherEncap.o: linklayer/ethernet/EtherEncap.cc \
  linklayer/contract/TxNotifDetails.h \
  linklayer/ethernet/EtherMACBase.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/ethernet/EtherEncap.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherMAC.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h
$O/linklayer/ethernet/EtherFrame_m.o: linklayer/ethernet/EtherFrame_m.cc \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h
$O/linklayer/ethernet/EtherHub.o: linklayer/ethernet/EtherHub.cc \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherHub.h \
  linklayer/ethernet/EtherFrame_m.h
$O/linklayer/ethernet/EtherLLC.o: linklayer/ethernet/EtherLLC.cc \
  linklayer/ethernet/EtherLLC.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h
$O/linklayer/ethernet/EtherMAC.o: linklayer/ethernet/EtherMAC.cc \
  linklayer/contract/TxNotifDetails.h \
  linklayer/ethernet/EtherMACBase.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  linklayer/ethernet/EtherMAC.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h
$O/linklayer/ethernet/EtherMAC2.o: linklayer/ethernet/EtherMAC2.cc \
  linklayer/contract/TxNotifDetails.h \
  linklayer/ethernet/EtherMACBase.h \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/ethernet/EtherMAC2.h
$O/linklayer/ethernet/EtherMACBase.o: linklayer/ethernet/EtherMACBase.cc \
  linklayer/contract/TxNotifDetails.h \
  linklayer/ethernet/EtherMACBase.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h
$O/linklayer/etherswitch/MACRelayUnitBase.o: linklayer/etherswitch/MACRelayUnitBase.cc \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/etherswitch/MACRelayUnitBase.h
$O/linklayer/etherswitch/MACRelayUnitNP.o: linklayer/etherswitch/MACRelayUnitNP.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/etherswitch/MACRelayUnitNP.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/etherswitch/MACRelayUnitBase.h
$O/linklayer/etherswitch/MACRelayUnitPP.o: linklayer/etherswitch/MACRelayUnitPP.cc \
  linklayer/contract/MACAddress.h \
  linklayer/ethernet/Ethernet.h \
  base/INETDefs.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  linklayer/etherswitch/MACRelayUnitPP.h \
  linklayer/ethernet/EtherFrame_m.h \
  linklayer/etherswitch/MACRelayUnitBase.h
$O/linklayer/ext/ExtFrame_m.o: linklayer/ext/ExtFrame_m.cc \
  linklayer/ext/ExtFrame_m.h
$O/linklayer/ext/ExtInterface.o: linklayer/ext/ExtInterface.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/ext/ExtInterface.h \
  linklayer/contract/MACAddress.h \
  util/headerserializers/headers/bsdint.h \
  linklayer/ext/cSocketRTScheduler.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  linklayer/ext/ExtFrame_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  util/headerserializers/IPSerializer.h \
  networklayer/contract/IPAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/linklayer/ext/cSocketRTScheduler.o: linklayer/ext/cSocketRTScheduler.cc \
  util/headerserializers/headers/bsdint.h \
  linklayer/ext/cSocketRTScheduler.h \
  base/INETDefs.h \
  linklayer/ext/ExtFrame_m.h \
  util/headerserializers/headers/ethernet.h
$O/linklayer/ieee80211/mac/Ieee80211Frame_m.o: linklayer/ieee80211/mac/Ieee80211Frame_m.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mac/Ieee80211Mac.o: linklayer/ieee80211/mac/Ieee80211Mac.cc \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/contract/RadioState.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  linklayer/contract/ControlInfoBreakLink_m.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mac/Ieee80211Mac.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/FSMA.h \
  linklayer/mfcore/WirelessMacBase.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mac/Ieee80211aMac.o: linklayer/ieee80211/mac/Ieee80211aMac.cc \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  util/FWMath.h \
  base/IPassiveQueue.h \
  linklayer/contract/RadioState.h \
  networklayer/common/IInterfaceTable.h \
  linklayer/ieee80211/mac/Ieee80211aMac.h \
  base/INETDefs.h \
  linklayer/contract/ControlInfoBreakLink_m.h \
  base/NotificationBoard.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  linklayer/contract/Radio80211aControlInfo_m.h \
  linklayer/ieee80211/mac/Ieee80211aConsts.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/FSMA.h \
  linklayer/mfcore/WirelessMacBase.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mac/Ieee80211gMac.o: linklayer/ieee80211/mac/Ieee80211gMac.cc \
  linklayer/ieee80211/mac/Ieee80211gMac.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/contract/RadioState.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  linklayer/contract/ControlInfoBreakLink_m.h \
  base/NotificationBoard.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/FSMA.h \
  linklayer/mfcore/WirelessMacBase.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/PassiveQueueBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/PassiveQueueBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
  linklayer/ethernet/Ethernet.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/PassiveQueueBase.h \
  linklayer/ethernet/EtherFrame_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/PassiveQueueBase.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o: linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
  linklayer/contract/MACAddress.h \
  util/FWMath.h \
  base/IPassiveQueue.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/PassiveQueueBase.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
  linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/PassiveQueueBase.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o: linklayer/ieee80211/mgmt/Ieee80211Primitives_m.cc \
  linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/mf80211/macLayer/CSMAMacLayer.o: linklayer/mf80211/macLayer/CSMAMacLayer.cc \
  linklayer/contract/MACAddress.h \
  linklayer/contract/RadioState.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  linklayer/mf80211/macLayer/CSMAMacLayer.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/mfcore/WirelessMacBase.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/mf80211/macLayer/MacPkt_m.h
$O/linklayer/mf80211/macLayer/Mac80211.o: linklayer/mf80211/macLayer/Mac80211.cc \
  linklayer/mf80211/macLayer/Mac80211Pkt_m.h \
  linklayer/mf80211/macLayer/Mac80211.h \
  linklayer/contract/MACAddress.h \
  linklayer/contract/RadioState.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/mfcore/WirelessMacBase.h \
  linklayer/mf80211/macLayer/Consts80211.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/mf80211/macLayer/MacPkt_m.h
$O/linklayer/mf80211/macLayer/Mac80211Pkt_m.o: linklayer/mf80211/macLayer/Mac80211Pkt_m.cc \
  linklayer/mf80211/macLayer/Mac80211Pkt_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/mf80211/macLayer/MacPkt_m.h
$O/linklayer/mf80211/macLayer/MacPkt_m.o: linklayer/mf80211/macLayer/MacPkt_m.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/mf80211/macLayer/MacPkt_m.h
$O/linklayer/mf80211/phyLayer/decider/Decider80211.o: linklayer/mf80211/phyLayer/decider/Decider80211.cc \
  linklayer/mfcore/BasicDecider.h \
  util/FWMath.h \
  base/BasicModule.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  base/ModuleAccess.h \
  linklayer/mf80211/phyLayer/decider/Decider80211.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/mf80211/macLayer/Consts80211.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.o: linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.cc \
  linklayer/mf80211/phyLayer/decider/ErrAndCollDecider.h \
  linklayer/mfcore/BasicDecider.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/INETDefs.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  linklayer/mf80211/phyLayer/decider/SnrDecider.h \
  base/INotifiable.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/mf80211/phyLayer/decider/SnrDecider.o: linklayer/mf80211/phyLayer/decider/SnrDecider.cc \
  linklayer/mfcore/BasicDecider.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  linklayer/mf80211/phyLayer/decider/SnrDecider.h \
  base/INotifiable.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.o: linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.cc \
  world/ChannelAccess.h \
  linklayer/mfcore/BasicSnrEval.h \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  base/NotificationBoard.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/ModuleAccess.h \
  linklayer/mf80211/phyLayer/snrEval/GilbertElliotSnr.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/mfcore/AirFrame_m.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/mf80211/phyLayer/snrEval/SnrEval.o: linklayer/mf80211/phyLayer/snrEval/SnrEval.cc \
  linklayer/mfcore/BasicSnrEval.h \
  world/ChannelAccess.h \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/mf80211/phyLayer/snrEval/SnrEval80211.o: linklayer/mf80211/phyLayer/snrEval/SnrEval80211.cc \
  world/ChannelAccess.h \
  linklayer/mfcore/BasicSnrEval.h \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  linklayer/mf80211/phyLayer/snrEval/SnrEval.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  base/NotificationBoard.h \
  linklayer/mf80211/phyLayer/snrEval/SnrEval80211.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/mf80211/macLayer/Consts80211.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/mfcore/AirFrame_m.o: linklayer/mfcore/AirFrame_m.cc \
  util/FWMath.h \
  base/INETDefs.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h
$O/linklayer/mfcore/BasicDecider.o: linklayer/mfcore/BasicDecider.cc \
  linklayer/mfcore/BasicDecider.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/INETDefs.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/mfcore/BasicSnrEval.o: linklayer/mfcore/BasicSnrEval.cc \
  world/ChannelAccess.h \
  linklayer/mfcore/BasicSnrEval.h \
  base/BasicModule.h \
  util/FWMath.h \
  base/INETDefs.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/mfcore/TransmComplete_m.h \
  linklayer/mfcore/AirFrame_m.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/mfcore/SnrControlInfo_m.o: linklayer/mfcore/SnrControlInfo_m.cc \
  base/INETDefs.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/mfcore/TransmComplete_m.o: linklayer/mfcore/TransmComplete_m.cc \
  base/INETDefs.h \
  linklayer/mfcore/TransmComplete_m.h
$O/linklayer/mfcore/WirelessMacBase.o: linklayer/mfcore/WirelessMacBase.cc \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/mfcore/WirelessMacBase.h
$O/linklayer/ppp/PPP.o: linklayer/ppp/PPP.cc \
  linklayer/contract/TxNotifDetails.h \
  linklayer/ppp/PPPFrame_m.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  linklayer/ppp/PPP.h \
  networklayer/common/InterfaceTableAccess.h
$O/linklayer/ppp/PPPFrame_m.o: linklayer/ppp/PPPFrame_m.cc \
  linklayer/ppp/PPPFrame_m.h \
  base/INETDefs.h
$O/linklayer/ppp/ThruputMeter.o: linklayer/ppp/ThruputMeter.cc \
  linklayer/ppp/ThruputMeter.h \
  base/INETDefs.h
$O/linklayer/radio/AbstractRadio.o: linklayer/radio/AbstractRadio.cc \
  world/ChannelAccess.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/BasicModule.h \
  util/FWMath.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/contract/PhyControlInfo_m.h \
  base/ModuleAccess.h \
  linklayer/contract/Radio80211aControlInfo_m.h \
  base/NotifierConsts.h \
  linklayer/radio/AbstractRadio.h \
  base/INotifiable.h \
  linklayer/mfcore/AirFrame_m.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/radio/GenericRadio.o: linklayer/radio/GenericRadio.cc \
  world/ChannelAccess.h \
  util/FWMath.h \
  base/BasicModule.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  linklayer/radio/AbstractRadio.h \
  base/INotifiable.h \
  linklayer/radio/GenericRadio.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/radio/GenericRadioModel.o: linklayer/radio/GenericRadioModel.cc \
  linklayer/radio/IModulation.h \
  linklayer/radio/Modulation.h \
  util/FWMath.h \
  base/INETDefs.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/GenericRadioModel.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/radio/Ieee80211Radio.o: linklayer/radio/Ieee80211Radio.cc \
  world/ChannelAccess.h \
  util/FWMath.h \
  base/BasicModule.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  linklayer/radio/Ieee80211Radio.h \
  base/NotifierConsts.h \
  linklayer/radio/AbstractRadio.h \
  base/INotifiable.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/radio/Ieee80211RadioModel.o: linklayer/radio/Ieee80211RadioModel.cc \
  linklayer/radio/Ieee80211RadioModel.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/FWMath.h \
  base/INETDefs.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/radio/Ieee80211aRadio.o: linklayer/radio/Ieee80211aRadio.cc \
  linklayer/radio/Ieee80211aRadio.h \
  world/ChannelAccess.h \
  util/FWMath.h \
  base/BasicModule.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  linklayer/radio/AbstractRadio.h \
  base/INotifiable.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/radio/Ieee80211aRadioModel.o: linklayer/radio/Ieee80211aRadioModel.cc \
  linklayer/radio/IModulation.h \
  linklayer/radio/bpskMode.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  linklayer/radio/Modulation.h \
  util/FWMath.h \
  base/INETDefs.h \
  linklayer/radio/transmissionMode.h \
  linklayer/ieee80211/mac/Ieee80211aConsts.h \
  linklayer/radio/qamMode.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/SnrList.h \
  linklayer/radio/Ieee80211aRadioModel.h
$O/linklayer/radio/Ieee80211gRadio.o: linklayer/radio/Ieee80211gRadio.cc \
  world/ChannelAccess.h \
  util/FWMath.h \
  base/BasicModule.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  linklayer/radio/AbstractRadio.h \
  linklayer/radio/Ieee80211gRadio.h \
  base/INotifiable.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/radio/Ieee80211gRadioModel.o: linklayer/radio/Ieee80211gRadioModel.cc \
  linklayer/radio/Ieee80211gRadioModel.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/FWMath.h \
  base/INETDefs.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/SnrList.h
$O/linklayer/radio/Modulation.o: linklayer/radio/Modulation.cc \
  linklayer/radio/IModulation.h \
  linklayer/radio/Modulation.h \
  base/INETDefs.h
$O/linklayer/radio/PathLossReceptionModel.o: linklayer/radio/PathLossReceptionModel.cc \
  util/FWMath.h \
  base/INETDefs.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/radio/PathLossReceptionModel.h
$O/linklayer/radio/TwoRayModel.o: linklayer/radio/TwoRayModel.cc \
  util/FWMath.h \
  base/INETDefs.h \
  linklayer/radio/TwoRayModel.h \
  linklayer/radio/IReceptionModel.h
$O/linklayer/radio/bpskMode.o: linklayer/radio/bpskMode.cc \
  linklayer/radio/IModulation.h \
  linklayer/radio/bpskMode.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  linklayer/radio/transmissionMode.h \
  linklayer/radio/qamMode.h
$O/linklayer/radio/qamMode.o: linklayer/radio/qamMode.cc \
  linklayer/radio/IModulation.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  linklayer/radio/transmissionMode.h \
  linklayer/radio/qamMode.h
$O/linklayer/radio/transmissionMode.o: linklayer/radio/transmissionMode.cc \
  linklayer/radio/IModulation.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  base/INETDefs.h \
  linklayer/radio/transmissionMode.h
$O/mobility/ANSimMobility.o: mobility/ANSimMobility.cc \
  mobility/ANSimMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  mobility/LineSegmentsMobilityBase.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h
$O/mobility/BasicMobility.o: mobility/BasicMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h
$O/mobility/BonnMotionFileCache.o: mobility/BonnMotionFileCache.cc \
  util/FWMath.h \
  base/BasicModule.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  mobility/BonnMotionFileCache.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h
$O/mobility/BonnMotionMobility.o: mobility/BonnMotionMobility.cc \
  mobility/BonnMotionMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  mobility/BonnMotionFileCache.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  mobility/LineSegmentsMobilityBase.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h
$O/mobility/CircleMobility.o: mobility/CircleMobility.cc \
  mobility/CircleMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h
$O/mobility/ConstSpeedMobility.o: mobility/ConstSpeedMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  mobility/ConstSpeedMobility.h \
  base/INotifiable.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h
$O/mobility/LineSegmentsMobilityBase.o: mobility/LineSegmentsMobilityBase.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  mobility/LineSegmentsMobilityBase.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h
$O/mobility/LinearMobility.o: mobility/LinearMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  mobility/LinearMobility.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h
$O/mobility/MassMobility.o: mobility/MassMobility.cc \
  mobility/MassMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h
$O/mobility/Ns2MotionMobility.o: mobility/Ns2MotionMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  mobility/LineSegmentsMobilityBase.h \
  mobility/Ns2MotionMobility.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h
$O/mobility/NullMobility.o: mobility/NullMobility.cc \
  util/FWMath.h \
  base/BasicModule.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h \
  mobility/NullMobility.h
$O/mobility/RandomWPMobility.o: mobility/RandomWPMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  mobility/RandomWPMobility.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  mobility/LineSegmentsMobilityBase.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h
$O/mobility/RectangleMobility.o: mobility/RectangleMobility.cc \
  mobility/RectangleMobility.h \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h
$O/mobility/TraCIMobility.o: mobility/TraCIMobility.cc \
  util/FWMath.h \
  base/BasicModule.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  mobility/TraCIMobility.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h \
  world/TraCIScenarioManager.h
$O/mobility/TurtleMobility.o: mobility/TurtleMobility.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  mobility/TurtleMobility.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  mobility/LineSegmentsMobilityBase.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h
$O/networklayer/arp/ARP.o: networklayer/arp/ARP.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/arp/ARP.h \
  networklayer/contract/IPAddress.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/arp/ARPPacket_m.o: networklayer/arp/ARPPacket_m.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/arp/ARPPacket_m.h
$O/networklayer/autorouting/FlatNetworkConfigurator.o: networklayer/autorouting/FlatNetworkConfigurator.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/autorouting/FlatNetworkConfigurator.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/autorouting/FlatNetworkConfigurator6.o: networklayer/autorouting/FlatNetworkConfigurator6.cc \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/autorouting/FlatNetworkConfigurator6.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/autorouting/HostAutoConfigurator.o: networklayer/autorouting/HostAutoConfigurator.cc \
  networklayer/autorouting/HostAutoConfigurator.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/autorouting/NetworkConfigurator.o: networklayer/autorouting/NetworkConfigurator.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/autorouting/NetworkConfigurator.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/common/InterfaceEntry.o: networklayer/common/InterfaceEntry.cc \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPAddress.h
$O/networklayer/common/InterfaceTable.o: networklayer/common/InterfaceTable.cc \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h
$O/networklayer/contract/IPAddress.o: networklayer/contract/IPAddress.cc \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/contract/IPAddressResolver.o: networklayer/contract/IPAddressResolver.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/contract/IPControlInfo.o: networklayer/contract/IPControlInfo.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPAddress.h
$O/networklayer/contract/IPControlInfo_m.o: networklayer/contract/IPControlInfo_m.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/contract/IPProtocolId_m.o: networklayer/contract/IPProtocolId_m.cc \
  networklayer/contract/IPProtocolId_m.h \
  base/INETDefs.h
$O/networklayer/contract/IPv6Address.o: networklayer/contract/IPv6Address.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceToken.h
$O/networklayer/contract/IPv6ControlInfo.o: networklayer/contract/IPv6ControlInfo.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/contract/IPv6ControlInfo_m.o: networklayer/contract/IPv6ControlInfo_m.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/contract/IPvXAddress.o: networklayer/contract/IPvXAddress.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/extras/Dummy.o: networklayer/extras/Dummy.cc
$O/networklayer/extras/FailureManager.o: networklayer/extras/FailureManager.cc \
  networklayer/extras/FailureManager.h \
  base/IScriptable.h \
  base/INETDefs.h
$O/networklayer/extras/NetworkInfo.o: networklayer/extras/NetworkInfo.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/extras/NetworkInfo.h \
  base/IScriptable.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/networklayer/icmpv6/ICMPv6.o: networklayer/icmpv6/ICMPv6.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/ipv6/RoutingTable6.h
$O/networklayer/icmpv6/ICMPv6Message_m.o: networklayer/icmpv6/ICMPv6Message_m.cc \
  base/INETDefs.h \
  networklayer/icmpv6/ICMPv6Message_m.h
$O/networklayer/icmpv6/IPv6NDMessage_m.o: networklayer/icmpv6/IPv6NDMessage_m.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/icmpv6/IPv6NDMessage_m.h
$O/networklayer/icmpv6/IPv6NeighbourCache.o: networklayer/icmpv6/IPv6NeighbourCache.cc \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/icmpv6/IPv6NeighbourDiscovery.o: networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  base/NotifierConsts.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ipv4/ControlManetRouting_m.o: networklayer/ipv4/ControlManetRouting_m.cc \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ipv4/ErrorHandling.o: networklayer/ipv4/ErrorHandling.cc \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ErrorHandling.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ipv4/ICMP.o: networklayer/ipv4/ICMP.cc \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ipv4/ICMPMessage_m.o: networklayer/ipv4/ICMPMessage_m.cc \
  networklayer/ipv4/ICMPMessage_m.h \
  base/INETDefs.h
$O/networklayer/ipv4/IP.o: networklayer/ipv4/IP.cc \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ICMP.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/arp/ARPPacket_m.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ipv4/IPDatagram_m.o: networklayer/ipv4/IPDatagram_m.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ipv4/IPFragBuf.o: networklayer/ipv4/IPFragBuf.cc \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ICMP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/IPFragBuf.h
$O/networklayer/ipv4/IPRoute.o: networklayer/ipv4/IPRoute.cc \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ipv4/IPv4InterfaceData.o: networklayer/ipv4/IPv4InterfaceData.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ipv4/RoutingTable.o: networklayer/ipv4/RoutingTable.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/RoutingTableParser.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ipv4/RoutingTableParser.o: networklayer/ipv4/RoutingTableParser.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/RoutingTableParser.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ipv6/IPv6.o: networklayer/ipv6/IPv6.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/QueueBase.h \
  networklayer/icmpv6/IPv6NeighbourCache.h \
  base/ProtocolMap.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/icmpv6/IPv6NDMessage_m.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/ipv6/IPv6FragBuf.h \
  networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/icmpv6/IPv6NeighbourDiscovery.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ipv6/IPv6Datagram.o: networklayer/ipv6/IPv6Datagram.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6Datagram_m.o: networklayer/ipv6/IPv6Datagram_m.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h
$O/networklayer/ipv6/IPv6ErrorHandling.o: networklayer/ipv6/IPv6ErrorHandling.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  base/INETDefs.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ErrorHandling.h
$O/networklayer/ipv6/IPv6ExtensionHeaders_m.o: networklayer/ipv6/IPv6ExtensionHeaders_m.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6FragBuf.o: networklayer/ipv6/IPv6FragBuf.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv6Address.h \
  networklayer/ipv6/IPv6ExtensionHeaders_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/ipv6/IPv6FragBuf.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/ipv6/RoutingTable6.h
$O/networklayer/ipv6/IPv6InterfaceData.o: networklayer/ipv6/IPv6InterfaceData.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv6/IPv6InterfaceData.h
$O/networklayer/ipv6/RoutingTable6.o: networklayer/ipv6/RoutingTable6.cc \
  util/opp_utils.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ldp/LDP.o: networklayer/ldp/LDP.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/TCPSocket.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  transport/contract/TCPSocketMap.h \
  linklayer/contract/MACAddress.h \
  transport/udp/UDPPacket_m.h \
  networklayer/mpls/ConstType.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/rsvp_te/IntServ.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/ted/TEDAccess.h \
  networklayer/common/InterfaceEntry.h \
  transport/udp/UDPPacket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/ldp/LDP.h \
  networklayer/mpls/IClassifier.h \
  networklayer/mpls/LIBTable.h \
  base/ModuleAccess.h \
  networklayer/ted/TED.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ted/TED_m.h \
  base/INotifiable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ldp/LDPPacket_m.o: networklayer/ldp/LDPPacket_m.cc \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  networklayer/ldp/LDPPacket_m.h
$O/networklayer/manetrouting/aodv/aodv_msg_struct.o: networklayer/manetrouting/aodv/aodv_msg_struct.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/manetrouting/aodv/aodv_msg_struct.h \
  networklayer/common/InterfaceTable.h \
  base/ProtocolMap.h \
  linklayer/contract/MACAddress.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/udp/UDPPacket.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h
$O/networklayer/manetrouting/aodv/aodv_uu_omnet.o: networklayer/manetrouting/aodv/aodv_uu_omnet.cc \
  networklayer/manetrouting/aodv/packet_queue_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/aodv/aodv_msg_struct.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/ipv4/ICMP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/aodv/aodv_uu_omnet.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h
$O/networklayer/manetrouting/aodv/packet_queue_omnet.o: networklayer/manetrouting/aodv/packet_queue_omnet.cc \
  networklayer/manetrouting/aodv/packet_queue_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv_msg_struct.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv_uu_omnet.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_hello.o: networklayer/manetrouting/aodv/aodv-uu/aodv_hello.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.o: networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.o: networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_socket.o: networklayer/manetrouting/aodv/aodv-uu/aodv_socket.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h
$O/networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.o: networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/nl.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h
$O/networklayer/manetrouting/aodv/aodv-uu/debug_aodv.o: networklayer/manetrouting/aodv/aodv-uu/debug_aodv.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h
$O/networklayer/manetrouting/aodv/aodv-uu/list.o: networklayer/manetrouting/aodv/aodv-uu/list.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h
$O/networklayer/manetrouting/aodv/aodv-uu/locality.o: networklayer/manetrouting/aodv/aodv-uu/locality.cc \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/aodv/aodv-uu/locality.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h
$O/networklayer/manetrouting/aodv/aodv-uu/routing_table.o: networklayer/manetrouting/aodv/aodv-uu/routing_table.cc \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/nl.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rrep.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/routing_table.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_neighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_socket.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_hello.h
$O/networklayer/manetrouting/aodv/aodv-uu/seek_list.o: networklayer/manetrouting/aodv/aodv-uu/seek_list.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/params.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/aodv/aodv-uu/seek_list.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h
$O/networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.o: networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.cc \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/timer_queue_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/params.h \
  networklayer/manetrouting/aodv/aodv-uu/debug_aodv.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/aodv/aodv-uu/defs_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rreq.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/routing_table.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_socket.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_msg_struct.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/list.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_hello.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../packet_queue_omnet.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rerr.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv_uu_omnet.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/timer_queue_aodv.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/debug_aodv.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_neighbor.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_timeout.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/aodv_rrep.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/seek_list.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/aodv/aodv-uu/../aodv-uu/locality.h
$O/networklayer/manetrouting/base/ManetRoutingBase.o: networklayer/manetrouting/base/ManetRoutingBase.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  linklayer/contract/MACAddress.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/udp/UDPPacket.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/manetrouting/base/int128.o: networklayer/manetrouting/base/int128.cc \
  networklayer/manetrouting/base/int128.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/manetrouting/base/uint128.o: networklayer/manetrouting/base/uint128.cc \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h
$O/networklayer/manetrouting/dsdv/DSDV_2.o: networklayer/manetrouting/dsdv/DSDV_2.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/manetrouting/dsdv/DSDVhello_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsdv/DSDV_2.h
$O/networklayer/manetrouting/dsdv/DSDVhello_m.o: networklayer/manetrouting/dsdv/DSDVhello_m.cc \
  networklayer/manetrouting/dsdv/DSDVhello_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ICMP.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/ip.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Blackboard.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/ip.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/Blackboard.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/ip.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-dev.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/neigh.o: networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
  networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
  networklayer/manetrouting/dsr/dsr-uu/timer.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
  base/ProtocolMap.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dsr/dsr-uu/tbl.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr.h \
  base/INETDefs.h \
  networklayer/manetrouting/dsr/dsr-uu/ns-agent.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dsr/dsr-uu/neigh.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
  networklayer/common/InterfaceEntry.h \
  base/Blackboard.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/ip.h \
  networklayer/manetrouting/base/compatibility_dsr.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
  networklayer/manetrouting/dsr/dsr-uu/dsr_list.h
$O/networklayer/manetrouting/dymo/dymo_msg_struct.o: networklayer/manetrouting/dymo/dymo_msg_struct.cc \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h
$O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/ipv4/ICMP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h
$O/networklayer/manetrouting/dymo/dymo_um_omnet.o: networklayer/manetrouting/dymo/dymo_um_omnet.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  experimental/linklayer/ieee80211/mgmt/LWMPLSPacket_m.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymo_um_omnet.h \
  networklayer/ipv4/ControlManetRouting.h \
  networklayer/ipv4/ICMP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/udp/UDPPacket.h \
  experimental/linklayer/contract/MeshControlInfo_m.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  linklayer/ieee80211/mac/Ieee80211Frame_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h
$O/networklayer/manetrouting/dymo/dymoum/blacklist.o: networklayer/manetrouting/dymo/dymoum/blacklist.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o: networklayer/manetrouting/dymo/dymoum/debug_dymo.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_re.o: networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  experimental/linklayer/contract/MeshControlInfo_m.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
  networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/manetrouting/dymo/dymoum/blacklist.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo/dymoum/rtable.o: networklayer/manetrouting/dymo/dymoum/rtable.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/dymo_netlink.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/manetrouting/dymo/dymoum/k_route.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo/dymoum/rtable.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h \
  networklayer/manetrouting/dymo/dymoum/dymo_timeout.h
$O/networklayer/manetrouting/dymo/dymoum/timer_queue.o: networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_timeout.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_um_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_packet_queue_omnet.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_socket.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/timer_queue.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_re.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_hello.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_uerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_nb.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_generic.h \
  base/INETDefs.h \
  networklayer/manetrouting/dymo/dymoum/timer_queue.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/debug_dymo.h \
  networklayer/ipv4/ICMP.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dymo_rerr.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/pending_rreq.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/icmp_socket.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/blacklist.h \
  networklayer/manetrouting/dymo/dymoum/dlist.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo/dymoum/../dymo_msg_struct.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/dymo/dymoum/../dymoum/dlist.h
$O/networklayer/manetrouting/dymo_fau/DYMO.o: networklayer/manetrouting/dymo_fau/DYMO.cc \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/ProtocolMap.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/ipv4/IP.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/ICMP.h \
  transport/contract/UDPSocket.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/udp/UDPPacket.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  base/QueueBase.h \
  base/ProtocolMap.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/ipv4/IP.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMP.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h
$O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/contract/IPAddress.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o: networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.cc \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o: networklayer/manetrouting/dymo_fau/DYMO_Packet_m.cc \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o: networklayer/manetrouting/dymo_fau/DYMO_RERR_m.cc \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o: networklayer/manetrouting/dymo_fau/DYMO_RM_m.cc \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o: networklayer/manetrouting/dymo_fau/DYMO_RREP_m.cc \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o: networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.cc \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/common/InterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IP.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/ICMP.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/common/InterfaceTable.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IP.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/ICMP.h \
  base/AbstractQueue.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/dymo_fau/DYMO.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o: networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.cc \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  base/QueueBase.h \
  base/ProtocolMap.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/ipv4/IP.h \
  networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/ipv4/ICMP.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
  base/ReassemblyBuffer.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
  networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o: networklayer/manetrouting/dymo_fau/DYMO_UERR_m.cc \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h
$O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
  networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
  networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
  networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
  networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
  networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h
$O/networklayer/manetrouting/manager/ManetManager.o: networklayer/manetrouting/manager/ManetManager.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/manager/ManetManager.h \
  base/INETDefs.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddress.h
$O/networklayer/manetrouting/olsr/OLSR.o: networklayer/manetrouting/olsr/OLSR.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/udp/UDPPacket.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/olsr/OLSR_state.h
$O/networklayer/manetrouting/olsr/OLSR_ETX.o: networklayer/manetrouting/olsr/OLSR_ETX.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  transport/udp/UDPPacket_m.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/udp/UDPPacket.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/manetrouting/olsr/OLSR_state.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o: networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.cc \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSR_state.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_state.o: networklayer/manetrouting/olsr/OLSR_ETX_state.cc \
  networklayer/manetrouting/olsr/OLSR_ETX.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/manetrouting/olsr/OLSR.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/manetrouting/olsr/OLSR_ETX_state.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSR_state.h
$O/networklayer/manetrouting/olsr/OLSR_rtable.o: networklayer/manetrouting/olsr/OLSR_rtable.cc \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSR_state.h
$O/networklayer/manetrouting/olsr/OLSR_state.o: networklayer/manetrouting/olsr/OLSR_state.cc \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/olsr/OLSR_rtable.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/manetrouting/base/compatibility.h \
  networklayer/manetrouting/olsr/OLSR_repositories.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/manetrouting/olsr/OLSR.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/manetrouting/base/ManetRoutingBase.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/manetrouting/olsr/OLSR_state.h
$O/networklayer/manetrouting/olsr/OLSRpkt_m.o: networklayer/manetrouting/olsr/OLSRpkt_m.cc \
  networklayer/manetrouting/olsr/OLSRpkt_m.h \
  networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
  linklayer/contract/MACAddress.h \
  networklayer/manetrouting/base/uint128.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h
$O/networklayer/mpls/LIBTable.o: networklayer/mpls/LIBTable.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/mpls/ConstType.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/mpls/LIBTable.h \
  base/ModuleAccess.h \
  util/XMLUtils.h \
  networklayer/contract/IPAddress.h
$O/networklayer/mpls/MPLS.o: networklayer/mpls/MPLS.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/rsvp_te/Utils.h \
  transport/contract/TCPSocket.h \
  networklayer/mpls/MPLSPacket.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  transport/contract/TCPSocketMap.h \
  linklayer/contract/MACAddress.h \
  networklayer/mpls/ConstType.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  transport/contract/UDPSocket.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ldp/LDP.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/mpls/LIBTable.h \
  networklayer/mpls/IClassifier.h \
  base/ModuleAccess.h \
  networklayer/mpls/MPLS.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ldp/LDPPacket_m.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/mpls/MPLSPacket.o: networklayer/mpls/MPLSPacket.cc \
  networklayer/mpls/MPLSPacket.h \
  base/INETDefs.h
$O/networklayer/ospfv2/OSPFPacket_m.o: networklayer/ospfv2/OSPFPacket_m.cc \
  networklayer/ospfv2/OSPFPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ospfv2/OSPFRouting.o: networklayer/ospfv2/OSPFRouting.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/ospfv2/OSPFRouting.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/OSPFTimer_m.o: networklayer/ospfv2/OSPFTimer_m.cc \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFTimer_m.h
$O/networklayer/ospfv2/interface/OSPFInterface.o: networklayer/ospfv2/interface/OSPFInterface.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/interface/OSPFInterfaceState.o: networklayer/ospfv2/interface/OSPFInterfaceState.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/interface/OSPFInterfaceState.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/messagehandler/HelloHandler.o: networklayer/ospfv2/messagehandler/HelloHandler.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/messagehandler/MessageHandler.o: networklayer/ospfv2/messagehandler/MessageHandler.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/neighbor/OSPFNeighbor.o: networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborState.o: networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/NotifierConsts.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighborState.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/router/ASExternalLSA.o: networklayer/ospfv2/router/ASExternalLSA.cc \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ospfv2/router/NetworkLSA.o: networklayer/ospfv2/router/NetworkLSA.cc \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ospfv2/router/OSPFArea.o: networklayer/ospfv2/router/OSPFArea.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/router/OSPFRouter.o: networklayer/ospfv2/router/OSPFRouter.cc \
  networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
  networklayer/ospfv2/interface/OSPFInterface.h \
  networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
  networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
  networklayer/ospfv2/messagehandler/IMessageHandler.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/OSPFRouter.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/ospfv2/neighbor/OSPFNeighbor.h \
  networklayer/ospfv2/messagehandler/HelloHandler.h \
  linklayer/contract/MACAddress.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/ospfv2/OSPFTimer_m.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ospfv2/messagehandler/MessageHandler.h \
  networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
  networklayer/contract/IPAddress.h \
  networklayer/ospfv2/router/OSPFArea.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ospfv2/router/RouterLSA.o: networklayer/ospfv2/router/RouterLSA.cc \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ospfv2/router/SummaryLSA.o: networklayer/ospfv2/router/SummaryLSA.cc \
  networklayer/ospfv2/OSPFPacket_m.h \
  networklayer/ospfv2/router/LSA.h \
  networklayer/ospfv2/router/OSPFcommon.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/queue/BasicDSCPClassifier.o: networklayer/queue/BasicDSCPClassifier.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/queue/IQoSClassifier.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/queue/BasicDSCPClassifier.h
$O/networklayer/queue/DropTailQoSQueue.o: networklayer/queue/DropTailQoSQueue.cc \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  networklayer/queue/IQoSClassifier.h \
  base/PassiveQueueBase.h \
  networklayer/queue/DropTailQoSQueue.h
$O/networklayer/queue/DropTailQueue.o: networklayer/queue/DropTailQueue.cc \
  base/IPassiveQueue.h \
  base/INETDefs.h \
  base/PassiveQueueBase.h \
  networklayer/queue/DropTailQueue.h
$O/networklayer/queue/REDQueue.o: networklayer/queue/REDQueue.cc \
  base/IPassiveQueue.h \
  networklayer/queue/REDQueue.h \
  base/INETDefs.h \
  base/PassiveQueueBase.h
$O/networklayer/rsvp_te/IntServ_m.o: networklayer/rsvp_te/IntServ_m.cc \
  networklayer/rsvp_te/IntServ_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/rsvp_te/RSVP.o: networklayer/rsvp_te/RSVP.cc \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/rsvp_te/Utils.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/rsvp_te/RSVP.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  base/IScriptable.h \
  linklayer/contract/MACAddress.h \
  networklayer/mpls/ConstType.h \
  networklayer/common/IInterfaceTable.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  base/INETDefs.h \
  networklayer/rsvp_te/RSVPPathMsg.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPv6Address.h \
  util/common.h \
  networklayer/ted/TEDAccess.h \
  networklayer/contract/IPAddressResolver.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/mpls/LIBTable.h \
  networklayer/mpls/IClassifier.h \
  base/ModuleAccess.h \
  networklayer/ted/TED.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  util/XMLUtils.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ted/TED_m.h \
  networklayer/rsvp_te/RSVPPacket.h \
  base/INotifiable.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/rsvp_te/IRSVPClassifier.h
$O/networklayer/rsvp_te/RSVPHello_m.o: networklayer/rsvp_te/RSVPHello_m.cc \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  base/INETDefs.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/contract/IPAddress.h
$O/networklayer/rsvp_te/RSVPPacket_m.o: networklayer/rsvp_te/RSVPPacket_m.cc \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/networklayer/rsvp_te/RSVPPathMsg_m.o: networklayer/rsvp_te/RSVPPathMsg_m.cc \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  base/INETDefs.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/contract/IPAddress.h
$O/networklayer/rsvp_te/RSVPResvMsg_m.o: networklayer/rsvp_te/RSVPResvMsg_m.cc \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  base/INETDefs.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/contract/IPAddress.h
$O/networklayer/rsvp_te/SignallingMsg_m.o: networklayer/rsvp_te/SignallingMsg_m.cc \
  networklayer/rsvp_te/IntServ_m.h \
  base/INETDefs.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPAddress.h \
  networklayer/rsvp_te/SignallingMsg_m.h
$O/networklayer/rsvp_te/SimpleClassifier.o: networklayer/rsvp_te/SimpleClassifier.cc \
  networklayer/rsvp_te/RSVPAccess.h \
  networklayer/rsvp_te/RSVPHello_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/mpls/LIBTableAccess.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/rsvp_te/SimpleClassifier.h \
  networklayer/rsvp_te/RSVPHelloMsg.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/rsvp_te/RSVP.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/rsvp_te/RSVPPacket_m.h \
  base/IScriptable.h \
  networklayer/mpls/ConstType.h \
  networklayer/rsvp_te/RSVPResvMsg_m.h \
  base/INETDefs.h \
  networklayer/rsvp_te/RSVPPathMsg.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/ipv4/RoutingTableAccess.h \
  networklayer/mpls/IClassifier.h \
  networklayer/mpls/LIBTable.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  util/XMLUtils.h \
  base/INotifiable.h \
  networklayer/rsvp_te/RSVPPacket.h \
  networklayer/rsvp_te/RSVPPathMsg_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/rsvp_te/SignallingMsg_m.h \
  networklayer/rsvp_te/RSVPResvMsg.h \
  networklayer/rsvp_te/IRSVPClassifier.h
$O/networklayer/rsvp_te/Utils.o: networklayer/rsvp_te/Utils.cc \
  networklayer/rsvp_te/Utils.h \
  networklayer/rsvp_te/IntServ_m.h \
  base/INETDefs.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ted/LinkStatePacket_m.o: networklayer/ted/LinkStatePacket_m.cc \
  networklayer/ted/LinkStatePacket_m.h \
  base/INETDefs.h \
  networklayer/ted/TED_m.h \
  networklayer/contract/IPAddress.h
$O/networklayer/ted/LinkStateRouting.o: networklayer/ted/LinkStateRouting.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ted/LinkStateRouting.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  networklayer/ted/LinkStatePacket_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/ted/TEDAccess.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/ted/TED.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/ted/TED_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ted/TED.o: networklayer/ted/TED.cc \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/rsvp_te/IntServ_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/rsvp_te/IntServ.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  networklayer/ted/TED.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/ted/TED_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/networklayer/ted/TED_m.o: networklayer/ted/TED_m.cc \
  base/INETDefs.h \
  networklayer/ted/TED_m.h \
  networklayer/contract/IPAddress.h
$O/transport/contract/SCTPCommand_m.o: transport/contract/SCTPCommand_m.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/contract/SCTPSocket.o: transport/contract/SCTPSocket.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  transport/contract/SCTPCommand.h \
  transport/sctp/SCTPQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  transport/contract/SCTPSocket.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/contract/TCPCommand_m.o: transport/contract/TCPCommand_m.cc \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/contract/TCPSocket.o: transport/contract/TCPSocket.cc \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/contract/TCPSocketMap.o: transport/contract/TCPSocketMap.cc \
  transport/contract/TCPSocket.h \
  transport/contract/TCPCommand_m.h \
  transport/contract/TCPSocketMap.h \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/contract/UDPControlInfo_m.o: transport/contract/UDPControlInfo_m.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/contract/UDPSocket.o: transport/contract/UDPSocket.cc \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/rtp/RTCP.o: transport/rtp/RTCP.cc \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/reports.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTCP.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/sdes.h \
  base/INETDefs.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPSenderInfo.h \
  transport/rtp/RTPReceiverInfo.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/rtp/RTCPPacket.o: transport/rtp/RTCPPacket.cc \
  transport/rtp/RTCPPacket.h \
  transport/rtp/reports.h \
  base/INETDefs.h \
  transport/rtp/sdes.h \
  networklayer/contract/IPAddress.h
$O/transport/rtp/RTP.o: transport/rtp/RTP.cc \
  transport/rtp/RTPProfile.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h \
  transport/rtp/RTP.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPInterfacePacket.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/rtp/RTPInnerPacket.o: transport/rtp/RTPInnerPacket.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h \
  transport/rtp/RTPInnerPacket.h \
  networklayer/contract/IPAddress.h
$O/transport/rtp/RTPInterfacePacket.o: transport/rtp/RTPInterfacePacket.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h \
  transport/rtp/RTPInterfacePacket.h
$O/transport/rtp/RTPPacket.o: transport/rtp/RTPPacket.cc \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h
$O/transport/rtp/RTPParticipantInfo.o: transport/rtp/RTPParticipantInfo.cc \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/reports.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  transport/rtp/sdes.h \
  networklayer/contract/IPAddress.h
$O/transport/rtp/RTPPayloadReceiver.o: transport/rtp/RTPPayloadReceiver.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPPayloadReceiver.h \
  networklayer/contract/IPAddress.h
$O/transport/rtp/RTPPayloadSender.o: transport/rtp/RTPPayloadSender.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/RTPInnerPacket.h \
  networklayer/contract/IPAddress.h
$O/transport/rtp/RTPProfile.o: transport/rtp/RTPProfile.cc \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTPProfile.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/reports.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  transport/rtp/sdes.h \
  base/INETDefs.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/RTPPayloadReceiver.h \
  networklayer/contract/IPAddress.h
$O/transport/rtp/RTPReceiverInfo.o: transport/rtp/RTPReceiverInfo.cc \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/reports.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPReceiverInfo.h \
  networklayer/contract/IPAddress.h
$O/transport/rtp/RTPSenderControlMessage_m.o: transport/rtp/RTPSenderControlMessage_m.cc \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h
$O/transport/rtp/RTPSenderInfo.o: transport/rtp/RTPSenderInfo.cc \
  transport/rtp/RTCPPacket.h \
  transport/rtp/RTPParticipantInfo.h \
  transport/rtp/reports.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  transport/rtp/sdes.h \
  transport/rtp/RTPSenderInfo.h \
  networklayer/contract/IPAddress.h
$O/transport/rtp/RTPSenderStatusMessage_m.o: transport/rtp/RTPSenderStatusMessage_m.cc \
  transport/rtp/RTPSenderStatusMessage_m.h \
  base/INETDefs.h
$O/transport/rtp/reports.o: transport/rtp/reports.cc \
  transport/rtp/reports.h \
  base/INETDefs.h \
  networklayer/contract/IPAddress.h
$O/transport/rtp/sdes.o: transport/rtp/sdes.cc \
  base/INETDefs.h \
  transport/rtp/sdes.h
$O/transport/rtp/profiles/avprofile/RTPAVProfile.o: transport/rtp/profiles/avprofile/RTPAVProfile.cc \
  transport/rtp/RTPProfile.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/profiles/avprofile/RTPAVProfile.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h \
  transport/rtp/RTPInnerPacket.h \
  networklayer/contract/IPAddress.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  transport/rtp/RTPPacket.h \
  base/INETDefs.h \
  transport/rtp/RTPPayloadReceiver.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  transport/rtp/RTPSenderStatusMessage_m.h \
  transport/rtp/RTPPacket.h \
  transport/rtp/RTPSenderControlMessage_m.h \
  base/INETDefs.h \
  transport/rtp/RTPPayloadSender.h \
  transport/rtp/RTPInnerPacket.h \
  transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
  networklayer/contract/IPAddress.h
$O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o: transport/rtp/profiles/avprofile/RTPMpegPacket_m.cc \
  transport/rtp/profiles/avprofile/RTPMpegPacket_m.h \
  base/INETDefs.h
$O/transport/sctp/SCTP.o: transport/sctp/SCTP.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPAlg.o: transport/sctp/SCTPAlg.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  transport/sctp/SCTPAlg.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPAssociationBase.o: transport/sctp/SCTPAssociationBase.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/ipv4/IPRoute.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPAssociationEventProc.o: transport/sctp/SCTPAssociationEventProc.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/ipv4/IPRoute.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPAssociationRcvMessage.o: transport/sctp/SCTPAssociationRcvMessage.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/ipv4/IPRoute.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPAssociationUtil.o: transport/sctp/SCTPAssociationUtil.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  transport/contract/SCTPCommand_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  transport/sctp/SCTPAlgorithm.h \
  networklayer/contract/IPv6ControlInfo.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  transport/contract/SCTPCommand.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  networklayer/ipv4/IPv4InterfaceData.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  networklayer/ipv6/IPv6InterfaceData.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPCCFunctions.o: transport/sctp/SCTPCCFunctions.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPMessage.o: transport/sctp/SCTPMessage.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPMessage_m.o: transport/sctp/SCTPMessage_m.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/sctp/SCTPQueue.o: transport/sctp/SCTPQueue.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPReceiveStream.o: transport/sctp/SCTPReceiveStream.cc \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPReceiveStream.h
$O/transport/sctp/SCTPSSFunctions.o: transport/sctp/SCTPSSFunctions.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  transport/sctp/SCTPQueue.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h
$O/transport/sctp/SCTPSendStream.o: transport/sctp/SCTPSendStream.cc \
  transport/sctp/SCTPAssociation.h \
  transport/sctp/SCTPQueue.h \
  transport/sctp/SCTPSendStream.h
$O/transport/tcp/TCP.o: transport/tcp/TCP.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/TCPConnectionBase.o: transport/tcp/TCPConnectionBase.cc \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPSendQueue.h
$O/transport/tcp/TCPConnectionEventProc.o: transport/tcp/TCPConnectionEventProc.cc \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPSendQueue.h
$O/transport/tcp/TCPConnectionRcvSegment.o: transport/tcp/TCPConnectionRcvSegment.cc \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPSendQueue.h
$O/transport/tcp/TCPConnectionUtil.o: transport/tcp/TCPConnectionUtil.cc \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/contract/TCPCommand_m.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPSendQueue.h
$O/transport/tcp/TCPSegment.o: transport/tcp/TCPSegment.cc \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h
$O/transport/tcp/TCPSegment_m.o: transport/tcp/TCPSegment_m.cc \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h
$O/transport/tcp/flavours/DumbTCP.o: transport/tcp/flavours/DumbTCP.cc \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/DumbTCP.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPBaseAlg.o: transport/tcp/flavours/TCPBaseAlg.cc \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPNoCongestionControl.o: transport/tcp/flavours/TCPNoCongestionControl.cc \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/flavours/TCPNoCongestionControl.h
$O/transport/tcp/flavours/TCPReno.o: transport/tcp/flavours/TCPReno.cc \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  transport/tcp/flavours/TCPReno.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPTahoe.o: transport/tcp/flavours/TCPTahoe.cc \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  transport/tcp/flavours/TCPTahoe.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/flavours/TCPTahoeRenoFamily.o: transport/tcp/flavours/TCPTahoeRenoFamily.cc \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  transport/tcp/TCPAlgorithm.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/flavours/TCPBaseAlg.h \
  transport/tcp/TCP.h \
  transport/tcp/flavours/TCPTahoeRenoFamily.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/queues/TCPMsgBasedRcvQueue.o: transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  transport/tcp/queues/TCPMsgBasedRcvQueue.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/queues/TCPMsgBasedSendQueue.o: transport/tcp/queues/TCPMsgBasedSendQueue.cc \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPSendQueue.h \
  transport/tcp/queues/TCPMsgBasedSendQueue.h
$O/transport/tcp/queues/TCPVirtualDataRcvQueue.o: transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
  transport/tcp/queues/TCPVirtualDataRcvQueue.h \
  transport/tcp/TCPReceiveQueue.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/tcp/queues/TCPVirtualDataSendQueue.o: transport/tcp/queues/TCPVirtualDataSendQueue.cc \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  base/INETDefs.h \
  transport/tcp/TCPConnection.h \
  networklayer/contract/IPv6Address.h \
  transport/tcp/queues/TCPVirtualDataSendQueue.h \
  transport/tcp/TCP.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  transport/tcp/TCPSendQueue.h
$O/transport/udp/UDP.o: transport/udp/UDP.cc \
  networklayer/ipv6/IPv6Datagram.h \
  networklayer/contract/IPv6ControlInfo_m.h \
  networklayer/ipv4/ICMPAccess.h \
  transport/udp/UDP.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/icmpv6/ICMPv6Access.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/contract/IPv6ControlInfo.h \
  linklayer/contract/MACAddress.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/ipv4/ICMP.h \
  networklayer/icmpv6/ICMPv6Message_m.h \
  networklayer/contract/IPv6Address.h \
  transport/contract/UDPControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  transport/udp/UDPPacket.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/icmpv6/ICMPv6.h \
  networklayer/common/InterfaceToken.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  networklayer/ipv6/RoutingTable6Access.h \
  networklayer/ipv6/RoutingTable6.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/transport/udp/UDPPacket_m.o: transport/udp/UDPPacket_m.cc \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h
$O/underTest/applications/TrafficGenerator_Erlangen/TrafGen.o: underTest/applications/TrafficGenerator_Erlangen/TrafGen.cc \
  underTest/applications/TrafficGenerator_Erlangen/TrafGen.h
$O/underTest/applications/TrafficGenerator_Erlangen/WiMAXQoSTrafficGenerator.o: underTest/applications/TrafficGenerator_Erlangen/WiMAXQoSTrafficGenerator.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  underTest/applications/TrafficGenerator_Erlangen/TrafGen.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  linklayer/contract/Ieee802Ctrl_m.h \
  underTest/applications/TrafficGenerator_Erlangen/WiMAXQoSTrafficGenerator.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/mfcore/SnrList.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h
$O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneAP.o: underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneAP.cc \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneAP.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/mfcore/SnrList.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h
$O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.o: underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.cc \
  world/ChannelAccess.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/BasicModule.h \
  util/FWMath.h \
  underTest/linklayer/radio/Ieee80216Radio.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.h \
  base/ModuleAccess.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  base/NotifierConsts.h \
  linklayer/radio/AbstractRadio.h \
  underTest/linklayer/radio/Ieee80216Consts.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  base/INotifiable.h \
  underTest/linklayer/Ieee80216/ControlPlane/SnrList.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/mfcore/AirFrame_m.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/radio/IRadioModel.h \
  linklayer/radio/IReceptionModel.h \
  underTest/linklayer/radio/WiMAXPathLossReceptionModel.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseAP.o: underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseAP.cc \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneAP.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseAP.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/mfcore/SnrList.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h
$O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseMS.o: underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBaseMS.cc
$O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.o: underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.cc \
  world/ChannelAccess.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  util/FWMath.h \
  base/BasicModule.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.h \
  underTest/linklayer/radio/Ieee80216Radio.h \
  linklayer/contract/RadioState.h \
  networklayer/common/IInterfaceTable.h \
  underTest/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  base/NotifierConsts.h \
  linklayer/radio/AbstractRadio.h \
  underTest/linklayer/radio/Ieee80216Consts.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/FSMA.h \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/SnrList.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  networklayer/common/InterfaceTableAccess.h \
  underTest/linklayer/radio/WiMAXPathLossReceptionModel.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/mfcore/SnrList.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  underTest/linklayer/Ieee80216/ControlPlane/ModulationsConsts.h
$O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneMS.o: underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneMS.cc \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneMS.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  linklayer/mfcore/SnrList.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h
$O/underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneMobilestation.o: underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneMobilestation.cc \
  underTest/linklayer/Ieee80216/ControlPlane/SnrList.h \
  underTest/linklayer/Ieee80216/ControlPlane/ModulationsConsts.h
$O/underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.o: underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.cc \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.o: underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.cc \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/Ieee80216/Mac/CommonPartSublayerDown.o: underTest/linklayer/Ieee80216/Mac/CommonPartSublayerDown.cc \
  underTest/linklayer/Ieee80216/Mac/CommonPartSublayerDown.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.h
$O/underTest/linklayer/Ieee80216/Mac/CommonPartSublayerUp.o: underTest/linklayer/Ieee80216/Mac/CommonPartSublayerUp.cc \
  underTest/linklayer/Ieee80216/Mac/CommonPartSublayerUp.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.h
$O/underTest/linklayer/Ieee80216/Mac/ConvergenceSublayerDown.o: underTest/linklayer/Ieee80216/Mac/ConvergenceSublayerDown.cc \
  base/INETDefs.h \
  underTest/linklayer/Ieee80216/Mac/ConvergenceSublayerDown.h \
  linklayer/contract/PhyControlInfo_m.h
$O/underTest/linklayer/Ieee80216/Mac/ConvergenceSublayerUp.o: underTest/linklayer/Ieee80216/Mac/ConvergenceSublayerUp.cc \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/Mac/ConvergenceSublayerUp.h
$O/underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.o: underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.cc \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h
$O/underTest/linklayer/Ieee80216/Mac/SecuritySublayerDown.o: underTest/linklayer/Ieee80216/Mac/SecuritySublayerDown.cc \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/Mac/SecuritySublayerDown.h
$O/underTest/linklayer/Ieee80216/Mac/SecuritySublayerUp.o: underTest/linklayer/Ieee80216/Mac/SecuritySublayerUp.cc \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/Mac/SecuritySublayerUp.h
$O/underTest/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.o: underTest/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.cc \
  underTest/linklayer/Ieee80216/Mac/WiMAXRadioControl_m.h
$O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerAuthorizationModule.o: underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerAuthorizationModule.cc \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerAuthorizationModule.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerControlModule.o: underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerControlModule.cc \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerControlModule.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h
$O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerFragmentation.o: underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerFragmentation.cc \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerFragmentation.h
$O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerQoSAP.o: underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerQoSAP.cc \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerQoSAP.h \
  networklayer/common/InterfaceTableAccess.h
$O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.o: underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.cc \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPDatagram_m.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  networklayer/contract/IPAddress.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.o: underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.cc \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.o: underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.cc \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.o: underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.cc \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerControlModule.o: underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerControlModule.cc \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  base/ProtocolMap.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/IP.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerControlModule.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/ipv4/ICMP.h \
  base/AbstractQueue.h \
  networklayer/contract/IPv6Address.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceToken.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  networklayer/contract/IPAddress.h \
  networklayer/ipv4/IPFragBuf.h \
  networklayer/common/InterfaceTableAccess.h \
  linklayer/mfcore/SnrList.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h
$O/underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerHeaderCompression.o: underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerHeaderCompression.cc \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerHeaderCompression.h
$O/underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerTrafficClassification.o: underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerTrafficClassification.cc \
  networklayer/ipv4/ICMPAccess.h \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  world/ChannelAccess.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  base/QueueBase.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  base/ProtocolMap.h \
  linklayer/contract/MACAddress.h \
  networklayer/ipv4/ControlManetRouting_m.h \
  networklayer/ipv4/IP.h \
  util/FWMath.h \
  base/BasicModule.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/ConvergenceSublayerTrafficClassification.h \
  underTest/linklayer/radio/Ieee80216Radio.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.h \
  linklayer/contract/RadioState.h \
  networklayer/manetrouting/base/uint128.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  underTest/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.h \
  networklayer/ipv4/IPDatagram.h \
  base/NotificationBoard.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.h \
  networklayer/ipv4/ICMP.h \
  base/AbstractQueue.h \
  linklayer/contract/PhyControlInfo_m.h \
  networklayer/contract/IPv6Address.h \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.h \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneMobilestation.h \
  networklayer/common/InterfaceEntry.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ReassemblyBuffer.h \
  base/ModuleAccess.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  base/NotifierConsts.h \
  linklayer/radio/AbstractRadio.h \
  underTest/linklayer/radio/Ieee80216Consts.h \
  networklayer/ipv4/ICMPMessage.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  base/INotifiable.h \
  base/FSMA.h \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  networklayer/contract/IPAddress.h \
  underTest/linklayer/Ieee80216/ControlPlane/SnrList.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/mfcore/AirFrame_m.h \
  networklayer/ipv4/IPFragBuf.h \
  linklayer/radio/IRadioModel.h \
  networklayer/common/InterfaceTableAccess.h \
  underTest/linklayer/radio/WiMAXPathLossReceptionModel.h \
  linklayer/radio/IReceptionModel.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.o: underTest/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.cc \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/INETDefs.h \
  underTest/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/Ieee80216/MACSublayer/Receiver/ConvergenceSublayerReceiver.o: underTest/linklayer/Ieee80216/MACSublayer/Receiver/ConvergenceSublayerReceiver.cc \
  underTest/linklayer/Ieee80216/MACSublayer/Receiver/ConvergenceSublayerReceiver.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h
$O/underTest/linklayer/Ieee80216/MACSublayer/Receiver/SecuritySublayerReceiver.o: underTest/linklayer/Ieee80216/MACSublayer/Receiver/SecuritySublayerReceiver.cc \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/MACSublayer/Receiver/SecuritySublayerReceiver.h
$O/underTest/linklayer/Ieee80216/MACSublayer/Transceiver/CommonPartSublayerTransceiver.o: underTest/linklayer/Ieee80216/MACSublayer/Transceiver/CommonPartSublayerTransceiver.cc \
  world/ChannelAccess.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_MS.h \
  underTest/linklayer/Ieee80216/MACSublayer/Transceiver/CommonPartSublayerTransceiver.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  base/IPassiveQueue.h \
  util/FWMath.h \
  base/BasicModule.h \
  underTest/linklayer/radio/Ieee80216Radio.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerScheduling.h \
  linklayer/contract/RadioState.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  underTest/linklayer/Ieee80216/MACSublayer/Receiver/CommonPartSublayerReceiver.h \
  base/NotificationBoard.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/CommonPartSublayerServiceFlows_BS.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBase.h \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneMobilestation.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216Primitives_m.h \
  base/NotifierConsts.h \
  linklayer/radio/AbstractRadio.h \
  underTest/linklayer/radio/Ieee80216Consts.h \
  underTest/linklayer/Ieee80216/ControlPlane/Struct.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  base/FSMA.h \
  underTest/linklayer/Ieee80216/ControlPlane/ControlPlaneBasestation.h \
  underTest/linklayer/Ieee80216/ControlPlane/Ieee80216ManagementMessages_m.h \
  underTest/linklayer/Ieee80216/ControlPlane/SnrList.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  underTest/linklayer/radio/WiMAXPathLossReceptionModel.h \
  linklayer/radio/IReceptionModel.h \
  networklayer/common/InterfaceTableAccess.h \
  underTest/linklayer/Ieee80216/MACSublayer/QoS/global_enums.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/Ieee80216/MACSublayer/Transceiver/ConvergenceSublayerTransceiver.o: underTest/linklayer/Ieee80216/MACSublayer/Transceiver/ConvergenceSublayerTransceiver.cc \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h \
  underTest/linklayer/Ieee80216/MACSublayer/Transceiver/ConvergenceSublayerTransceiver.h
$O/underTest/linklayer/Ieee80216/MACSublayer/Transceiver/SecuritySublayerTransceiver.o: underTest/linklayer/Ieee80216/MACSublayer/Transceiver/SecuritySublayerTransceiver.cc \
  underTest/linklayer/Ieee80216/MACSublayer/Transceiver/SecuritySublayerTransceiver.h \
  base/INETDefs.h \
  linklayer/contract/PhyControlInfo_m.h
$O/underTest/linklayer/Ieee80216/phyLayer/decider/Decider80216.o: underTest/linklayer/Ieee80216/phyLayer/decider/Decider80216.cc \
  world/ChannelAccess.h \
  underTest/linklayer/Ieee80216/phyLayer/decider/Decider80216.h \
  linklayer/mfcore/BasicDecider.h \
  util/FWMath.h \
  base/BasicModule.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  linklayer/mfcore/SnrControlInfo_m.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  world/ChannelControl.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/radio/Ieee80216Radio.o: underTest/linklayer/radio/Ieee80216Radio.cc \
  world/ChannelAccess.h \
  underTest/linklayer/Ieee80216/Mac/Ieee80216MacHeader_m.h \
  linklayer/contract/MACAddress.h \
  util/FWMath.h \
  base/BasicModule.h \
  underTest/linklayer/radio/Ieee80216Radio.h \
  linklayer/contract/RadioState.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  linklayer/radio/AbstractRadio.h \
  underTest/linklayer/radio/Ieee80216Consts.h \
  base/INotifiable.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  underTest/linklayer/radio/WiMAXPathLossReceptionModel.h \
  linklayer/radio/IReceptionModel.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/radio/Ieee80216RadioModel.o: underTest/linklayer/radio/Ieee80216RadioModel.cc \
  underTest/linklayer/radio/Ieee80216RadioModel.h \
  linklayer/ieee80211/mac/Ieee80211Consts.h \
  util/FWMath.h \
  base/INETDefs.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  linklayer/radio/IRadioModel.h \
  linklayer/mfcore/SnrList.h
$O/underTest/linklayer/radio/WiMAXPathLossReceptionModel.o: underTest/linklayer/radio/WiMAXPathLossReceptionModel.cc \
  util/FWMath.h \
  base/INETDefs.h \
  linklayer/radio/IReceptionModel.h \
  underTest/linklayer/radio/WiMAXPathLossReceptionModel.h
$O/underTest/transport/aki/aki.o: underTest/transport/aki/aki.cc \
  underTest/transport/aki/akiMsg_m.h \
  applications/udpapp/UDPBasicApp.h \
  underTest/transport/aki/AkiPacket_m.h \
  base/BasicModule.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  applications/udpapp/UDPAppBase.h \
  transport/contract/UDPSocket.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  transport/contract/UDPControlInfo_m.h \
  underTest/transport/aki/AkiControlInfo_m.h \
  applications/udpapp/UDPEchoApp.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  underTest/transport/aki/aki.h
$O/util/NAMTraceWriter.o: util/NAMTraceWriter.cc \
  linklayer/contract/TxNotifDetails.h \
  world/NAMTrace.h \
  linklayer/contract/MACAddress.h \
  networklayer/common/IInterfaceTable.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/common/InterfaceEntry.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  base/INotifiable.h \
  networklayer/common/InterfaceTableAccess.h \
  util/NAMTraceWriter.h
$O/util/TCPDump.o: util/TCPDump.cc \
  transport/sctp/SCTP.h \
  networklayer/ipv4/ICMPMessage_m.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  networklayer/ipv6/IPv6Datagram_m.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/ipv4/IPDatagram_m.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  linklayer/contract/MACAddress.h \
  transport/udp/UDPPacket_m.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  networklayer/ipv4/ICMPMessage.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  util/headerserializers/IPSerializer.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  util/TCPDump.h
$O/util/ThruputMeteringChannel.o: util/ThruputMeteringChannel.cc \
  util/ThruputMeteringChannel.h \
  base/INETDefs.h
$O/util/XMLUtils.o: util/XMLUtils.cc \
  base/INETDefs.h \
  networklayer/contract/IPv6Address.h \
  networklayer/contract/IPAddressResolver.h \
  util/XMLUtils.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h
$O/util/common.o: util/common.cc \
  networklayer/rsvp_te/IntServ_m.h \
  base/INETDefs.h \
  networklayer/rsvp_te/IntServ.h \
  util/common.h \
  networklayer/contract/IPAddress.h
$O/util/opp_utils.o: util/opp_utils.cc \
  util/opp_utils.h \
  base/INETDefs.h
$O/util/headerserializers/ICMPSerializer.o: util/headerserializers/ICMPSerializer.cc \
  networklayer/ipv4/ICMPMessage_m.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/headers/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  util/headerserializers/headers/bsdint.h \
  base/INETDefs.h \
  util/headerserializers/headers/ip_icmp.h \
  networklayer/ipv4/IPDatagram.h \
  applications/pingapp/PingPayload_m.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/ICMPSerializer.h \
  util/headerserializers/IPSerializer.h \
  util/headerserializers/headers/in.h \
  networklayer/contract/IPAddress.h \
  util/headerserializers/headers/ip.h
$O/util/headerserializers/IPSerializer.o: util/headerserializers/IPSerializer.cc \
  util/headerserializers/UDPSerializer.h \
  networklayer/ipv4/ICMPMessage_m.h \
  util/headerserializers/headers/tcp.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/headers/defs.h \
  networklayer/ipv4/IPDatagram_m.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  util/headerserializers/SCTPSerializer.h \
  util/headerserializers/headers/bsdint.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  networklayer/ipv4/IPDatagram.h \
  networklayer/contract/IPv6Address.h \
  util/headerserializers/TCPSerializer.h \
  transport/sctp/SCTPMessage_m.h \
  transport/udp/UDPPacket.h \
  util/headerserializers/headers/in_systm.h \
  transport/sctp/SCTPMessage.h \
  util/headerserializers/ICMPSerializer.h \
  util/headerserializers/IPSerializer.h \
  util/headerserializers/headers/in.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  util/headerserializers/headers/ip.h
$O/util/headerserializers/SCTPSerializer.o: util/headerserializers/SCTPSerializer.cc \
  transport/sctp/SCTP.h \
  transport/sctp/SCTPAssociation.h \
  networklayer/ipv4/IRoutingTable.h \
  networklayer/contract/IPProtocolId_m.h \
  util/headerserializers/headers/sctp.h \
  util/headerserializers/headers/defs.h \
  networklayer/ipv4/IPRoute.h \
  networklayer/contract/IPControlInfo_m.h \
  networklayer/common/InterfaceTable.h \
  linklayer/contract/MACAddress.h \
  util/headerserializers/SCTPSerializer.h \
  util/headerserializers/headers/bsdint.h \
  networklayer/common/IInterfaceTable.h \
  transport/sctp/SCTPQueue.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  networklayer/contract/IPv6Address.h \
  networklayer/common/InterfaceEntry.h \
  transport/sctp/SCTPMessage_m.h \
  networklayer/ipv4/RoutingTableAccess.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  util/headerserializers/headers/in_systm.h \
  networklayer/common/InterfaceToken.h \
  networklayer/contract/IPControlInfo.h \
  base/INotifiable.h \
  transport/sctp/SCTPMessage.h \
  transport/sctp/SCTPReceiveStream.h \
  transport/sctp/SCTPSendStream.h \
  networklayer/ipv4/RoutingTable.h \
  util/headerserializers/headers/in.h \
  networklayer/contract/IPAddress.h \
  networklayer/contract/IPvXAddress.h \
  networklayer/common/InterfaceTableAccess.h \
  util/headerserializers/headers/ip.h
$O/util/headerserializers/TCPSerializer.o: util/headerserializers/TCPSerializer.cc \
  util/headerserializers/headers/tcp.h \
  util/headerserializers/headers/defs.h \
  transport/tcp/TCPSegment.h \
  transport/tcp/TCPSegment_m.h \
  util/headerserializers/headers/bsdint.h \
  base/INETDefs.h \
  util/headerserializers/TCPSerializer.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/in.h
$O/util/headerserializers/UDPSerializer.o: util/headerserializers/UDPSerializer.cc \
  util/headerserializers/UDPSerializer.h \
  util/headerserializers/headers/defs.h \
  util/headerserializers/headers/udp.h \
  util/headerserializers/headers/bsdint.h \
  transport/udp/UDPPacket_m.h \
  base/INETDefs.h \
  transport/udp/UDPPacket.h \
  util/headerserializers/headers/in_systm.h \
  util/headerserializers/headers/in.h
$O/world/ChannelAccess.o: world/ChannelAccess.cc \
  world/ChannelAccess.h \
  util/FWMath.h \
  base/BasicModule.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  base/ModuleAccess.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  base/Coord.h \
  world/ChannelControl.h \
  linklayer/mfcore/AirFrame_m.h
$O/world/ChannelControl.o: world/ChannelControl.cc \
  util/FWMath.h \
  base/INETDefs.h \
  linklayer/mfcore/AirFrame_m.h \
  base/Coord.h \
  world/ChannelControl.h
$O/world/ChannelInstaller.o: world/ChannelInstaller.cc \
  base/INETDefs.h \
  world/ChannelInstaller.h
$O/world/NAMTrace.o: world/NAMTrace.cc \
  world/NAMTrace.h \
  base/INETDefs.h
$O/world/ScenarioManager.o: world/ScenarioManager.cc \
  base/IScriptable.h \
  world/ScenarioManager.h \
  base/INETDefs.h
$O/world/TraCIScenarioManager.o: world/TraCIScenarioManager.cc \
  base/BasicModule.h \
  util/FWMath.h \
  mobility/BasicMobility.h \
  base/INETDefs.h \
  base/NotificationBoard.h \
  mobility/TraCIMobility.h \
  base/ModuleAccess.h \
  world/TraCIConstants.h \
  base/NotifierConsts.h \
  base/INotifiable.h \
  world/ChannelControl.h \
  base/Coord.h \
  linklayer/mfcore/AirFrame_m.h \
  world/TraCIScenarioManager.h
