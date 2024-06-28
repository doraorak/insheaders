//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemMediaCollectionCell_h
#define IGFeedItemMediaCollectionCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGFeedItemMediaCollectionCellDelegate-Protocol.h"
#include "IGFeedItemMediaCollectionCellMediaDelegate-Protocol.h"
#include "IGFeedSectionSavedCollectionUpsellCompatible-Protocol.h"
#include "IGHeartAnimatable-Protocol.h"
#include "IGRenderingLoggingProviding-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "ViewSweepProviding-Protocol.h"

@class IGSponsoredPostInfo, NSString, UICollectionView, UITapGestureRecognizer;

@interface IGFeedItemMediaCollectionCell : UICollectionViewCell<UIGestureRecognizerDelegate, ViewSweepProviding, IGHeartAnimatable, IGRenderingLoggingProviding, IGFeedSectionSavedCollectionUpsellCompatible> {
  /* instance variables */
  UITapGestureRecognizer *_singleTapGestureRecognizer;
  NSString *_mediaPK;
  IGSponsoredPostInfo *_sponsoredPostInfo;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) NSObject<IGFeedItemMediaCollectionCellDelegate> *delegate;
@property (weak, nonatomic) NSObject<IGFeedItemMediaCollectionCellMediaDelegate> *mediaDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *viewSweepIdentifier;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_onPressed:(id)pressed;
- (void)_onSingleTapped:(id)tapped;
- (void)_onDoubleTapped:(id)tapped;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)contentViewForHeartAnimation;
- (BOOL)savedCollectionsUpsellControllerShouldPresentOverlay:(id)overlay;
- (void)savedCollectionsUpsellControllerWillPresentOverlay:(id)overlay animated:(BOOL)animated;
- (void)savedCollectionsUpsellControllerDidDismissOverlay:(id)overlay animated:(BOOL)animated;
- (id)renderedComponentLoggingInfo;
- (id)loggingExtras;
- (id)mediaPK;
- (BOOL)containsAdsInViewSweepPrimary;
@end

#endif /* IGFeedItemMediaCollectionCell_h */