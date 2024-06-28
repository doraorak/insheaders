//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCaptionAddOnCreationModel_h
#define IGCaptionAddOnCreationModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface IGCaptionAddOnCreationModel : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_poll_question;
  NSArray *_poll_pollOptions;
}

/* class methods */
+ (id)commentPrompt;
+ (id)pollWithQuestion:(id)question pollOptions:(id)options;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGCaptionAddOnCreationModel_h */
