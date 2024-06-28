//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEmojiSkinTonePickerPillPresenter_h
#define IGEmojiSkinTonePickerPillPresenter_h
@import Foundation;

#include "IGEmojiSkinTonePickerPillView.h"
#include "NSObject-Protocol.h"

@class NSString, UIView;

@interface IGEmojiSkinTonePickerPillPresenter : NSObject<NSObject> {
  /* instance variables */
  IGEmojiSkinTonePickerPillView *_pillView;
}

@property (readonly, weak, nonatomic) UIView *parentView;
@property (readonly, nonatomic) BOOL isPresenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithParentView:(id)view;
- (void)presentSelectionView:(id)view atPoint:(struct CGPoint { double x0; double x1; })point contentOffsetY:(double)y;
- (void)dismissSelectionViewAnimated:(BOOL)animated;
@end

#endif /* IGEmojiSkinTonePickerPillPresenter_h */