//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerSignalsCoreManager_h
#define IGSundialViewerSignalsCoreManager_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGAnalyticsSessionIdProvider, IGDiskManager, IGObjectDiskStorage, NSArray, NSMutableArray, NSString;
@protocol IGScheduler><IGSynchronousScheduler;

@interface IGSundialViewerSignalsCoreManager : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGScheduler><IGSynchronousScheduler> *_queueScheduler;
  NSString *_currentSessionId;
  IGAnalyticsSessionIdProvider *_sessionIdProvider;
  double _currentSessionStartTime;
  NSMutableArray *_reelsVisitTimestamps;
  NSMutableArray *_profileVisitTimestamps;
  NSMutableArray *_commentVisitTimestamps;
  struct { unsigned long long commentCount; unsigned long long likeCount; unsigned long long totalRelevantLikeCount; unsigned long long profileViewL0C100; unsigned long long profileViewL1C100; unsigned long long profileViewL2C100; unsigned long long profileViewL5C100; unsigned long long profileViewL7C100; unsigned long long profileViewEventCount; unsigned long long commentViewL0C100; unsigned long long commentViewL1C100; unsigned long long commentViewL2C100; unsigned long long commentViewL5C100; unsigned long long commentViewL7C100; unsigned long long commentViewEventCount; unsigned long long reelsViewL0C100; unsigned long long reelsViewL1C100; unsigned long long reelsViewL2C100; unsigned long long reelsViewL5C100; unsigned long long reelsViewL7C100; unsigned long long reelsViewEventCount; unsigned long long triggerEventHour; unsigned long long triggerEventWeekDay; } _nonInteractiveSignals;
  NSArray *_productSignalsTrackers;
  BOOL _newDataToWrite;
  BOOL _hasReadFromDisk;
  IGDiskManager *_diskManager;
  IGObjectDiskStorage *_trackingMetadataFile;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDiskManager:(id)manager launcherSet:(id)set sessionIdProvider:(id)provider;
- (void)notifyOnLike:(id)like;
- (void)notifyOnMoreInfo:(id)info;
- (void)notifyOnAudioTrending:(id)trending;
- (void)notifyOnFollowCreator:(id)creator;
- (void)notifyOnLoopPlayback:(id)playback;
- (void)notifyOnOpenComments:(id)comments;
- (void)notifyOnOpenProfile:(id)profile;
- (void)notifyOnOpenShareSheet:(id)sheet;
- (void)notifyOnPrepareModelForVideo:(id)video;
- (void)notifyOnSave:(id)save;
- (void)_applicationDidEnterBackground:(id)background;
@end

#endif /* IGSundialViewerSignalsCoreManager_h */