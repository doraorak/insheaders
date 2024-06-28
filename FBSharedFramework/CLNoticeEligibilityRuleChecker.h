//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CLNoticeEligibilityRuleChecker_h
#define CLNoticeEligibilityRuleChecker_h
@import Foundation;

#include "IGFacebookServiceHelper.h"
#include "IGUserSession.h"
#include "_TtC14CLNoticeLogger14CLNoticeLogger.h"
#include "_TtC21IGXCLSettingsProvider18CLSettingsProvider.h"

@interface CLNoticeEligibilityRuleChecker : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  _TtC21IGXCLSettingsProvider18CLSettingsProvider *_settingsProvider;
  _TtC14CLNoticeLogger14CLNoticeLogger *_logger;
  IGFacebookServiceHelper *_facebookServiceHelper;
}

/* instance methods */
- (id)initWithUserSession:(id)session settingsProvider:(id)provider;
@end

#endif /* CLNoticeEligibilityRuleChecker_h */