//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGModuleItem_h
#define IGModuleItem_h
@import Foundation;

#include "IGModuleItemPosition.h"
#include "IGResource-Protocol.h"

@class NSArray, NSSet, NSString;

@interface IGModuleItem : NSObject {
  /* instance variables */
  BOOL _isCarouselItem;
  long long _initialOnScreenIndex;
  long long _numberOfItemsInCarousel;
}

@property (readonly, nonatomic) NSObject<IGResource> *resource;
@property (readonly, nonatomic) NSArray *resources;
@property (readonly, nonatomic) IGModuleItemPosition *position;
@property (readonly, nonatomic) NSSet *attributes;
@property (readonly, nonatomic) NSString *module;

/* instance methods */
- (id)initWithResource:(id)resource position:(id)position;
- (id)initWithResource:(id)resource position:(id)position isCarouselItem:(BOOL)item initialOnScreenIndex:(long long)index numberOfItemsInCarousel:(long long)carousel attributes:(id)attributes;
@end

#endif /* IGModuleItem_h */
