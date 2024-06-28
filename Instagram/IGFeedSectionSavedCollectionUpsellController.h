//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedSectionSavedCollectionUpsellController_h
#define IGFeedSectionSavedCollectionUpsellController_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol IGFeedSectionSavedCollectionUpsellControllerDelegate, UIButton<IGFeedItemOverlappingButtonType, UICollectionViewCell<IGFeedSectionSavedCollectionUpsellCompatible;

@interface IGFeedSectionSavedCollectionUpsellController : NSObject<NSObject> {
  /* instance variables */
  UIButton<IGFeedItemOverlappingButtonType> *_upsellButton;
  UICollectionViewCell<IGFeedSectionSavedCollectionUpsellCompatible> *_collectionViewCell;
}

@property (weak, nonatomic) NSObject<IGFeedSectionSavedCollectionUpsellControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)resetState;
- (void)feedItemOverlappingButtonWillAnimateUp:(id)up;
- (void)feedItemOverlappingButtonDidFinishAnimatingDown:(id)down;
- (void)_upsellButtonTapped;
@end

#endif /* IGFeedSectionSavedCollectionUpsellController_h */