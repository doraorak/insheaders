//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoCallStopScreenSharingViewController_h
#define IGVideoCallStopScreenSharingViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGVideoCallStopScreenSharingView.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGVideoCallStopScreenSharingViewControllerDelegate;

@interface IGVideoCallStopScreenSharingViewController : IGViewController<NSObject> {
  /* instance variables */
  NSObject<IGVideoCallStopScreenSharingViewControllerDelegate> *_delegate;
  IGVideoCallStopScreenSharingView *_stopScreenSharingView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUser:(id)user delegate:(id)delegate;
- (void)stopScreenSharingViewDidTapStopButton:(id)button;
@end

#endif /* IGVideoCallStopScreenSharingViewController_h */
