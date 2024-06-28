//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdMediaVPVDTracker_h
#define IGAdMediaVPVDTracker_h
@import Foundation;

#include "IGAdPlatformToolbox.h"
#include "NSObject-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol IGAdInsertionMediaTrackerDelegate;

@interface IGAdMediaVPVDTracker : NSObject<NSObject> {
  /* instance variables */
  NSMutableDictionary *_maxPercentVisibleDict;
  IGAdPlatformToolbox *_adPlatformToolbox;
}

@property (weak, nonatomic) NSObject<IGAdInsertionMediaTrackerDelegate> *mediaViewTrackerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAdPlatformToolbox:(id)toolbox;
- (void)viewpointEnteredActionForMediaView:(id)view itemType:(unsigned long long)type modelPK:(id)pk containerModelPK:(id)pk multiAdsType:(long long)type adPlatformMetadata:(id)metadata inventorySource:(id)source context:(id)context currentItemIndex:(long long)index;
- (void)viewpointUpdatedActionForMediaView:(id)view itemType:(unsigned long long)type modelPK:(id)pk containerModelPK:(id)pk multiAdsType:(long long)type adPlatformMetadata:(id)metadata inventorySource:(id)source context:(id)context currentItemIndex:(long long)index;
- (void)viewpointExitedActionForMediaView:(id)view itemType:(unsigned long long)type modelPK:(id)pk containerModelPK:(id)pk multiAdsType:(long long)type adPlatformMetadata:(id)metadata inventorySource:(id)source context:(id)context currentItemIndex:(long long)index;
- (void)resetTrackingStates;
- (void)resetAdSlotConsumptionStates;
@end

#endif /* IGAdMediaVPVDTracker_h */
