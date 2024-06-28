//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationSuggestionHScrollCollectionViewDelegate_h
#define IGLocationSuggestionHScrollCollectionViewDelegate_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString;
@protocol IGLocationSuggestionHScrollDelegate, IGLocationSuggestionHScrollViewDelegate;

@interface IGLocationSuggestionHScrollCollectionViewDelegate : NSObject<UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
  /* instance variables */
  NSObject<IGLocationSuggestionHScrollViewDelegate> *_scrollViewDelegate;
}

@property (copy, nonatomic) NSArray *locations;
@property (weak, nonatomic) NSObject<IGLocationSuggestionHScrollDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScrollViewDelegate:(id)delegate;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(long long)index;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)scrollViewDidScroll:(id)scroll;
@end

#endif /* IGLocationSuggestionHScrollCollectionViewDelegate_h */
