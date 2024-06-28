//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFRangeRequestChunk_h
#define FNFRangeRequestChunk_h
@import Foundation;

@interface FNFRangeRequestChunk : NSObject {
  /* instance variables */
  unsigned long long _sequence;
  struct _NSRange { unsigned long long location; unsigned long long length; } _chunkRange;
  struct _NSRange { unsigned long long location; unsigned long long length; } _requestRange;
}

/* instance methods */
- (id)initWithChunkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range requestRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range sequence:(unsigned long long)sequence;
- (BOOL)isEqual:(id)equal;
@end

#endif /* FNFRangeRequestChunk_h */
