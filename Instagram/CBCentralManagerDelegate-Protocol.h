//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CBCentralManagerDelegate_Protocol_h
#define CBCentralManagerDelegate_Protocol_h
@import Foundation;

@protocol CBCentralManagerDelegate <NSObject>
/* instance methods */
- (void)centralManagerDidUpdateState:(id)state;
@optional
/* instance methods */
- (void)centralManager:(id)manager willRestoreState:(id)state;
- (void)centralManager:(id)manager didDiscoverPeripheral:(id)peripheral advertisementData:(id)data RSSI:(id)rssi;
- (void)centralManager:(id)manager didConnectPeripheral:(id)peripheral;
- (void)centralManager:(id)manager didFailToConnectPeripheral:(id)peripheral error:(id)error;
- (void)centralManager:(id)manager didDisconnectPeripheral:(id)peripheral error:(id)error;
- (void)centralManager:(id)manager didDisconnectPeripheral:(id)peripheral timestamp:(double)timestamp isReconnecting:(BOOL)reconnecting error:(id)error;
- (void)centralManager:(id)manager connectionEventDidOccur:(long long)occur forPeripheral:(id)peripheral;
- (void)centralManager:(id)manager didUpdateANCSAuthorizationForPeripheral:(id)peripheral;
@end

#endif /* CBCentralManagerDelegate_Protocol_h */