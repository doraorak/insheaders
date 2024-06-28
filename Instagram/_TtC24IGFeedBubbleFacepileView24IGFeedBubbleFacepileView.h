//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGFeedBubbleFacepileView24IGFeedBubbleFacepileView_h
#define _TtC24IGFeedBubbleFacepileView24IGFeedBubbleFacepileView_h
@import Foundation;

#include "IGBaseView.h"
#include "_TtP24IGFeedBubbleFacepileView32IGFeedBubbleFacepileViewDelegate_-Protocol.h"

@interface _TtC24IGFeedBubbleFacepileView24IGFeedBubbleFacepileView : IGBaseView { // (Swift)
  /* instance variables */
   showExpansionIndicator;
   profilePictureViews;
   knockoutViewForTwoUsers;
   knockoutViewForExpansionIndicator;
   expansionIndicator;
}

@property (nonatomic) long long numberOfUsers;
@property (nonatomic, weak) NSObject<_TtP24IGFeedBubbleFacepileView32IGFeedBubbleFacepileViewDelegate_> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)configureWith:(id)with showExpansionIndicator:(BOOL)indicator theme:(id)theme analyticsModule:(id)module;
@end

#endif /* _TtC24IGFeedBubbleFacepileView24IGFeedBubbleFacepileView_h */
