//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHighlightsFeedPostCreationIntentTarget_h
#define IGHighlightsFeedPostCreationIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSArray, NSString;
@protocol IGHighlightsFeedPostSelectionViewControllerDelegate;

@interface IGHighlightsFeedPostCreationIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSString *reelPK;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL presentedModally;
@property (readonly, nonatomic) long long reelType;
@property (readonly, nonatomic) NSObject<IGHighlightsFeedPostSelectionViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithItems:(id)items reelPK:(id)pk title:(id)title presentedModally:(BOOL)modally reelType:(long long)type delegate:(id)delegate;
@end

#endif /* IGHighlightsFeedPostCreationIntentTarget_h */
