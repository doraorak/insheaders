//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSaveToCollectionsCreationView_h
#define IGSaveToCollectionsCreationView_h
@import Foundation;

#include "UIView.h"
#include "IGSaveCollectionTitleFieldValidator.h"
#include "NSObject-Protocol.h"

@class IGImageView, IGTextField, NSString, UIView;
@protocol IGSaveToCollectionsCreationViewConfigurationType, IGSaveToCollectionsCreationViewDelegate;

@interface IGSaveToCollectionsCreationView : UIView<NSObject> {
  /* instance variables */
  IGImageView *_thumbnailView;
  IGTextField *_titleField;
  UIView *_underline;
  IGSaveCollectionTitleFieldValidator *_titleValidator;
  NSObject<IGSaveToCollectionsCreationViewConfigurationType> *_layoutConfig;
}

@property (weak, nonatomic) NSObject<IGSaveToCollectionsCreationViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPhoto:(id)photo layoutConfig:(id)config module:(id)module;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)_textFieldChanged:(id)changed;
- (void)textFieldDidReturnWithText:(id)text;
@end

#endif /* IGSaveToCollectionsCreationView_h */