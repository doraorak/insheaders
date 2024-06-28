//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCreatorToolsValuePropHelpers_h
#define IGCreatorToolsValuePropHelpers_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IG4BLogger, IGBusinessConversionPrepareService, IGFacebookPageInfo, IGProAccountLoggingProvider, IGProConversionCategoriesPreloader, IGUserSession, NSString, UIViewController;

@interface IGCreatorToolsValuePropHelpers : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_entryPoint;
  IGFacebookPageInfo *_pageInfo;
  IGProConversionCategoriesPreloader *_categoryPreloader;
  IG4BLogger *_flowLogger;
  IGProAccountLoggingProvider *_loggingProvider;
  IGBusinessConversionPrepareService *_prepareService;
  BOOL _isProfessionalAccount;
  UIViewController *_valuePropViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session entryPoint:(id)point valuePropViewController:(id)controller;
- (void)categorySelectionViewController:(id)controller didCompleteWithResultModel:(id)model;
- (void)categorySelectionViewControllerDidDimiss:(id)dimiss;
- (void)businessConversionPrepareService:(id)service didFetchQuickConversionSetting:(id)setting;
- (void)_didTapCTAButton;
@end

#endif /* IGCreatorToolsValuePropHelpers_h */
