//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC13IGCelebration27IGCelebrationViewController_h
#define _TtC13IGCelebration27IGCelebrationViewController_h
@import Foundation;

#include "UIViewController.h"

@interface _TtC13IGCelebration27IGCelebrationViewController : UIViewController { // (Swift)
  /* instance variables */
   celebration;
   userSession;
   media;
   trigger;
   onDismiss;
   blurView;
   animationController;
   imageView;
   textLabel;
   dismissButton;
   addToStoryButton;
   kLabelMargin;
   kLabelVerticalPaddingRatio;
   kStoryVerticalPaddingRatio;
   kStoryVerticalOriginRatio;
   kImageCornerRadius;
   kAddToStoryButtonHorizontalPadding;
   kIGRegistrationDismissButtonHorizontalPadding;
   kDismissButtonButtomVerticalPadding;
   kStoryTextMargin;
   kStoryTextFont;
   kImageWidth;
   kImageHeight;
   kImageVerticalPadding;
   kAnimatedStickerVerticalAdjustment;
   kAnimationCacheKey;
   confetiiImageAssets;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)addToStoryAction;
- (void)dismissAction;
- (id)initWithNibName:(id)name bundle:(id)bundle;
@end

#endif /* _TtC13IGCelebration27IGCelebrationViewController_h */
