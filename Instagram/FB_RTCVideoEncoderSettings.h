//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FB_RTCVideoEncoderSettings_h
#define FB_RTCVideoEncoderSettings_h
@import Foundation;

@class NSString;

@interface FB_RTCVideoEncoderSettings : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned short width;
@property (nonatomic) unsigned short height;
@property (nonatomic) unsigned int startBitrate;
@property (nonatomic) unsigned int maxBitrate;
@property (nonatomic) unsigned int minBitrate;
@property (nonatomic) unsigned int maxFramerate;
@property (nonatomic) unsigned int qpMax;
@property (nonatomic) unsigned long long mode;

/* instance methods */
@end

#endif /* FB_RTCVideoEncoderSettings_h */