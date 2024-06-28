//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGuideNavigationBarView_h
#define IGGuideNavigationBarView_h
@import Foundation;

#include "UIView.h"

@class NSString, UIButton, UILabel, UIView;

@interface IGGuideNavigationBarView : UIView {
  /* instance variables */
  UIView *_backgroundView;
  UIView *_borderView;
  UILabel *_titleLabel;
  UIView *_editingButtonsContainerView;
  UIView *_defaultButtonsContainerView;
  BOOL _opaque;
  BOOL _canPublish;
  UIButton *_closeButton;
  UIButton *_mapButton;
  UIButton *_productsButton;
  UIButton *_publishButton;
}

@property (nonatomic) BOOL isEditing;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long guideType;
@property (readonly, nonatomic) UIButton *saveButton;
@property (readonly, nonatomic) UIButton *sendButton;
@property (readonly, nonatomic) UIButton *moreButton;
@property (readonly, nonatomic) UIButton *cancelButton;

/* instance methods */
- (id)initWithIsPreview:(BOOL)preview;
- (void)layoutSubviews;
@end

#endif /* IGGuideNavigationBarView_h */