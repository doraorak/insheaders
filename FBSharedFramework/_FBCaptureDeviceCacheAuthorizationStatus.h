//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _FBCaptureDeviceCacheAuthorizationStatus_h
#define _FBCaptureDeviceCacheAuthorizationStatus_h
@import Foundation;

@class NSNotificationCenter;

@interface _FBCaptureDeviceCacheAuthorizationStatus : NSObject {
  /* instance variables */
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
  long long _authorizationStatus;
  BOOL _didEnterBackground;
  Class _captureDeviceClass;
  long long _mediaType;
  NSNotificationCenter *_notificationCenter;
}

/* instance methods */
- (id)initWithCaptureDeviceClass:(Class)class mediaType:(long long)type notificationCenter:(id)center;
- (long long)authorizationStatus;
- (void)fb_didEnterBackgroundNotification:(id)notification;
- (void)fb_willEnterForegroundNotification:(id)notification;
@end

#endif /* _FBCaptureDeviceCacheAuthorizationStatus_h */
