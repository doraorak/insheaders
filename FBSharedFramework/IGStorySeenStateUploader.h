//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStorySeenStateUploader_h
#define IGStorySeenStateUploader_h
@import Foundation;

#include "IGAPIClient-Protocol.h"

@class NSString;

@interface IGStorySeenStateUploader : NSObject {
  /* instance variables */
  NSString *_userSessionPK;
}

@property (readonly, nonatomic) NSObject<IGAPIClient> *networker;

/* instance methods */
- (id)initWithUserSessionPK:(id)pk networker:(id)networker;
@end

#endif /* IGStorySeenStateUploader_h */
