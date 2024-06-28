//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenFormExtensionAdsBannerView_h
#define IGLeadGenFormExtensionAdsBannerView_h
@import Foundation;

#include "UIView.h"
#include "IGDSPeopleCellView.h"
#include "IGDSPeopleCellViewTextButtonDelegate-Protocol.h"
#include "IGFeedItemDirectResponseLoggingProviderDelegate-Protocol.h"
#include "IGLeadGenFormExtensionsLogger.h"

@class IGUser, IGUserSession, NSString;

@interface IGLeadGenFormExtensionAdsBannerView : UIView<IGDSPeopleCellViewTextButtonDelegate, IGFeedItemDirectResponseLoggingProviderDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDSPeopleCellView *_peopleView;
  NSString *_displayName;
  unsigned long long _followerCount;
  NSString *_ctaButtonText;
  IGUser *_advertiserUser;
  id /* block */ _ctaTapHandler;
  IGLeadGenFormExtensionsLogger *_igLeadGenAdsLogger;
  NSString *_entryPoint;
  NSString *_adId;
  NSString *_adTrackingToken;
  NSString *_creationSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session displayName:(id)name advertiserUser:(id)user followerCount:(unsigned long long)count ctaButtonText:(id)text ctaTapHandler:(id /* block */)handler entryPoint:(id)point adId:(id)id adTrackingToken:(id)token creationSource:(id)source;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)peopleCellDidTapTextButton:(id)button;
- (id)extraDictionaryForMedia:(id)media directResponseInfo:(id)info;
@end

#endif /* IGLeadGenFormExtensionAdsBannerView_h */
