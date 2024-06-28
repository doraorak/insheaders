//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MOSProgressiveJPEG_h
#define MOSProgressiveJPEG_h
@import Foundation;

#include "MOSProgressiveJPEGProtocol-Protocol.h"

@class NSArray, NSString;
@protocol {Optional<MOSPJPEGEncodingInfo>="storage_"{StorageNonTriviallyDestructible=""(?="emptyState"c"value"{MOSPJPEGEncodingInfo="_version"s"_fileSize"i"_scanOffsets"@"NSArray"})"hasValue"B}};

@interface MOSProgressiveJPEG : NSObject<MOSProgressiveJPEGProtocol> {
  /* instance variables */
  NSArray *_scanOffsets;
  unsigned long long _lastScanOffset;
  unsigned long long _offsetToStartEnumeratingMarkers;
  unsigned long long _lastScanCount;
  BOOL _parsedHeader;
  BOOL _reachedEoF;
  BOOL _hasNotifiedDecodedScanForHttp3ProgressiveLoad;
  struct _MOSProgressiveJPEGConfig { BOOL shouldNotifyAllIntermediateScans; BOOL isHttp3ProgressiveLoadSupported; unsigned long long supportedScanForHttp3ProgressiveLoad; struct FBImageCreateWithDataExperimentsConfig { BOOL skipsAllMetadata; } createImageExperimentsConfig; } _config;
  unsigned long long _masterScan;
  struct Optional<MOSPJPEGEncodingInfo> { struct StorageNonTriviallyDestructible { union { char emptyState; struct MOSPJPEGEncodingInfo { short _version; int _fileSize; NSArray *_scanOffsets; } value; } x0; BOOL hasValue; } storage_; } _encodingInfo;
}

@property (readonly, nonatomic) unsigned long long numberOfScans;
@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) unsigned long long colorSpace;
@property (readonly, nonatomic) unsigned long long format;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfig:(const void *)config;
- (unsigned long long)getBestScanNumber;
- (BOOL)_foundNewScanInData:(id)data;
- (void)_readImageDimensionInformationFromData:(id)data marker:(unsigned char)marker offset:(unsigned long long)offset;
- (BOOL)_readHeaderFromData:(id)data;
- (id)updateBytes:(id)bytes;
- (id)getBestImageWithNewBytes:(id)bytes;
- (id)scanOffsets;
- (BOOL)isFullyLoaded;
- (struct { struct CGImage * x0; BOOL x1; struct CGSize { double x0; double x1; } x2; })createImageByReplacingSOSForScanNumber:(unsigned long long)number fromData:(id)data;
@end

#endif /* MOSProgressiveJPEG_h */
