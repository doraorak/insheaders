//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC31BCNFeedItemHeaderProfilePicture31BCNFeedItemHeaderProfilePicture_h
#define _TtC31BCNFeedItemHeaderProfilePicture31BCNFeedItemHeaderProfilePicture_h
@import Foundation;

#include "IGBaseView.h"
#include "IGProfilePictureImageViewTapDelegate-Protocol.h"

@interface _TtC31BCNFeedItemHeaderProfilePicture31BCNFeedItemHeaderProfilePicture : IGBaseView<IGProfilePictureImageViewTapDelegate> { // (Swift)
  /* instance variables */
   hitTestExpansion;
   profilePictureImageView;
   followIndicator;
   $__lazy_storage_$_lazyPresenceIndicator;
   showPresenceIndicator;
   eventBadgeImpressionBlock;
   $__lazy_storage_$_lazyEventBadge;
   image;
   preferredProfilePicURL;
   delegate;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)didTapFollowIndicatorButton:(id)button;
- (void)profilePictureTapped:(id)tapped;
@end

#endif /* _TtC31BCNFeedItemHeaderProfilePicture31BCNFeedItemHeaderProfilePicture_h */
