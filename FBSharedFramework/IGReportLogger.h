//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGReportLogger_h
#define IGReportLogger_h
@import Foundation;

#include "IGUserSession.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGReportLogger : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  NSString *_frxSessionID;
  NSString *_entryPoint;
  unsigned long long _contentType;
  NSString *_objectValue;
  NSString *_location;
  NSString *_loggingExtrasJSON;
  NSString *_local;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module frxSessionID:(id)id entryPoint:(unsigned long long)point objectType:(unsigned long long)type objectValue:(id)value location:(unsigned long long)location extras:(id)extras;
- (void)ixtNetworkEventStarted;
- (void)ixtNetworkEventFinished;
- (void)ixtNetworkEventFailedWithError:(id)error;
- (void)ixtNetworkEventCanceled;
- (void)ixtBottomSheetDidClose;
@end

#endif /* IGReportLogger_h */