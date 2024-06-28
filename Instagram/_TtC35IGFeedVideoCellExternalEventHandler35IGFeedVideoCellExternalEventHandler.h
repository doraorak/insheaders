//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC35IGFeedVideoCellExternalEventHandler35IGFeedVideoCellExternalEventHandler_h
#define _TtC35IGFeedVideoCellExternalEventHandler35IGFeedVideoCellExternalEventHandler_h
@import Foundation;

@interface _TtC35IGFeedVideoCellExternalEventHandler35IGFeedVideoCellExternalEventHandler : NSObject { // (Swift)
  /* instance variables */
   feedSectionUpdateAnnouncer;
}

/* instance methods */
- (void)didTapBrandOrInfluencerProfileInHeaderWithSource:(id)source userSession:(id)session media:(id)media sponsoredPostInfo:(id)info previewableAdUserFlowLogger:(id)logger;
- (void)didTapBrandOrInfluencerProfileInTextCellWithSource:(id)source userSession:(id)session media:(id)media sponsoredPostInfo:(id)info previewableAdUserFlowLogger:(id)logger;
- (id)videoCellBugReportMetadata;
- (id)init;
@end

#endif /* _TtC35IGFeedVideoCellExternalEventHandler35IGFeedVideoCellExternalEventHandler_h */
