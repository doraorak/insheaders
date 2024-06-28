//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFDashChunkMetadata_h
#define FNFDashChunkMetadata_h
@import Foundation;

@interface FNFDashChunkMetadata : NSObject

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } endTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } absoluteTime;
@property (readonly, nonatomic) int sequenceIndex;
@property (readonly, nonatomic) unsigned char parseState;
@property (readonly, nonatomic) unsigned long long fetchState;

/* instance methods */
- (id)initWithChunk:(id)chunk startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time absoluteTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)updateParseState:(unsigned char)state fetchState:(unsigned long long)state;
- (id)parseStateString;
- (id)fetchStateString;
@end

#endif /* FNFDashChunkMetadata_h */