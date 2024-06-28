//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveQuestionOverlayViewControllerV2_h
#define IGLiveQuestionOverlayViewControllerV2_h
@import Foundation;

#include "UIViewController.h"
#include "IGLiveQuestionOverlayViewV2.h"

@class NSString;
@protocol IGLiveQuestionOverlayViewDelegateV2;

@interface IGLiveQuestionOverlayViewControllerV2 : UIViewController {
  /* instance variables */
  IGLiveQuestionOverlayViewV2 *_currentQuestionOverlayView;
  IGLiveQuestionOverlayViewV2 *_newQuestionOverlayView;
  long long _overlayConfig;
  NSObject<IGLiveQuestionOverlayViewDelegateV2> *_delegate;
}

@property (readonly, nonatomic) NSString *currentQuestionPk;

/* instance methods */
- (id)initWithDelegate:(id)delegate overlayConfig:(long long)config;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)prepareForReuse;
- (long long)updateTypeForQuestionPk:(id)pk showQuestion:(BOOL)question;
- (void)configureQuestionWithText:(id)text questionPk:(id)pk submittedByUser:(id)user isActivate:(BOOL)activate completion:(id /* block */)completion;
- (double)heightThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_addQuestion:(id)question submittedByUser:(id)user completion:(id /* block */)completion;
- (void)_removeQuestionWithCompletion:(id /* block */)completion;
- (void)_cancelSlideAnimations;
- (void)_slideOutView:(id)view slideInView:(id)view completion:(id /* block */)completion;
- (id)_slideOutSpringForView:(id)view completion:(id /* block */)completion;
- (id)_slideInSpringForView:(id)view completion:(id /* block */)completion;
- (void)_animateCurrentQuestionBounce;
- (id)_overlayViewForQuestion:(id)question submittedByUser:(id)user;
- (void)_didTapQuestionOverlay;
@end

#endif /* IGLiveQuestionOverlayViewControllerV2_h */