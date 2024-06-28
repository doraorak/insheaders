//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadActivityAnnouncement_h
#define IGDirectThreadActivityAnnouncement_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface IGDirectThreadActivityAnnouncement : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_action_actionLogTitle;
  NSArray *_action_actionTextAttributes;
  NSArray *_action_actionTextParts;
  BOOL _action_hiddenInThread;
  NSString *_action_actionLogType;
  NSString *_voip_videoCallId;
  NSString *_voip_serverInfoData;
  long long _voip_voipEventType;
  NSString *_voip_voipTitle;
  NSArray *_voip_voipTextAttributes;
  BOOL _voip_threadHasAudioOnlyCall;
  BOOL _voip_didJoin;
}

/* class methods */
+ (id)actionWithActionLogTitle:(id)title actionTextAttributes:(id)attributes actionTextParts:(id)parts hiddenInThread:(BOOL)thread actionLogType:(id)type;
+ (id)voipWithVideoCallId:(id)id serverInfoData:(id)data voipEventType:(long long)type voipTitle:(id)title voipTextAttributes:(id)attributes threadHasAudioOnlyCall:(BOOL)call didJoin:(BOOL)join;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectThreadActivityAnnouncement_h */
