//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingCartBadgeAnimationController_h
#define IGShoppingCartBadgeAnimationController_h
@import Foundation;

#include "IGImageViewDelegate-Protocol.h"
#include "IGShoppingCartBadgeable-Protocol.h"

@class IGAPIProductDetailsProductItemDict, IGImageView, NSString;

@interface IGShoppingCartBadgeAnimationController : NSObject<IGImageViewDelegate> {
  /* instance variables */
  IGAPIProductDetailsProductItemDict *_queuedProductItem;
  IGImageView *_queuedImageView;
  NSObject<IGShoppingCartBadgeable> *_queuedBadgeable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
@end

#endif /* IGShoppingCartBadgeAnimationController_h */
