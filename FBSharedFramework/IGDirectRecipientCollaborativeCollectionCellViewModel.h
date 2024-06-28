//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientCollaborativeCollectionCellViewModel_h
#define IGDirectRecipientCollaborativeCollectionCellViewModel_h
@import Foundation;

#include "IGDirectRecipientCellViewModelProtocol-Protocol.h"
#include "IGDirectShareRecipient.h"
#include "IGImageTitleSubtitleViewModel.h"
#include "IGListDiffable-Protocol.h"

@class NSString, UIColor;

@interface IGDirectRecipientCollaborativeCollectionCellViewModel : NSObject<IGListDiffable, IGDirectRecipientCellViewModelProtocol> {
  /* instance variables */
  IGImageTitleSubtitleViewModel *_subviewModel;
  BOOL _isSelected;
  BOOL _isEnabled;
  UIColor *_backgroundColor;
}

@property (retain, nonatomic) IGDirectShareRecipient *recipient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRecipient:(id)recipient isSelected:(BOOL)selected isEnabled:(BOOL)enabled backgroundColor:(id)color currentUser:(id)user module:(id)module;
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
- (BOOL)isEqual:(id)equal;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (id)contextButtonConfigs;
@end

#endif /* IGDirectRecipientCollaborativeCollectionCellViewModel_h */
