//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSearchErrorStatesViewCell_h
#define IGDirectSearchErrorStatesViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDSHeadlineView.h"
#include "IGDSHeadlineViewDelegate-Protocol.h"
#include "IGDirectSearchErrorStatesViewModel.h"

@class NSString;
@protocol IGDirectSearchErrorStatesViewCellDelegate;

@interface IGDirectSearchErrorStatesViewCell : UICollectionViewCell<IGDSHeadlineViewDelegate> {
  /* instance variables */
  IGDSHeadlineView *_headlineView;
  long long _errorType;
  IGDirectSearchErrorStatesViewModel *_viewModel;
}

@property (weak, nonatomic) NSObject<IGDirectSearchErrorStatesViewCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model;
- (void)headlineTextButtonWasTapped;
- (void)headlineProfileImageWasTapped;
@end

#endif /* IGDirectSearchErrorStatesViewCell_h */
