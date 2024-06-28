//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SCPCameraOverlayCreditCardInfoView_h
#define SCPCameraOverlayCreditCardInfoView_h
@import Foundation;

#include "UIView.h"

@class SCPIDCapturedCreditCardData, UILabel;

@interface SCPCameraOverlayCreditCardInfoView : UIView {
  /* instance variables */
  SCPIDCapturedCreditCardData *_creditCardData;
  UILabel *_creditCardNumberLabel;
  UILabel *_creditCardExpirationLabel;
}

/* instance methods */
- (id)initWithCreditCardData:(id)data;
- (void)layoutSubviews;
@end

#endif /* SCPCameraOverlayCreditCardInfoView_h */