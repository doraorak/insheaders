//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialGridNoNetworkRefreshButton_h
#define IGSundialGridNoNetworkRefreshButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGErrorIndicatingViewType-Protocol.h"

@class IGErrorIndicationState, NSString, UIImageView;

@interface IGSundialGridNoNetworkRefreshButton : IGBouncyButton<IGErrorIndicatingViewType> {
  /* instance variables */
  UIImageView *_refreshImageView;
  IGErrorIndicationState *_errorIndicationState;
}

@property (readonly, nonatomic) IGErrorIndicationState *ig_errorIndicationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGSundialGridNoNetworkRefreshButton_h */
