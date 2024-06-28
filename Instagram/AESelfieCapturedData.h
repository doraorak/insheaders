//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AESelfieCapturedData_h
#define AESelfieCapturedData_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSNumber, NSURL;

@interface AESelfieCapturedData : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSURL *videoURL;
@property (readonly, copy, nonatomic) NSData *singleFrameImageData;
@property (readonly, copy, nonatomic) NSArray *scaledFramesImageDataURLs;
@property (readonly, copy, nonatomic) NSNumber *fileSize;
@property (readonly, copy, nonatomic) NSNumber *duration;
@property (readonly, copy, nonatomic) NSNumber *bitRate;
@property (readonly, copy, nonatomic) NSNumber *height;
@property (readonly, copy, nonatomic) NSNumber *width;

/* instance methods */
- (id)initWithVideoURL:(id)url singleFrameImageData:(id)data scaledFramesImageDataURLs:(id)urls fileSize:(id)size duration:(id)duration bitRate:(id)rate height:(id)height width:(id)width;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* AESelfieCapturedData_h */
