//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationRequestSupportView_h
#define IGRegistrationRequestSupportView_h
@import Foundation;

#include "UIView.h"
#include "IGRegistrationRequestSupportScrollView.h"

@class IGRegistrationBackgroundView;

@interface IGRegistrationRequestSupportView : UIView

@property (retain, nonatomic) IGRegistrationBackgroundView *backgroundView;
@property (retain, nonatomic) IGRegistrationRequestSupportScrollView *requestSupportScrollView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
@end

#endif /* IGRegistrationRequestSupportView_h */
