//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientStoryHighlightShareViewModel_h
#define IGDirectRecipientStoryHighlightShareViewModel_h
@import Foundation;

#include "IGDirectRecipientCellViewModelProtocol-Protocol.h"
#include "IGImageTitleSubtitleViewModel.h"
#include "IGListDiffable-Protocol.h"

@class NSString, UIColor;

@interface IGDirectRecipientStoryHighlightShareViewModel : NSObject<IGListDiffable, IGDirectRecipientCellViewModelProtocol> {
  /* instance variables */
  IGImageTitleSubtitleViewModel *_subviewModel;
  UIColor *_backgroundColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSubviewModel:(id)model backgroundColor:(id)color;
- (id)initWithSelectedHighlights:(id)highlights layoutSpec:(id)spec backgroundColor:(id)color;
- (id)subviewModel;
- (id)oneTapViewModel;
- (BOOL)isSelected;
- (BOOL)isEnabled;
- (BOOL)showDottedCircleAccessoryView;
- (BOOL)showUnseenBlueDot;
- (long long)buttonType;
- (BOOL)showLoadingIndicatorAccessoryView;
- (unsigned long long)subtitleAccessoryType;
- (id)backgroundColor;
- (double)cellHeightForConstrainingSize:(struct CGSize { double x0; double x1; })size;
- (double)separatorLeftInset;
- (double)separatorRightInset;
- (id)accessoryViewImage;
- (int)recipientTargetType;
- (id)accessibilityLabel;
- (BOOL)isE2EE;
- (id)userList;
- (id)contextButtonConfigs;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGDirectRecipientStoryHighlightShareViewModel_h */
