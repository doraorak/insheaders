//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPublishedMessageSharedStoryShareInfo_h
#define IGDirectPublishedMessageSharedStoryShareInfo_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectPublishedMessageSharedStoryOrPlaceholder.h"
#include "IGMultiAuthorReelOwner.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface IGDirectPublishedMessageSharedStoryShareInfo : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) IGDirectPublishedMessageSharedStoryOrPlaceholder *storyOrPlaceholder;
@property (readonly, copy, nonatomic) IGMultiAuthorReelOwner *reelOwner;
@property (readonly, nonatomic) BOOL shouldPersistInThread;
@property (readonly, nonatomic) BOOL isMoment;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithStoryOrPlaceholder:(id)placeholder reelOwner:(id)owner shouldPersistInThread:(BOOL)thread isMoment:(BOOL)moment;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectPublishedMessageSharedStoryShareInfo_h */
