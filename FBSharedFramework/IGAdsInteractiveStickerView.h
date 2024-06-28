//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdsInteractiveStickerView_h
#define IGAdsInteractiveStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGAdsInteractiveStickerGenericProfileCardConfiguration.h"
#include "IGAdsInteractiveStickerLeadGenConfiguration.h"

@class NSString, UIView;

@interface IGAdsInteractiveStickerView : UIView {
  /* instance variables */
  unsigned long long _stickerType;
  NSString *_profileName;
  NSString *_contextHeadline;
  NSString *_ctaText;
  IGAdsInteractiveStickerLeadGenConfiguration *_leadGenCardConfig;
  IGAdsInteractiveStickerGenericProfileCardConfiguration *_geneircProfileCardConfig;
  UIView *_iconView;
  UIView *_headerView;
  UIView *_bodyView;
  UIView *_ctaView;
  double _stickerPaddingX;
  double _stickerWidthLarge;
}

/* instance methods */
- (id)initWithLeadGenConfiguration:(id)configuration;
- (id)initWithGenericProfileCardConfiguration:(id)configuration;
- (void)layoutSubviews;
- (unsigned long long)stickerType;
@end

#endif /* IGAdsInteractiveStickerView_h */
