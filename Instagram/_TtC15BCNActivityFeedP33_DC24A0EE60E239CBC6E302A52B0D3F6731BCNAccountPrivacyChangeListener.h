//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC15BCNActivityFeedP33_DC24A0EE60E239CBC6E302A52B0D3F6731BCNAccountPrivacyChangeListener_h
#define _TtC15BCNActivityFeedP33_DC24A0EE60E239CBC6E302A52B0D3F6731BCNAccountPrivacyChangeListener_h
@import Foundation;

#include "IGAccountPrivacyChangeListener-Protocol.h"

@interface _TtC15BCNActivityFeedP33_DC24A0EE60E239CBC6E302A52B0D3F6731BCNAccountPrivacyChangeListener : NSObject<IGAccountPrivacyChangeListener> { // (Swift)
  /* instance variables */
   onPrivacyChange;
}

/* instance methods */
- (void)didAcknowledgePrivacyToggleWarning;
- (void)userSession:(id)session didChangeToPrivacyStatus:(long long)status;
- (id)init;
@end

#endif /* _TtC15BCNActivityFeedP33_DC24A0EE60E239CBC6E302A52B0D3F6731BCNAccountPrivacyChangeListener_h */
