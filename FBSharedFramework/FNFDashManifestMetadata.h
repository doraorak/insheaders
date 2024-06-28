//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFDashManifestMetadata_h
#define FNFDashManifestMetadata_h
@import Foundation;

#include "FNFResponseMetadata.h"

@class NSData, NSError, NSString;

@interface FNFDashManifestMetadata : NSObject {
  /* instance variables */
  NSError *_error;
}

@property (readonly, nonatomic) BOOL isDynamic;
@property (readonly, nonatomic) int numberOfChunks;
@property (readonly, nonatomic) long long firstSegmentStartTime;
@property (readonly, nonatomic) long long lastSegmentEndTime;
@property (readonly, copy, nonatomic) FNFResponseMetadata *responseMetadata;
@property (readonly, copy, nonatomic) NSString *liveTraceStreamId;
@property (readonly, copy, nonatomic) NSString *liveTraceStreamType;
@property (readonly, copy, nonatomic) NSString *validationErrors;
@property (readonly, nonatomic) BOOL isPredictive;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, copy, nonatomic) NSData *manifestData;

/* instance methods */
- (id)initWithResponseMetadata:(id)metadata error:(id)error source:(unsigned long long)source manifestData:(id)data;
- (id)initWithResponseMetadata:(id)metadata numberOfChunks:(int)chunks firstSegmentStartTime:(long long)time lastSegmentEndTime:(long long)time isDynamic:(BOOL)dynamic liveTraceStreamId:(id)id liveTraceStreamType:(id)type validationErrors:(id)errors isPredictive:(BOOL)predictive source:(unsigned long long)source manifestData:(id)data;
- (id)error;
@end

#endif /* FNFDashManifestMetadata_h */