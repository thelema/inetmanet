// * **************************************************************************
// * file:        FreeSpaceModel.ned
// *
// * author:      Oliver Graute, Andreas Kuntz, Felix Schmidt-Eisenlohr
// *
// * copyright:	  (c) 2008 Institute of Telematics, University of Karlsruhe (TH)
// *
// * author:      Alfonso Ariza
// *
// * copyright:	  (c) 2009 Universidad de M�laga
// *
// *              This program is free software; you can redistribute it 
// *              and/or modify it under the terms of the GNU General Public 
// *              License as published by the Free Software Foundation; either
// *              version 2 of the License, or (at your option) any later 
// *              version.
// *              For further information see file COPYING 
// *              in the top level directory
// ***************************************************************************
// ***************************************************************************

package inet.linklayer.radio;
simple PropagationModel
{
    parameters:
	  double TransmissionAntennaGainIndB @unit("dB") = default(0dB);  // Transmission Antenna Gain 
      double ReceiveAntennaGainIndB @unit("dB") = default(0dB);       // Receive Antenna Gain
      double SystemLossFactor @unit("dB") = default(0dB);             // System Loss of Hardware 
      double sigma=default(1); // LogNormalShadowingModel
      double nak_m =default(1); // NakagamiModel
      double KdB = default(8); // RiceModel
      double  TransmiterAntennaHigh @unit("m") = default(1m);   // Transmitter Antenna High 
      double  ReceiverAntennaHigh   @unit("m") = default(1m);	// Receiver Antenna High
      
      double systemLoss = default(1); // Loss rate due to system 1 The system don't have power loss : numeric const, // 
      double ht @unit("m") = default(30m); // Two ray model : numeric const,
      double hr @unit("m") = default(10m); // two ray model : numeric const,
      double pathLossExponent = default(2);  // Shadow model
      double shadowingVariance= default(2);  // Shadow model
      int shadowingNumberofSamples = default(10); // Shadow model
      double receiverAntennaGain = default(1); // Multiplier factor 1 isotropic
         
      //parameters for RiceModel
      double K @unit("dB") = default(12dB); 
}