//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectStatusReplyContext_h
#define IGDirectStatusReplyContext_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "MusicStatusForDirectDataModel.h"
#include "NSCoding-Protocol.h"

@class NSString;

@interface IGDirectStatusReplyContext : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_unexpired_emoji;
  NSString *_unexpired_text;
  MusicStatusForDirectDataModel *_unexpired_musicDataModel;
}

/* class methods */
+ (id)expired;
+ (id)unexpiredWithEmoji:(id)emoji text:(id)text musicDataModel:(id)model;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectStatusReplyContext_h */
