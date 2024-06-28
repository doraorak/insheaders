//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialImmersiveHashtagUsernameButton_h
#define IGSundialImmersiveHashtagUsernameButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGSundialImmersiveAttributionLabel.h"

@class NSString, UIImageView;

@interface IGSundialImmersiveHashtagUsernameButton : IGBouncyButton {
  /* instance variables */
  IGSundialImmersiveAttributionLabel *_usernameLabel;
  UIImageView *_isVerifiedImageView;
  BOOL _isVerified;
}

@property (readonly, nonatomic) long long attributionType;
@property (retain, nonatomic) NSString *text;

/* instance methods */
- (id)init;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGSundialImmersiveHashtagUsernameButton_h */
