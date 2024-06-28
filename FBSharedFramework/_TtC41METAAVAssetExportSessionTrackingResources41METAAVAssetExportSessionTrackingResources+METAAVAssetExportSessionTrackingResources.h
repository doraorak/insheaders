//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC41METAAVAssetExportSessionTrackingResources41METAAVAssetExportSessionTrackingResources_METAAVAssetExportSessionTrackingResources_h
#define _TtC41METAAVAssetExportSessionTrackingResources41METAAVAssetExportSessionTrackingResources_METAAVAssetExportSessionTrackingResources_h
@import Foundation;

@interface _TtC41METAAVAssetExportSessionTrackingResources41METAAVAssetExportSessionTrackingResources (METAAVAssetExportSessionTrackingResources) <_TtP30METAAVResourcesTrackerProtocol13METAAVEncoder_>
/* instance methods */
- (BOOL)allTracksLoaded;
- (void)numVideoTracksWithCompletionHandler:(id /* block */)handler;
- (void)numAudioTracksWithCompletionHandler:(id /* block */)handler;
- (void)videoTracksResolutionsWithCompletionHandler:(id /* block */)handler;
- (id)audioFormat;
- (id)videoFormat;
- (id)encoderType;
@end

#endif /* _TtC41METAAVAssetExportSessionTrackingResources41METAAVAssetExportSessionTrackingResources_METAAVAssetExportSessionTrackingResources_h */