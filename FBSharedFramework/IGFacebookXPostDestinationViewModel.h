//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFacebookXPostDestinationViewModel_h
#define IGFacebookXPostDestinationViewModel_h
@import Foundation;

#include "IGFacebookReelCCPDestinationInfo.h"

@interface IGFacebookXPostDestinationViewModel : NSObject {
  /* instance variables */
  IGFacebookReelCCPDestinationInfo *_destination;
}

/* instance methods */
- (id)initWithDestination:(id)destination;
- (id)privacy;
- (id)audienceType;
- (id)username;
- (BOOL)isAudienceSameAsFeed;
@end

#endif /* IGFacebookXPostDestinationViewModel_h */
