//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBulletPointListItemView_h
#define IGBulletPointListItemView_h
@import Foundation;

#include "UIView.h"
#include "IGImageView.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString, UILabel, UITextView;
@protocol IGBulletPointListItemViewDelegate;

@interface IGBulletPointListItemView : UIView<UITextViewDelegate> {
  /* instance variables */
  IGImageView *_thumbnailView;
  UILabel *_textLabel;
  UITextView *_detailTextView;
  BOOL _overridePadding;
}

@property (weak, nonatomic) NSObject<IGBulletPointListItemViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model;
- (id)initWithViewModel:(id)model overridePadding:(BOOL)padding;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (void)textViewDidChangeSelection:(id)selection;
@end

#endif /* IGBulletPointListItemView_h */
