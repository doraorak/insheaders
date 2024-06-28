//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVCardVideoHeaderAccessory_h
#define IGTVCardVideoHeaderAccessory_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSNumber;

@interface IGTVCardVideoHeaderAccessory : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSNumber *_seriesTag_numberOfEpisodes;
  double _progressPercentage;
}

/* class methods */
+ (id)completedCheck;
+ (id)none;
+ (id)progressPercentage:(double)percentage;
+ (id)seriesTagWithNumberOfEpisodes:(id)episodes;
+ (id)shoppingCart;

/* instance methods */
@end

#endif /* IGTVCardVideoHeaderAccessory_h */