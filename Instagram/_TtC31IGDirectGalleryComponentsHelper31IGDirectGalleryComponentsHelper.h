//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC31IGDirectGalleryComponentsHelper31IGDirectGalleryComponentsHelper_h
#define _TtC31IGDirectGalleryComponentsHelper31IGDirectGalleryComponentsHelper_h
@import Foundation;

@interface _TtC31IGDirectGalleryComponentsHelper31IGDirectGalleryComponentsHelper : NSObject { // (Swift)
  /* instance variables */
   userSession;
   mediaRequester;
}

/* instance methods */
- (id)initWithUserSession:(id)session mediaRequester:(id)requester;
- (void)generateAggregatedMediaContentWith:(id)with completion:(id /* block */)completion;
- (void)showSendingAnnotationNUXFrom:(id)nuxfrom;
- (id)init;
@end

#endif /* _TtC31IGDirectGalleryComponentsHelper31IGDirectGalleryComponentsHelper_h */
