//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15IGActivityViews18IGNotificationCell_h
#define _TtC15IGActivityViews18IGNotificationCell_h
@import Foundation;

#include "IGBaseCollectionViewCell.h"
#include "IGNotificationCellDelegate-Protocol.h"

@class IGUserSession;

@interface _TtC15IGActivityViews18IGNotificationCell : IGBaseCollectionViewCell { // (Swift)
  /* instance variables */
   tableInterface;
   viewModelProvider;
   leftAccessoryView;
   bodyTextView;
   rightAccessoryView;
}

@property (nonatomic, weak) NSObject<IGNotificationCellDelegate> *delegate;
@property (nonatomic, retain) IGUserSession *userSession;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithViewModelProvider:(id)provider;
- (void)layoutSubviews;
- (void)prepareForReuse;
@end

#endif /* _TtC15IGActivityViews18IGNotificationCell_h */
