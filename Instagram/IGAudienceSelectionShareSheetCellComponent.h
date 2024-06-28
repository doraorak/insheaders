//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudienceSelectionShareSheetCellComponent_h
#define IGAudienceSelectionShareSheetCellComponent_h
@import Foundation;

@class IGDSRadioButtonView, IGImageTitleSubtitleView, UIImage, UIImageView, UISwitch;
@protocol IGAudienceSelectionShareSheetCellComponentDelegate;

@interface IGAudienceSelectionShareSheetCellComponent : NSObject {
  /* instance variables */
  NSObject<IGAudienceSelectionShareSheetCellComponentDelegate> *_delegate;
  IGImageTitleSubtitleView *_imageTitleSubtitleView;
  IGDSRadioButtonView *_radioButton;
  UIImageView *_checkmarkImageView;
  UIImage *_selectedCheckBox;
  UIImage *_emptyCheckBox;
  UISwitch *_switch;
  unsigned long long _selectionType;
}

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)setSelected:(BOOL)selected;
- (void)_subtitleTapped;
@end

#endif /* IGAudienceSelectionShareSheetCellComponent_h */