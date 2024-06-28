//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNMetadataCollector_h
#define SNMetadataCollector_h
@import Foundation;

#include "SNAdMetadata.h"
#include "SNInteractivityMetadata.h"
#include "SNMetadataCollecting-Protocol.h"
#include "SNPerformanceMetadata.h"
#include "SNPlaybackMetadata.h"
#include "SNPlaybackStateMetadata.h"

@class NSPointerArray, NSString;

@interface SNMetadataCollector : NSObject<SNMetadataCollecting> {
  /* instance variables */
  NSPointerArray *_metadataProviders;
  SNPerformanceMetadata *_performanceMetadata;
  SNAdMetadata *_adMetadata;
  SNPlaybackMetadata *_playbackMetadata;
  SNPlaybackStateMetadata *_playbackStateMetadata;
  SNInteractivityMetadata *_interactivityMetadata;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)addMetadataProvider:(id)provider;
- (id)collectMetadata;
- (void)setPerformanceMetadata:(id)metadata;
- (void)setAdMetadata:(id)metadata;
- (void)setPlaybackMetadata:(id)metadata;
- (void)setPlaybackStateMetadata:(id)metadata;
- (void)setIntractivityMetadata:(id)metadata;
@end

#endif /* SNMetadataCollector_h */
