//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAssistantStellaBluetoothManager_h
#define FBAssistantStellaBluetoothManager_h
@import Foundation;

#include "CBCentralManagerDelegate-Protocol.h"
#include "CBPeripheralDelegate-Protocol.h"
#include "FBAssistantConsoleLogging-Protocol.h"
#include "FBAssistantStellaKeychainHandling-Protocol.h"

@class CBCentralManager, CBCharacteristic, CBPeripheral, CBUUID, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface FBAssistantStellaBluetoothManager : NSObject<CBCentralManagerDelegate, CBPeripheralDelegate> {
  /* instance variables */
  NSObject<FBAssistantConsoleLogging> *_logger;
  CBCentralManager *_cbCentralManager;
  CBUUID *_simulatorServiceId;
  CBUUID *_stellaServiceId;
  CBUUID *_stellaLegacyServiceId;
  CBUUID *_messageUuid;
  CBUUID *_busUuid;
  CBCharacteristic *_messageCharacteristic;
  NSObject<OS_dispatch_queue> *_queue;
  NSHashTable *_delegates;
  NSString *_sharedDeviceUuidStr;
  id /* block */ _powerOnBlock;
  BOOL _stateRestorationDisabled;
  NSObject<FBAssistantStellaKeychainHandling> *_keychainHandler;
}

@property (retain, nonatomic) CBPeripheral *peripheral;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLogger:(id)logger;
- (id)initWithLogger:(id)logger stateRestorationDisabled:(BOOL)disabled;
- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;
- (long long)state;
- (void)centralManagerDidUpdateState:(id)state;
- (void)centralManager:(id)manager didDiscoverPeripheral:(id)peripheral advertisementData:(id)data RSSI:(id)rssi;
- (void)centralManager:(id)manager didConnectPeripheral:(id)peripheral;
- (void)centralManager:(id)manager didFailToConnectPeripheral:(id)peripheral error:(id)error;
- (void)centralManager:(id)manager willRestoreState:(id)state;
- (void)centralManager:(id)manager didDisconnectPeripheral:(id)peripheral error:(id)error;
- (void)peripheralDidUpdateName:(id)name;
- (void)peripheral:(id)peripheral didDiscoverServices:(id)services;
- (void)peripheral:(id)peripheral didModifyServices:(id)services;
- (void)peripheral:(id)peripheral didDiscoverCharacteristicsForService:(id)service error:(id)error;
- (void)peripheral:(id)peripheral didUpdateNotificationStateForCharacteristic:(id)characteristic error:(id)error;
- (void)peripheral:(id)peripheral didUpdateValueForCharacteristic:(id)characteristic error:(id)error;
- (void)peripheral:(id)peripheral didWriteValueForCharacteristic:(id)characteristic error:(id)error;
@end

#endif /* FBAssistantStellaBluetoothManager_h */