//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAggregatedMediaSectionController_h
#define IGDirectAggregatedMediaSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "IGDirectAggregatedMediaChannelContext.h"
#include "IGListDisplayDelegate-Protocol.h"
#include "IGListWorkingRangeDelegate-Protocol.h"

@class IGDirectThreadKey, IGMediaPreloader, IGUserSession, NSNumber, NSString;
@protocol IGDirectAggregatedMediaSectionControllerDelegate, IGDirectCameraReplying><IGDirectMessageReplying;

@interface IGDirectAggregatedMediaSectionController : IGListGenericSectionController<IGListWorkingRangeDelegate, IGListDisplayDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMediaPreloader *_mediaPreloader;
  IGDirectThreadKey *_threadKey;
  NSString *_threadThemeId;
  unsigned long long _style;
  NSObject<IGDirectCameraReplying><IGDirectMessageReplying> *_replyHandler;
  NSString *_analyticsModule;
  BOOL _canForward;
  BOOL _canReplyToMedia;
  NSNumber *_consistentThreadFbid;
  IGDirectAggregatedMediaChannelContext *_channelContext;
}

@property (weak, nonatomic) NSObject<IGDirectAggregatedMediaSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session threadKey:(id)key threadThemeId:(id)id style:(unsigned long long)style replyHandler:(id)handler canForward:(BOOL)forward canReplyToMedia:(BOOL)media consistentThreadFbid:(id)fbid channelContext:(id)context analyticsModule:(id)module;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (void)_presentChainingForMedia:(id)media;
- (void)aggregatedMediaCellDidRequestSave:(id)save;
- (void)listAdapter:(id)adapter sectionControllerWillEnterWorkingRange:(id)range;
- (void)listAdapter:(id)adapter sectionControllerDidExitWorkingRange:(id)range;
- (void)mediaViewer:(id)viewer didSendText:(id)text quotedMessage:(id)message;
- (void)mediaViewerDidOpenCameraReply:(id)reply withSourceMedia:(id)media anchorView:(id)view messageId:(id)id productType:(long long)type;
- (void)mediaViewerDidTapGalleryToReply:(id)reply withSourceMedia:(id)media anchorView:(id)view messageId:(id)id embeddedPublishedMessage:(id)message productType:(long long)type;
- (void)mediaViewerDidTapStickersToReply:(id)reply embeddedPublishedMessage:(id)message productType:(long long)type;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
@end

#endif /* IGDirectAggregatedMediaSectionController_h */