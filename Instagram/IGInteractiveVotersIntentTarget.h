//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInteractiveVotersIntentTarget_h
#define IGInteractiveVotersIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGStoryItemType-Protocol.h"

@class IGInteractiveStickersModel, NSString;

@interface IGInteractiveVotersIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSObject<IGStoryItemType> *storyItem;
@property (readonly, nonatomic) NSString *reelId;
@property (readonly, nonatomic) IGInteractiveStickersModel *interactiveSticker;
@property (readonly, nonatomic) long long voteIndex;
@property (readonly, nonatomic) NSString *voteTitle;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } deltaInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStoryItem:(id)item reelId:(id)id interactiveSticker:(id)sticker voteIndex:(long long)index voteTitle:(id)title deltaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
@end

#endif /* IGInteractiveVotersIntentTarget_h */