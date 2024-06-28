//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingSearchProductListResultViewProvider_h
#define IGShoppingSearchProductListResultViewProvider_h
@import Foundation;

#include "IGShoppingSearchProductListResultDecoratorView.h"
#include "NSObject-Protocol.h"

@class IGLabel, IGShoppingProductThumbnailImageView, IGStackLayout, IGTableLayoutSpec, NSString, UIView;
@protocol IGListItemViewProviderDelegate, IGShoppingSearchProductListResultViewProviderDelegate;

@interface IGShoppingSearchProductListResultViewProvider : NSObject<NSObject> {
  /* instance variables */
  IGShoppingProductThumbnailImageView *_productImageView;
  IGStackLayout *_stackLayout;
  UIView *_labelContainerView;
  IGLabel *_titleLabel;
  IGLabel *_subtitleLabel;
  IGLabel *_infoLabel;
  IGShoppingSearchProductListResultDecoratorView *_decoratorView;
}

@property (weak, nonatomic) NSObject<IGShoppingSearchProductListResultViewProviderDelegate> *delegate;
@property (readonly, nonatomic) IGTableLayoutSpec *layoutSpec;
@property (nonatomic) BOOL selected;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } leadingViewInsets;
@property (weak, nonatomic) NSObject<IGListItemViewProviderDelegate> *providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithLayoutSpec:(id)spec;
- (id)leadingContentView;
- (id)bodyContentView;
- (id)trailingContentView;
- (double)heightForBodyFittingSize:(struct CGSize { double x0; double x1; })size;
- (long long)trailingViewAlignment;
- (long long)trailingViewSizing;
- (void)_decoratorButtonTapped;
- (void)_productImageViewTapped;
@end

#endif /* IGShoppingSearchProductListResultViewProvider_h */