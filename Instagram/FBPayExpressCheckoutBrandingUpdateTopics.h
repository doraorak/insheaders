//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayExpressCheckoutBrandingUpdateTopics_h
#define FBPayExpressCheckoutBrandingUpdateTopics_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSMutableSet;

@interface FBPayExpressCheckoutBrandingUpdateTopics : NSObject<NSCoding, NSCopying> {
  /* instance variables */
  NSMutableSet *_brandingUpdateTopics;
}

/* instance methods */
- (id)initWithBrandingUpdateTopics:(id)topics;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBPayExpressCheckoutBrandingUpdateTopics_h */