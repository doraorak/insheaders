//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaThumbnailMetadataMatcher_h
#define IGMediaThumbnailMetadataMatcher_h
@import Foundation;

@interface IGMediaThumbnailMetadataMatcher : NSObject
/* class methods */
+ (id)match:(id)match none:(id /* block */)none viewCount:(id /* block */)count likeCount:(id /* block */)count reshareCount:(id /* block */)count viewCountAndUsername:(id /* block */)username videoDuration:(id /* block */)duration videoMetadata:(id /* block */)metadata justSeen:(id /* block */)seen collabCollectionMetadata:(id /* block */)metadata repostMetadata:(id /* block */)metadata caption:(id /* block */)caption authorPog:(id /* block */)pog;
@end

#endif /* IGMediaThumbnailMetadataMatcher_h */