//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSettingsIconSwitchViewProvider_h
#define IGSettingsIconSwitchViewProvider_h
@import Foundation;

#include "IGDSSwitch.h"
#include "IGTableLayoutSpec.h"
#include "NSObject-Protocol.h"

@class NSString, UIImageView, UILabel;
@protocol IGListItemViewProviderDelegate, IGSettingsIconSwitchViewProviderDelegate;

@interface IGSettingsIconSwitchViewProvider : NSObject<NSObject> {
  /* instance variables */
  IGDSSwitch *_switchView;
  UILabel *_titleLabel;
  UIImageView *_imageView;
  BOOL _showImage;
}

@property (weak, nonatomic) NSObject<IGSettingsIconSwitchViewProviderDelegate> *delegate;
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
- (long long)trailingViewAlignment;
- (long long)trailingViewSizing;
- (double)heightForBodyFittingSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* IGSettingsIconSwitchViewProvider_h */