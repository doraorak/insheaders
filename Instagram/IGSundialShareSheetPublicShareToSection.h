//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialShareSheetPublicShareToSection_h
#define IGSundialShareSheetPublicShareToSection_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGLayoutElement-Protocol.h"
#include "IGShareSheetShareToRow.h"
#include "IGSundialShareSheetTitleRow.h"

@class UILabel;

@interface IGSundialShareSheetPublicShareToSection : IGPassthroughView {
  /* instance variables */
  IGSundialShareSheetTitleRow *_title;
  UILabel *_description;
  NSObject<IGLayoutElement> *_layout;
  BOOL _usePanoramaIcon;
  BOOL _enableTitle;
}

@property (readonly, nonatomic) IGShareSheetShareToRow *shareToFeed;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_didTapShareToFeed:(id)feed;
@end

#endif /* IGSundialShareSheetPublicShareToSection_h */
