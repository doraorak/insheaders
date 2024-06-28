//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaThumbnailCell_FeedPreviewableCell_h
#define IGMediaThumbnailCell_FeedPreviewableCell_h
@import Foundation;

@interface IGMediaThumbnailCell (FeedPreviewableCell) <IGFeedPreviewableCell>
/* instance methods */
- (BOOL)shouldAllowPreviewForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)sessionId;
- (id)currentPlaybackTime;
@end

#endif /* IGMediaThumbnailCell_FeedPreviewableCell_h */