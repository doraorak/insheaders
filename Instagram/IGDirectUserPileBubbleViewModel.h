//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectUserPileBubbleViewModel_h
#define IGDirectUserPileBubbleViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class IGDirectMessageBubbleLayoutSpec, IGDirectMessageBubbleStyle, NSString, NSURL;

@interface IGDirectUserPileBubbleViewModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSURL *profileImageURL;
@property (readonly, copy, nonatomic) NSString *actionTitle;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) NSString *module;
@property (readonly, copy, nonatomic) IGDirectMessageBubbleStyle *bubbleStyle;
@property (readonly, copy, nonatomic) IGDirectMessageBubbleLayoutSpec *bubbleLayoutSpec;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithTitle:(id)title subtitle:(id)subtitle profileImageURL:(id)url actionTitle:(id)title actionURL:(id)url module:(id)module bubbleStyle:(id)style bubbleLayoutSpec:(id)spec;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectUserPileBubbleViewModel_h */
