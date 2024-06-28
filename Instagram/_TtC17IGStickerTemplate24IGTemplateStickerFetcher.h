//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGStickerTemplate24IGTemplateStickerFetcher_h
#define _TtC17IGStickerTemplate24IGTemplateStickerFetcher_h
@import Foundation;

@class NSDictionary;

@interface _TtC17IGStickerTemplate24IGTemplateStickerFetcher : NSObject { // (Swift)
  /* instance variables */
   kEndpointUrl;
   userSession;
   announcer;
}

@property (nonatomic, copy) NSDictionary *fetchedModels;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)addListener:(id)listener;
- (void)fetchDataWithStickersInfo:(id)info;
- (id)init;
@end

#endif /* _TtC17IGStickerTemplate24IGTemplateStickerFetcher_h */