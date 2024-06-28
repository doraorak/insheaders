//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FWALinkedAppNudger_h
#define FWALinkedAppNudger_h
@import Foundation;

#include "CBPeripheralManagerDelegate-Protocol.h"
#include "FBAssistantConsoleLogging-Protocol.h"

@class CBCharacteristic, CBMutableService, NSString;
@protocol FWALinkedAppPeripheralManager, OS_dispatch_queue;

@interface FWALinkedAppNudger : NSObject<CBPeripheralManagerDelegate>

@property (nonatomic) long long app;
@property (retain, nonatomic) CBCharacteristic *characteristic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<FBAssistantConsoleLogging> *logger;
@property (retain, nonatomic) NSObject<FWALinkedAppPeripheralManager> *peripheralManager;
@property (retain, nonatomic) CBMutableService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNudgableLinkedApp:(long long)app logger:(id)logger;
- (id)initWithNudgableLinkedApp:(long long)app logger:(id)logger peripheralManager:(id)manager;
- (BOOL)nudge;
- (void)linkedAppPeripheralManager:(id)manager didAddService:(id)service error:(id)error;
- (void)linkedAppPeripheralManagerDidUpdateState:(id)state;
- (void)linkedAppPeripheralManager:(id)manager didReceiveWriteRequests:(id)requests;
- (void)linkedAppPeripheralManager:(id)manager willRestoreState:(id)state;
- (void)peripheralManagerDidUpdateState:(id)state;
- (void)peripheralManager:(id)manager didAddService:(id)service error:(id)error;
- (void)peripheralManager:(id)manager didReceiveWriteRequests:(id)requests;
- (void)peripheralManager:(id)manager willRestoreState:(id)state;
- (void)cleanUp;
- (void)publishServiceIfNeeded;
@end

#endif /* FWALinkedAppNudger_h */
