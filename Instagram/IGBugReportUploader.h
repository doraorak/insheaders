//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBugReportUploader_h
#define IGBugReportUploader_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGBugReportingSettings.h"

@class PNPandoGraphQLService;
@protocol IGBugReportUploadResultPresenterProtocol;

@interface IGBugReportUploader : NSObject {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  PNPandoGraphQLService *_pandoGraphQLService;
  IGBugReportingSettings *_settings;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  NSObject<IGBugReportUploadResultPresenterProtocol> *_uploadResultPresenter;
  BOOL _shouldShowBugInfo;
  BOOL _shouldPersistLastBugReportId;
}

/* class methods */
+ (id)_bugReportMiscInfoWithMetadataAttachment:(id)attachment deviceReport:(id)report clientServerJoinKey:(id)key;
+ (id)_bugReportMiscInfoWithClientServerJoinKey:(id)key;
+ (id)_bugReportAttachmentFileNamesWithFiles:(id)files;

/* instance methods */
- (id)initWithNetworker:(id)networker pandoGraphQLService:(id)qlservice bugReportSettings:(id)settings analyticsLogger:(id)logger uploadResultPresenter:(id)presenter shouldShowBugInfo:(BOOL)info shouldPersistLastBugReportId:(BOOL)id;
@end

#endif /* IGBugReportUploader_h */
