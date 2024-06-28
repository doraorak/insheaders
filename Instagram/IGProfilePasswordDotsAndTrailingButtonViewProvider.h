//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfilePasswordDotsAndTrailingButtonViewProvider_h
#define IGProfilePasswordDotsAndTrailingButtonViewProvider_h
@import Foundation;

#include "IGProfilePictureImageViewLoadDelegate-Protocol.h"

@class IGProfileCellBodyView, IGProfilePictureImageView, IGTableLayoutSpec, NSString, UIView;
@protocol IGListItemViewProviderDelegate;

@interface IGProfilePasswordDotsAndTrailingButtonViewProvider : NSObject<IGProfilePictureImageViewLoadDelegate> {
  /* instance variables */
  BOOL _grayscaled;
  IGProfilePictureImageView *_profileImageView;
  IGProfileCellBodyView *_bodyView;
  UIView *_trailingButtonContainerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGTableLayoutSpec *layoutSpec;
@property (nonatomic) BOOL selected;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } leadingViewInsets;
@property (weak, nonatomic) NSObject<IGListItemViewProviderDelegate> *providerDelegate;

/* instance methods */
- (id)initWithLayoutSpec:(id)spec;
- (id)leadingContentView;
- (id)bodyContentView;
- (id)trailingContentView;
- (double)heightForBodyFittingSize:(struct CGSize { double x0; double x1; })size;
- (long long)trailingViewAlignment;
- (long long)trailingViewSizing;
- (void)profilePictureImageViewImageDidLoad:(id)load profileImage:(id)image;
- (void)profilePictureImageViewImageFailedToLoad:(id)load withURL:(id)url;
- (void)profilePictureImageView:(id)view willRequestImageWithURL:(id)url;
@end

#endif /* IGProfilePasswordDotsAndTrailingButtonViewProvider_h */
