//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MOSImageDownloader_IGImageDownloading_h
#define MOSImageDownloader_IGImageDownloading_h
@import Foundation;

@interface MOSImageDownloader (IGImageDownloading) <MOSImageDownloading>
/* instance methods */
- (id)downloadImageWithURL:(id)url downloadingOptions:(struct { id x0; long long x1; BOOL x2; unsigned long long x3; unsigned long long x4; id x5; })options completionBlock:(id /* block */)block;
- (id)downloadImageWithURL:(id)url downloadingOptions:(struct { id x0; long long x1; BOOL x2; unsigned long long x3; unsigned long long x4; id x5; })options mosaicCompletionBlock:(id /* block */)block;
- (id)_downloadImageWithURL:(id)url downloadingOptions:(struct { id x0; long long x1; BOOL x2; unsigned long long x3; unsigned long long x4; id x5; })options mosaicCompletionBlock:(id /* block */)block;
@end

#endif /* MOSImageDownloader_IGImageDownloading_h */