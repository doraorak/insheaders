//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSCPIDCapture_h
#define IGSCPIDCapture_h
@import Foundation;

#include "IGSCPIDCaptureFlowControllerDataSourceImpl.h"
#include "NSObject-Protocol.h"
#include "SCPIDCaptureFlowController.h"

@class NSNumber, NSString;
@protocol IGSCPIDCaptureFlowDelegate;

@interface IGSCPIDCapture : NSObject<NSObject> {
  /* instance variables */
  NSString *_product;
  NSNumber *_flowID;
  NSString *_avSessionID;
  SCPIDCaptureFlowController *_captureFlowController;
  IGSCPIDCaptureFlowControllerDataSourceImpl *_dataSource;
  NSObject<IGSCPIDCaptureFlowDelegate> *_flowDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session product:(id)product flowID:(id)id avSessionID:(id)id;
- (void)navigationDidEndFlow:(id)flow currentViewController:(id)controller isCancelled:(BOOL)cancelled;
- (void)IDCaptureFlowControllerDidFinishFlow:(id)flow withCaptureCase:(id)case;
- (void)IDCaptureFlowControllerDidCancelFlow:(id)flow;
@end

#endif /* IGSCPIDCapture_h */
