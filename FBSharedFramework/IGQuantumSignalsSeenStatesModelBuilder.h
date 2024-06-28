//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuantumSignalsSeenStatesModelBuilder_h
#define IGQuantumSignalsSeenStatesModelBuilder_h
@import Foundation;

#include "IGQuantumSignalsMetaIds.h"

@class NSDictionary, NSString;

@interface IGQuantumSignalsSeenStatesModelBuilder : NSObject {
  /* instance variables */
  NSString *_signalId;
  NSString *_containerModule;
  NSString *_inventorySource;
  long long _signalType;
  long long _surface;
  NSString *_itemId;
  IGQuantumSignalsMetaIds *_metaIds;
  long long _itemType;
  NSDictionary *_seenStates;
  long long _multiAdsType;
}

/* class methods */
+ (id)quantumSignalsSeenStatesModelFromExistingQuantumSignalsSeenStatesModel:(id)model;

/* instance methods */
- (id)initWithSignalId:(id)id containerModule:(id)module itemId:(id)id metaIds:(id)ids seenStates:(id)states;
- (id)build;
- (id)withSignalId:(id)id;
- (id)withContainerModule:(id)module;
- (id)withInventorySource:(id)source;
- (id)withSignalType:(long long)type;
- (id)withSurface:(long long)surface;
- (id)withItemId:(id)id;
- (id)withMetaIds:(id)ids;
- (id)withItemType:(long long)type;
- (id)withSeenStates:(id)states;
- (id)withMultiAdsType:(long long)type;
@end

#endif /* IGQuantumSignalsSeenStatesModelBuilder_h */