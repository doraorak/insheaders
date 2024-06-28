//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSavedIGTVCollectionLoggingContext_h
#define IGSavedIGTVCollectionLoggingContext_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserSession, NSString;

@interface IGSavedIGTVCollectionLoggingContext : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_channelPK;
  NSString *_collectionPK;
}

@property (readonly, copy, nonatomic) NSString *analyticsModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session channelPK:(id)pk isIGTVOnly:(BOOL)igtvonly collectionPK:(id)pk;
- (void)notifyImpressionOfSuggestedBroadcast:(id)broadcast atPosition:(long long)position suggestedLiveCount:(long long)count entryPoint:(id)point;
- (id)loggingExtrasForMedia:(id)media;
- (void)logVideoTapWithMedia:(id)media fromComponent:(long long)component withSourceChannelType:(id)type videoPosition:(id)position;
- (id)impressionLoggingExtrasForMedia:(id)media component:(long long)component sourceChannelType:(id)type videoPosition:(id)position;
- (void)logVideoTapWithBroadcast:(id)broadcast availableBroadcastCount:(long long)count component:(long long)component sourceChannelType:(id)type videoPosition:(id)position;
- (id)impressionLoggingExtrasForBroadcast:(id)broadcast availableBroadcastCount:(long long)count component:(long long)component sourceChannelType:(id)type videoPosition:(id)position;
@end

#endif /* IGSavedIGTVCollectionLoggingContext_h */