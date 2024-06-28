//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMPVideoData_h
#define FBMPVideoData_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol FBDepthData;

@interface FBMPVideoData : NSObject<NSObject>

@property (readonly, nonatomic) struct opaqueCMSampleBuffer * buffer;
@property (readonly, nonatomic) unsigned long long bufferTransform;
@property (readonly, nonatomic) struct { BOOL x0; BOOL x1; BOOL x2; unsigned long long x3; id x4; id x5; unsigned long long x6; BOOL x7; BOOL x8; BOOL x9; } metadata;
@property (readonly, nonatomic) NSObject<FBDepthData> *depthData;
@property (readonly, copy, nonatomic) NSDictionary *additionalData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)buffer bufferTransform:(unsigned long long)transform;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)buffer depthData:(id)data bufferTransform:(unsigned long long)transform metadata:(struct { BOOL x0; BOOL x1; BOOL x2; unsigned long long x3; id x4; id x5; unsigned long long x6; BOOL x7; BOOL x8; BOOL x9; })metadata;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)buffer depthData:(id)data bufferTransform:(unsigned long long)transform metadata:(struct { BOOL x0; BOOL x1; BOOL x2; unsigned long long x3; id x4; id x5; unsigned long long x6; BOOL x7; BOOL x8; BOOL x9; })metadata additionalData:(id)data;
- (void)dealloc;
@end

#endif /* FBMPVideoData_h */
