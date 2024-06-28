//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFDashFetchRange_h
#define FNFDashFetchRange_h
@import Foundation;

@class NSDictionary, NSString, NSURL;

@interface FNFDashFetchRange : NSObject {
  /* instance variables */
  BOOL _isLiveHead;
  int _startSequenceIndex;
  int _endSequenceIndex;
  NSDictionary *_httpRequestHeaders;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) int length;
@property (readonly, nonatomic) BOOL isPredictive;
@property (readonly, nonatomic) long long startSegmentIdentifier;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *transactionId;

/* instance methods */
- (id)initWithType:(unsigned long long)type url:(id)url offset:(long long)offset length:(int)length startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration httpRequestHeaders:(id)headers isPredictive:(BOOL)predictive isLiveHead:(BOOL)head startSegmentIdentifier:(long long)identifier startSequenceIndex:(int)index endSequenceIndex:(int)index source:(unsigned long long)source;
- (long long)endOffset;
- (BOOL)isSingleSegmentRange;
@end

#endif /* FNFDashFetchRange_h */