//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedOpenCarouselPivotPageIntentTarget_h
#define IGFeedOpenCarouselPivotPageIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class IGMedia, IGUser, NSArray, NSString;

@interface IGFeedOpenCarouselPivotPageIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *originalCarouselMediaId;
@property (readonly, nonatomic) IGMedia *originalCarouselMedia;
@property (readonly, nonatomic) NSString *promptText;
@property (readonly, nonatomic) IGUser *originalCarouselAuthor;
@property (readonly, nonatomic) NSArray *submittersList;
@property (readonly, nonatomic) long long approveLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOriginalCarouselMediaId:(id)id originalCarouselMedia:(id)media promptText:(id)text originalCarouselAuthor:(id)author submittersList:(id)list approveLimit:(long long)limit;
@end

#endif /* IGFeedOpenCarouselPivotPageIntentTarget_h */
