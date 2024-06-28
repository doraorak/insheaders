//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAssistantStellaBluetoothManagerDelegate_Protocol_h
#define FBAssistantStellaBluetoothManagerDelegate_Protocol_h
@import Foundation;

@protocol FBAssistantStellaBluetoothManagerDelegate <NSObject>
/* instance methods */
- (void)bluetoothManagerDidEstabishDeviceConnection:(id)connection;
- (void)bluetoothManager:(id)manager didDiscoverPeripheral:(id)peripheral;
- (void)bluetoothManager:(id)manager didConnectToPeripheral:(id)peripheral;
- (void)bluetoothManager:(id)manager didDisconnectFromPeripheral:(id)peripheral;
- (void)bluetoothManager:(id)manager didReceiveDataFromPeripheral:(id)peripheral;
- (void)bluetoothManager:(id)manager updatedPeripheral:(id)peripheral;
@end

#endif /* FBAssistantStellaBluetoothManagerDelegate_Protocol_h */