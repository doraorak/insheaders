//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUpcomingEventStickerListEmptyView_h
#define IGUpcomingEventStickerListEmptyView_h
@import Foundation;

#include "UIView.h"
#include "IGImageView.h"
#include "IGLayoutElement-Protocol.h"

@class UILabel;

@interface IGUpcomingEventStickerListEmptyView : UIView {
  /* instance variables */
  IGImageView *_iconImageView;
  UILabel *_emptyText;
  NSObject<IGLayoutElement> *_layout;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* IGUpcomingEventStickerListEmptyView_h */
