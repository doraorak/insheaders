//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RichAvatarView_h
#define RichAvatarView_h
@import Foundation;

#include "UIView.h"
#include "AvatarRendererStateListener-Protocol.h"
#include "RichAvatarViewModel.h"

@class NSString, UIActivityIndicatorView, UIView;

@interface RichAvatarView : UIView<AvatarRendererStateListener> {
  /* instance variables */
  RichAvatarViewModel *_viewModel;
  UIView *_previewView;
  UIActivityIndicatorView *_activityIndicator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (void)layoutSubviews;
- (void)avatarRendererWillStartRenderingWithEffect:(id)effect;
- (void)avatarRendererDidStartLoadingGLBForEffect:(id)effect requestID:(id)id;
- (void)avatarRendererDidStartRenderingEffect:(id)effect;
- (void)avatarRendererDidFailRenderingEffect:(id)effect error:(id)error;
@end

#endif /* RichAvatarView_h */
