//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEndOfFeedDemarcatorViewLayoutConfig_h
#define IGEndOfFeedDemarcatorViewLayoutConfig_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGEndOfFeedDemarcatorViewStandardLayoutConfig.h"
#include "IGEndOfFeedDemarcatorViewTopOfFeedLayoutConfig.h"

@class IGEndOfFeedDemarcatorViewFavoritesLayoutConfig;

@interface IGEndOfFeedDemarcatorViewLayoutConfig : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGEndOfFeedDemarcatorViewStandardLayoutConfig *_standardConfig;
  IGEndOfFeedDemarcatorViewFavoritesLayoutConfig *_favoritesConfig;
  IGEndOfFeedDemarcatorViewTopOfFeedLayoutConfig *_topOfFeedConfig;
}

/* class methods */
+ (id)favoritesConfig:(id)config;
+ (id)standardConfig:(id)config;
+ (id)topOfFeedConfig:(id)config;

/* instance methods */
@end

#endif /* IGEndOfFeedDemarcatorViewLayoutConfig_h */
