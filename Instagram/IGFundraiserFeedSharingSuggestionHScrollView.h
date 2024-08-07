//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFundraiserFeedSharingSuggestionHScrollView_h
#define IGFundraiserFeedSharingSuggestionHScrollView_h
@import Foundation;

#include "UIView.h"
#include "IGFundraiserFeedSharingSuggestionHScrollCollectionViewDataSource.h"
#include "IGFundraiserFeedSharingSuggestionHScrollCollectionViewDelegate.h"
#include "NSObject-Protocol.h"

@class IGAccessibilityCollectionController, IGGradientView, NSArray, NSString, UICollectionView;
@protocol IGFundraiserFeedSharingSuggestionHScrollDelegate;

@interface IGFundraiserFeedSharingSuggestionHScrollView : UIView<NSObject> {
  /* instance variables */
  IGAccessibilityCollectionController *_accessibilityCollectionController;
  BOOL _isSearchPillEnabled;
  BOOL _isDonateButtonPillEnabled;
  IGFundraiserFeedSharingSuggestionHScrollCollectionViewDataSource *_collectionViewDataSource;
  IGFundraiserFeedSharingSuggestionHScrollCollectionViewDelegate *_collectionViewDelegate;
  NSString *_searchPillText;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGGradientView *leftGradientView;
@property (retain, nonatomic) IGGradientView *rightGradientView;
@property (weak, nonatomic) NSObject<IGFundraiserFeedSharingSuggestionHScrollDelegate> *delegate;
@property (copy, nonatomic) NSArray *suggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)reloadData;
- (void)layoutSubviews;
- (void)fundraiserSuggestionHScrollViewDelegateDidScroll;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)scroll;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)accessibilityActivate;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityPerformMagicTap;
@end

#endif /* IGFundraiserFeedSharingSuggestionHScrollView_h */
