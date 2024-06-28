//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGCameraControlPanel25IGCameraControlPanelLever_h
#define _TtC20IGCameraControlPanel25IGCameraControlPanelLever_h
@import Foundation;

#include "_TtP23MetaCaptureControlPanel16MetaCaptureLever_-Protocol.h"

@interface _TtC20IGCameraControlPanel25IGCameraControlPanelLever : NSObject<_TtP23MetaCaptureControlPanel16MetaCaptureLever_> {
  /* instance variables */
   delegate;
}

@property (nonatomic, readonly) long long disruptionType;
@property (nonatomic) BOOL wantsEnabled;
@property (nonatomic) BOOL canHaveEnabled;

/* instance methods */
- (BOOL)pull;
- (void)unpull;
- (BOOL)canonicalIsEnabled;
- (id)init;
@end

#endif /* _TtC20IGCameraControlPanel25IGCameraControlPanelLever_h */