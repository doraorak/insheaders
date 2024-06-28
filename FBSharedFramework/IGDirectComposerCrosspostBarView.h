//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectComposerCrosspostBarView_h
#define IGDirectComposerCrosspostBarView_h
@import Foundation;

#include "UIView.h"
#include "IGUserSession.h"

@class NSString, UILabel, UITapGestureRecognizer;

@interface IGDirectComposerCrosspostBarView : UIView

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) BOOL shouldCrosspost;
@property (readonly, copy, nonatomic) NSString *threadID;
@property (readonly, nonatomic) IGUserSession *userSession;

/* class methods */
+ (id)_attributedStringForCrosspostState:(BOOL)state;
+ (unsigned long long)_iconAssetForCrosspostState:(BOOL)state;

/* instance methods */
- (id)initWithUserSession:(id)session threadID:(id)id;
- (void)_didTapCrosspostBarView;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* IGDirectComposerCrosspostBarView_h */
