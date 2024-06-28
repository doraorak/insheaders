//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC31IGDirectGalleryComponentsHelper35IGDirectGalleryEditSavingController_h
#define _TtC31IGDirectGalleryComponentsHelper35IGDirectGalleryEditSavingController_h
@import Foundation;

@class NSArray *, NSError *;

@interface _TtC31IGDirectGalleryComponentsHelper35IGDirectGalleryEditSavingController : NSObject { // (Swift)
  /* instance variables */
   savedCompositions;
   galleryPreviewMediaDict;
   userSession;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)generateOrGetSavedMediaCompositionsWith:(NSArray *)with maxVideoDuration:(double)duration creationStyle:(long long)style completionHandler:(id /* block */)handler;
- (void)cleanUp;
- (id)saveCompositions:(id)compositions;
- (void)removeSavedCompositionWithAsset:(id)asset;
- (id)init;
@end

#endif /* _TtC31IGDirectGalleryComponentsHelper35IGDirectGalleryEditSavingController_h */
