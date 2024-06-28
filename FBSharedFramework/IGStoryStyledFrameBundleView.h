//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryStyledFrameBundleView_h
#define IGStoryStyledFrameBundleView_h
@import Foundation;

#include "UIView.h"
#include "IGPrecaptureStickerViewType-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UILabel, UIView;

@interface IGStoryStyledFrameBundleView : UIView<UIGestureRecognizerDelegate, IGPrecaptureStickerViewType> {
  /* instance variables */
  UIView *_contentContainer;
  UILabel *_label;
  long long _currentStyleIndex;
}

@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSArray *styles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL shouldPopulateInPostcapture;

/* instance methods */
- (id)initWithContentView:(id)view styles:(id)styles;
- (void)layoutSubviews;
@end

#endif /* IGStoryStyledFrameBundleView_h */