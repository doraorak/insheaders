//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCoWatchMediaState_h
#define IGCoWatchMediaState_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGCoWatchItem.h"
#include "IGCoWatchMediaInfo.h"
#include "IGCoWatchUser.h"

@class NSString;

@interface IGCoWatchMediaState : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGCoWatchUser *_play_user;
  IGCoWatchMediaInfo *_play_mediaInfo;
  NSString *_play_sequence;
  NSString *_play_tabSource;
  NSString *_play_adminMessage;
  NSString *_play_actorID;
  NSString *_play_seedReelId;
  IGCoWatchUser *_pause_user;
  IGCoWatchMediaInfo *_pause_mediaInfo;
  NSString *_pause_sequence;
  IGCoWatchUser *_stop_user;
  NSString *_stop_mediaId;
  NSString *_stop_sequence;
  IGCoWatchItem *_updateContent_item;
  NSString *_failToLoadContent_mediaId;
  NSString *_failToLoadContent_title;
  NSString *_failToLoadContent_subtitle;
}

/* class methods */
+ (id)failToLoadContentWithMediaId:(id)id title:(id)title subtitle:(id)subtitle;
+ (id)pauseWithUser:(id)user mediaInfo:(id)info sequence:(id)sequence;
+ (id)playWithUser:(id)user mediaInfo:(id)info sequence:(id)sequence tabSource:(id)source adminMessage:(id)message actorID:(id)id seedReelId:(id)id;
+ (id)stopWithUser:(id)user mediaId:(id)id sequence:(id)sequence;
+ (id)updateContentWithItem:(id)item;

/* instance methods */
@end

#endif /* IGCoWatchMediaState_h */