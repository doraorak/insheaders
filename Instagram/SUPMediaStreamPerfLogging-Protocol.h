//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SUPMediaStreamPerfLogging_Protocol_h
#define SUPMediaStreamPerfLogging_Protocol_h
@import Foundation;

@protocol SUPMediaStreamPerfLogging <NSObject>

@property (nonatomic) BOOL isLive;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *deviceBuildType;
@property (retain, nonatomic) NSString *socVersion;
@property (retain, nonatomic) NSString *buildFlavor;
@property (retain, nonatomic) NSString *coldStartSessionId;
@property (retain, nonatomic) NSString *warmStartSessionId;
@property (retain, nonatomic) NSObject<SUPMediaStreamPerfLogging> *secondaryPerfLogger;

/* instance methods */
- (void)start;
- (void)failWithReason:(id)reason;
- (void)cancelWithReason:(id)reason;
- (void)linkedDeviceManagerStartRequest;
- (void)linkedDeviceManagerStarted;
- (void)softAPConnectionRequest;
- (void)promptShown;
- (void)promptAccepted;
- (void)softAPConnected;
- (void)mediaStreamServiceStartRequest;
- (void)mediaStreamServiceStarted;
- (void)mediaStreamServiceConnectionRequest;
- (void)mediaStreamServiceConnected;
- (void)requestMediaStreamStart;
- (BOOL)videoFrameReceived;
- (BOOL)videoFrameRendered;
@end

#endif /* SUPMediaStreamPerfLogging_Protocol_h */