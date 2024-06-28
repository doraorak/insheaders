//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryGridRelatedItemsStore_h
#define IGDiscoveryGridRelatedItemsStore_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;

@interface IGDiscoveryGridRelatedItemsStore : NSObject<NSObject> {
  /* instance variables */
  NSMutableSet *_itemsRegistry;
  NSMutableSet *_focusItemsRegistry;
  NSMutableDictionary *_itemToContainerInfoMap;
  NSMutableOrderedSet *_containersRegistry;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)clear;
- (id)parentUnitForGridItem:(id)item;
@end

#endif /* IGDiscoveryGridRelatedItemsStore_h */
