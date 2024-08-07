//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARCaptureEventService_h
#define FBARCaptureEventService_h
@import Foundation;

@protocol {shared_ptr<facebook::arservices::apple::CaptureEventInput>="__ptr_"^{CaptureEventInput}"__cntrl_"^{__shared_weak_count}};

@interface FBARCaptureEventService : NSObject {
  /* instance variables */
  struct shared_ptr<facebook::arservices::apple::CaptureEventInput> { struct CaptureEventInput *__ptr_; struct __shared_weak_count *__cntrl_; } _eventInput;
}

/* instance methods */
- (id)init;
@end

#endif /* FBARCaptureEventService_h */
