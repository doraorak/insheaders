//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromptsTrayCell_h
#define IGPromptsTrayCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGListAdapterDataSource-Protocol.h"

@class IGListAdapter, IGMediaTextButton, IGPromptStickerModel, IGPromptsTrayModel, NSString, UICollectionView, UIView;
@protocol IGPromptsTrayCellDelegate;

@interface IGPromptsTrayCell : UICollectionViewCell<IGListAdapterDataSource> {
  /* instance variables */
  UIView *_containerView;
  UICollectionView *_collectionView;
  IGListAdapter *_listAdapter;
  IGPromptsTrayModel *_viewModel;
  IGPromptStickerModel *_promptStickerModel;
  IGMediaTextButton *_addYoursButton;
  UIView *_separatorView;
  UIView *_footerContainerView;
}

@property (weak, nonatomic) NSObject<IGPromptsTrayCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithViewModel:(id)model;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)didTapPromptHeaderWithPromptStickerModel:(id)model;
- (void)didConfigurePromptHeader:(id)header withModel:(id)model;
- (void)didTapOnPreviewWithReelPks:(id)pks focusedReelPk:(id)pk previewView:(id)view selectedMediaInfo:(id)info;
- (void)_addYoursButtonTapped;
@end

#endif /* IGPromptsTrayCell_h */
