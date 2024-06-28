//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedPreviewObject_h
#define IGFeedPreviewObject_h
@import Foundation;

#include "IGListDiffable-Protocol.h"

@class NSIndexPath, NSNumber, NSString, UIImage;

@interface IGFeedPreviewObject : NSObject

@property (readonly, nonatomic) NSObject<IGListDiffable> *object;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSNumber *currentPlaybackTime;

/* instance methods */
- (id)initWithObject:(id)object placeholderImage:(id)image indexPath:(id)path sessionId:(id)id currentPlaybackTime:(id)time;
@end

#endif /* IGFeedPreviewObject_h */