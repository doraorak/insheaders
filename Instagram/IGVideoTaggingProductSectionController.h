//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoTaggingProductSectionController_h
#define IGVideoTaggingProductSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "NSObject-Protocol.h"

@class IGAPIProductDetailsProductItemDict, IGUserSession, NSString;
@protocol IGVideoTaggingProductSectionControllerDelegate;

@interface IGVideoTaggingProductSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  IGAPIProductDetailsProductItemDict *_productItem;
  NSString *_analyticsModule;
  IGUserSession *_userSession;
}

@property (weak, nonatomic) NSObject<IGVideoTaggingProductSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnalyticsModule:(id)module userSession:(id)session;
- (long long)numberOfItems;
- (id)cellForItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)productListItemTrailingButtonTapped:(id)tapped;
@end

#endif /* IGVideoTaggingProductSectionController_h */