//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProductListItemViewProvider_h
#define IGProductListItemViewProvider_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGImageView, IGProfileCellBodyView, IGTableLayoutSpec, IGTapButton, NSString;
@protocol IGListItemViewProviderDelegate, IGProductListItemViewProviderDelegate;

@interface IGProductListItemViewProvider : NSObject<NSObject> {
  /* instance variables */
  IGImageView *_imageView;
  IGProfileCellBodyView *_bodyView;
  IGTapButton *_trailingButtonView;
}

@property (weak, nonatomic) NSObject<IGProductListItemViewProviderDelegate> *delegate;
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
- (id)initWithLayoutSpec:(id)spec;
- (id)leadingContentView;
- (id)bodyContentView;
- (id)trailingContentView;
- (double)heightForBodyFittingSize:(struct CGSize { double x0; double x1; })size;
- (long long)trailingViewAlignment;
- (void)_buttonTapped;
- (long long)trailingViewSizing;
@end

#endif /* IGProductListItemViewProvider_h */