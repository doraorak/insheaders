//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingIGFundedIncentivesMegaphoneVariant3Cell_h
#define IGShoppingIGFundedIncentivesMegaphoneVariant3Cell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGShoppingIncentiveTimer.h"
#include "NSObject-Protocol.h"

@class IGCoreTextView, IGShoppingIncentiveViewModel, NSString;
@protocol IGShoppingIGFundedIncentivesMegaphoneVariant3CellDelegate;

@interface IGShoppingIGFundedIncentivesMegaphoneVariant3Cell : UICollectionViewCell<NSObject> {
  /* instance variables */
  IGShoppingIncentiveViewModel *_incentiveViewModel;
  IGCoreTextView *_titleTextView;
  IGCoreTextView *_descriptionTextView;
  IGShoppingIncentiveTimer *_incentiveTimer;
  BOOL _isCountdownEnabled;
}

@property (weak, nonatomic) NSObject<IGShoppingIGFundedIncentivesMegaphoneVariant3CellDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGCoreTextLinkHandler> *linkHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)shoppingIncentiveTimerDidFire:(id)fire withTimerState:(long long)state;
@end

#endif /* IGShoppingIGFundedIncentivesMegaphoneVariant3Cell_h */