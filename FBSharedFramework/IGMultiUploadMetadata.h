//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMultiUploadMetadata_h
#define IGMultiUploadMetadata_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface IGMultiUploadMetadata : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  BOOL _segmentedVideo;
  NSString *_multiUploadSessionID;
  NSNumber *_sessionIndex;
  NSNumber *_sessionCount;
  NSString *_segmentedVideoGroupID;
  NSNumber *_segmentedVideoIndex;
  NSNumber *_segmentedVideoCount;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMultiUploadSessionID:(id)id sessionIndex:(id)index sessionCount:(id)count isSegmentedVideo:(BOOL)video segmentedVideoGroupID:(id)id segmentedVideoIndex:(id)index segmentedVideoCount:(id)count;
- (id)sharingInfo;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGMultiUploadMetadata_h */
