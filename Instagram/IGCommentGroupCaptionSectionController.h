//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentGroupCaptionSectionController_h
#define IGCommentGroupCaptionSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGCommentGroupCaption.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGDefaultVerifiedFeedTheme.h"
#include "IGFeedItemLoggingProviderDelegate-Protocol.h"
#include "IGMediaUpdatedListener-Protocol.h"
#include "IGStorySeenStateStoreListener-Protocol.h"
#include "IGTranslationNetworkDataSourceDelegate-Protocol.h"

@class IGCommentModel, IGHeaderFooterSupplementaryViewSource, IGMedia, IGSponsoredSupportConfiguration, IGTranslationNetworkDataSource, IGUserSession, NSString, UINavigationController;
@protocol IGCommentSectionDelegate;

@interface IGCommentGroupCaptionSectionController : IGListSectionController<IGCoreTextLinkHandler, IGMediaUpdatedListener, IGTranslationNetworkDataSourceDelegate, IGStorySeenStateStoreListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGMedia *_media;
  NSString *_analyticsModule;
  BOOL _hideProfileImage;
  IGCommentGroupCaption *_groupCaption;
  IGDefaultVerifiedFeedTheme *_feedTheme;
  NSObject<IGFeedItemLoggingProviderDelegate> *_loggingDelegate;
  IGSponsoredSupportConfiguration *_sponsoredSupportConfiguration;
  IGTranslationNetworkDataSource *_translationDataSource;
  BOOL _translateCaptionOnLoad;
  IGHeaderFooterSupplementaryViewSource *_compositedViewSource;
}

@property (readonly, nonatomic) IGCommentModel *commentModel;
@property (weak, nonatomic) NSObject<IGCommentSectionDelegate> *delegate;
@property (nonatomic) BOOL expanded;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithUserSession:(id)session media:(id)media analyticsModule:(id)module loggingDelegate:(id)delegate sponsoredSupportConfiguration:(id)configuration captionOption:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })option isModalViewController:(BOOL)controller;
- (void)mediaWasUpdated:(id)updated withChange:(long long)change isFromPreview:(BOOL)preview;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (id)supplementaryViewSource;
- (id)commentForCommentCell:(id)cell;
- (id)commentCellForComment:(id)comment;
- (void)didSingleTapOnCommentCell:(id)cell;
- (void)commentGroupCaptionContentViewDidTapUser:(id)user;
- (void)commentGroupCaptionContentViewDidTapTruncatedCaption;
- (void)commentGroupCaptionContentViewDidTapTranslate;
- (void)didTapLikeButtonOnCommentGroupCaptionView:(id)view;
- (void)didTapReactionCountButtonOnCommentGroupCaptionView:(id)view;
- (void)didLongPressLikeButtonOnCommentGroupCaptionView:(id)view;
- (void)didEndLongPressLikeButtonOnCommentGroupCaptionView:(id)view;
- (void)didTapProfilePhotoView:(id)view;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
- (void)coreTextView:(id)view didLongTapOnString:(id)string URL:(id)url;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)translationNetworkDataSource:(id)source didFailWithError:(id)error;
- (void)translationNetworkDataSource:(id)source didLoadTranslations:(id)translations;
- (void)translationNetworkDataSource:(id)source didFailToLoadTranslationForCommentIds:(id)ids;
- (void)storySeenStateStoreDidUpdateReelPK:(id)pk;
- (BOOL)isExpanded;
@end

#endif /* IGCommentGroupCaptionSectionController_h */