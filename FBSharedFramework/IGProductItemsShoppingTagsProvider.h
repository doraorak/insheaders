//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProductItemsShoppingTagsProvider_h
#define IGProductItemsShoppingTagsProvider_h
@import Foundation;

#include "IGFeedTagsProvider-Protocol.h"
#include "IGProductItemTagGroup.h"

@class NSString;

@interface IGProductItemsShoppingTagsProvider : NSObject<IGFeedTagsProvider> {
  /* instance variables */
  IGProductItemTagGroup *_productItemTags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProductItems:(id)items;
- (id)fbUserTags;
- (id)userTags;
- (id)productItemTags;
- (id)upcomingEventTags;
- (id)fundraiserTags;
- (id)linkedHighlightTags;
- (BOOL)hasFbUserTags;
- (BOOL)hasUserTags;
- (BOOL)hasProductTags;
- (BOOL)hasUpcomingEventTags;
- (BOOL)hasFundraiserTags;
- (BOOL)hasLinkedHighlightTags;
- (BOOL)hasCopyrightAttribution;
@end

#endif /* IGProductItemsShoppingTagsProvider_h */