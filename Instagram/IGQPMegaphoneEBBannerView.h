//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPMegaphoneEBBannerView_h
#define IGQPMegaphoneEBBannerView_h
@import Foundation;

#include "UIView.h"
#include "IGQPMegaphoneViewProtocol-Protocol.h"

@class IGBannerView, NSString;
@protocol IGQPMegaphoneEBBannerViewDelegate;

@interface IGQPMegaphoneEBBannerView : UIView<IGQPMegaphoneViewProtocol> {
  /* instance variables */
  IGBannerView *_bannerView;
}

@property (weak, nonatomic) NSObject<IGQPMegaphoneEBBannerViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMegaphone:(id)megaphone delegate:(id)delegate;
- (id)initWithMegaphone:(id)megaphone;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGQPMegaphoneEBBannerView_h */
