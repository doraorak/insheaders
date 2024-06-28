//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAssetLinearReader_h
#define FBAssetLinearReader_h
@import Foundation;

#include "FNFDataBlockDistributor.h"
#include "FNFMp4StreamingReader-Protocol.h"

@class NSString;

@interface FBAssetLinearReader : NSObject<FNFMp4StreamingReader> {
  /* instance variables */
  FNFDataBlockDistributor *_dataDistributor;
  unsigned long long _offset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataDistributor:(id)distributor;
- (void)moveHead:(unsigned long long)head;
- (BOOL)hasEnoughDataForBytes:(unsigned long long)bytes;
- (const char *)bytesAtHead:(long long)head;
- (unsigned long long)offset;
- (void)setOffset:(unsigned long long)offset;
@end

#endif /* FBAssetLinearReader_h */
