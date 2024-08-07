//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemTextCellLinkHandler_h
#define IGFeedItemTextCellLinkHandler_h
@import Foundation;

#include "IGFeedAdsDelaySkipPillCoordinator.h"
#include "IGFeedItemConfigurationType-Protocol.h"
#include "IGFeedItemLoggingProviderDelegate-Protocol.h"
#include "IGFeedItemTextCellDataSourceProtocol-Protocol.h"
#include "IGFeedItemTextCellDelegate-Protocol.h"
#include "IGFeedItemTextCellLinkHandlerDelegate-Protocol.h"
#include "IGFeedItemTextCellTouchHandlerProtocol-Protocol.h"

@class IGSponsoredSupportConfiguration, IGUserSession, NSString;
@protocol IGFeedItemLikeCountTextCellLinkHandlerDelegate, IGFeedItemPreviewCommentTextCellLinkHandlerDelegate;

@interface IGFeedItemTextCellLinkHandler : NSObject<IGFeedItemTextCellDelegate, IGFeedItemTextCellTouchHandlerProtocol> {
  /* instance variables */
  NSString *_module;
  NSObject<IGFeedItemConfigurationType> *_itemConfiguration;
  IGFeedAdsDelaySkipPillCoordinator *_adsDelaySkipPillCoordinator;
  NSObject<IGFeedItemTextCellLinkHandlerDelegate> *_legacyTextCellLinkHandlerDelegate;
  NSObject<IGFeedItemLikeCountTextCellLinkHandlerDelegate> *_likeCountTextCellLinkHandlerDelegate;
  NSObject<IGFeedItemPreviewCommentTextCellLinkHandlerDelegate> *_previewCommentTextCellLinkHandlerDelegate;
}

@property (retain, nonatomic) IGUserSession *userSession;
@property (weak, nonatomic) NSObject<IGFeedItemTextCellDataSourceProtocol> *dataSource;
@property (weak, nonatomic) NSObject<IGFeedItemLoggingProviderDelegate> *loggingDelegate;
@property (retain, nonatomic) IGSponsoredSupportConfiguration *sponsoredSupportConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session dataSource:(id)source loggingDelegate:(id)delegate sponsoredSupportConfiguration:(id)configuration feedItemConfiguration:(id)configuration adsDelaySkipPillCoordinator:(id)coordinator module:(id)module;
- (void)feedItemTextCell:(id)cell coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)feedItemTextCell:(id)cell coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
- (BOOL)feedItemTextCell:(id)cell willHandleTouch:(id)touch;
@end

#endif /* IGFeedItemTextCellLinkHandler_h */
