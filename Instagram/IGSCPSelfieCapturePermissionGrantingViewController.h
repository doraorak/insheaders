//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSCPSelfieCapturePermissionGrantingViewController_h
#define IGSCPSelfieCapturePermissionGrantingViewController_h
@import Foundation;

#include "SCPMultiSectionPermissionGrantingViewController.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGAnalyticsModule-Protocol.h"

@class IGSessionContext, NSNumber, NSString;

@interface IGSCPSelfieCapturePermissionGrantingViewController : SCPMultiSectionPermissionGrantingViewController<IGAnalyticsModule> {
  /* instance variables */
  IGSessionContext *_context;
  NSString *_instanceID;
  NSString *_userID;
  NSString *_product;
  NSNumber *_flowID;
  NSString *_avSessionID;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context instanceID:(id)id product:(id)product flowID:(id)id avSessionID:(id)id;
- (void)viewDidAppear:(BOOL)appear;
- (id)analyticsModule;
@end

#endif /* IGSCPSelfieCapturePermissionGrantingViewController_h */
