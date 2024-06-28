//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGListItemView_h
#define IGListItemView_h
@import Foundation;

#include "UIView.h"
#include "NSObject-Protocol.h"

@class NSString, UIView;
@protocol IGListItemViewProvider;

@interface IGListItemView : UIView<NSObject> {
  /* instance variables */
  UIView *_leadingContent;
  UIView *_bodyContent;
  UIView *_trailingContent;
  UIView *_bottomBorder;
  BOOL _showBottomBorder;
}

@property (readonly, nonatomic) NSObject<IGListItemViewProvider> *provider;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProvider:(id)provider;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (unsigned long long)accessibilityTraits;
- (void)viewProviderDidFinishUpdatingOutViews:(id)views;
@end

#endif /* IGListItemView_h */