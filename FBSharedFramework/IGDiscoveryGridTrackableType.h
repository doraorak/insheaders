//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoveryGridTrackableType_h
#define IGDiscoveryGridTrackableType_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDiscoveryGridItem.h"

@interface IGDiscoveryGridTrackableType : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGDiscoveryGridItem *_media_item;
  IGDiscoveryGridItem *_channel_item;
  IGDiscoveryGridItem *_sundialTopReels_item;
  IGDiscoveryGridItem *_ad_item;
  IGDiscoveryGridItem *_contentContainer_item;
}

/* class methods */
+ (id)adWithItem:(id)item;
+ (id)channelWithItem:(id)item;
+ (id)contentContainerWithItem:(id)item;
+ (id)mediaWithItem:(id)item;
+ (id)sundialTopReelsWithItem:(id)item;

/* instance methods */
@end

#endif /* IGDiscoveryGridTrackableType_h */
