//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVUploadableVideo_h
#define IGTVUploadableVideo_h
@import Foundation;

@class IGPostPassthroughUploadCandidate, IGVideoComposition;

@interface IGTVUploadableVideo : NSObject

@property (readonly, nonatomic) IGVideoComposition *videoComposition;
@property (readonly, nonatomic) IGPostPassthroughUploadCandidate *equivalentPassthroughCandidate;

/* instance methods */
- (id)initWithVideoComposition:(id)composition equivalentPassthroughCandidate:(id)candidate;
@end

#endif /* IGTVUploadableVideo_h */