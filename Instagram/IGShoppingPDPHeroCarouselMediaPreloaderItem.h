//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPDPHeroCarouselMediaPreloaderItem_h
#define IGShoppingPDPHeroCarouselMediaPreloaderItem_h
@import Foundation;

#include "IGMediaPreloaderItem-Protocol.h"

@class IGPhoto, IGVideo, NSString;

@interface IGShoppingPDPHeroCarouselMediaPreloaderItem : NSObject<IGMediaPreloaderItem> {
  /* instance variables */
  NSString *_pk;
  IGPhoto *_photo;
  IGVideo *_video;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPk:(id)pk photo:(id)photo;
- (id)initWithPk:(id)pk video:(id)video;
- (id)initWithPk:(id)pk photo:(id)photo video:(id)video;
- (id)pk;
- (id)user;
- (long long)mediaType;
- (id)photo;
- (id)video;
@end

#endif /* IGShoppingPDPHeroCarouselMediaPreloaderItem_h */