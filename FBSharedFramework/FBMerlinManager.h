//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMerlinManager_h
#define FBMerlinManager_h
@import Foundation;

#include "FBMerlinManagerListener-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol {shared_ptr<facebook::merlin::Manager>="__ptr_"^{Manager}"__cntrl_"^{__shared_weak_count}};

@interface FBMerlinManager : NSObject {
  /* instance variables */
  NSString *_sessionId;
  BOOL _needDispatchSessionData;
  struct { BOOL isEnabled; long long trigger; NSString *origin; BOOL isFullscreenExitLoggingEnabled; BOOL shouldUseXplatCore; BOOL shouldLogPercentTwentyFive; BOOL shouldLogPercentFifty; BOOL shouldLogPercentSeventyFive; BOOL shouldLogPercentFiftyCoverage; BOOL shouldLogPercentHundredCoverage; BOOL isUnitTests; BOOL shouldCreateEntryForExitSignal; } _config;
  id /* block */ _extraMergerBlock;
  NSMutableDictionary *_itemToMergedTimeEntryMap;
  NSMutableDictionary *_itemToMergedExtraDataMap;
  NSMutableDictionary *_itemToContextMap;
  NSMutableDictionary *_itemToNestedTimeEntryMap;
  struct shared_ptr<facebook::merlin::Manager> { struct Manager *__ptr_; struct __shared_weak_count *__cntrl_; } _xplatManager;
}

@property (readonly, nonatomic) NSObject<FBMerlinManagerListener> *listener;

/* instance methods */
- (id)initWithConfig:(struct { BOOL x0; long long x1; id x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; })config listener:(id)listener extraDataMergerBlock:(id /* block */)block;
- (id)getOriginId;
- (id)getMerlinOutput:(id)output;
- (void)startSession;
- (void)stopSession;
- (void)process:(id)process;
- (void)_startSession;
- (void)_stopSession;
- (void)_processXplat:(id)xplat;
- (id)processInCurrentThread:(id)thread;
- (void)_notifyListener:(id)listener output:(id)output readyToLog:(BOOL)log;
- (void)notifyListener:(id)listener merlinOutput:(id)output readyToLog:(BOOL)log;
- (void)cleanup:(id)cleanup;
- (id)_newFBMerlinOutput:(id)output parentTimeEntries:(id)entries extra:(id)extra context:(id)context nestedTimeEntries:(id)entries;
- (void)_checkTimeElapsedAndNotifyIfNeeded:(id)needed;
- (id)_fakeExitInputForItem:(id)item;
- (void)_addExtraDataForItemId:(id)id extra:(id)extra;
@end

#endif /* FBMerlinManager_h */
