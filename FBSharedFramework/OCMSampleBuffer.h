//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OCMSampleBuffer_h
#define OCMSampleBuffer_h
@import Foundation;

@class NSDictionary, NSString;

@interface OCMSampleBuffer : NSObject {
  /* instance variables */
  struct __CVBuffer * _cachedImageBuffer;
  NSString *_captureDeviceID;
}

@property (readonly, nonatomic) struct opaqueCMSampleBuffer * sampleBuffer;
@property (readonly, nonatomic) struct __CVBuffer * imageBuffer;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) long long captureDevicePosition;
@property (readonly, nonatomic) NSString *captureDeviceType;

/* instance methods */
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)buffer metadata:(id)metadata captureDevicePosition:(long long)position captureDeviceType:(id)type captureDeviceID:(id)id;
- (void)dealloc;
@end

#endif /* OCMSampleBuffer_h */