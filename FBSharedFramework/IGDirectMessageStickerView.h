//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageStickerView_h
#define IGDirectMessageStickerView_h
@import Foundation;

#include "UIView.h"
#include "IGChatStickerTypeProtocol-Protocol.h"
#include "IGConstrainedSizeStickerViewType-Protocol.h"
#include "IGDirectAudio.h"
#include "IGDirectAvatarView.h"
#include "IGDirectMessageCell.h"
#include "IGStickerViewType-Protocol.h"
#include "IGStoryStickerDeletable-Protocol.h"
#include "IGStoryStickerExportModel.h"
#include "IGTextButton.h"
#include "IGUserSession.h"
#include "IGVideoStickerViewType-Protocol.h"

@class IGDirectMessageSectionComponents, NSNumber, NSString, UILabel, UIView;
@protocol IGDirectMessageViewModelProtocol, IGDirectThreadViewListDataSource;

@interface IGDirectMessageStickerView : UIView<IGStickerViewType, IGChatStickerTypeProtocol, IGConstrainedSizeStickerViewType, IGStoryStickerDeletable, IGVideoStickerViewType> {
  /* instance variables */
  NSObject<IGDirectMessageViewModelProtocol> *_messageViewModel;
  NSString *_threadTitle;
  IGDirectMessageSectionComponents *_messageSectionComponents;
  NSObject<IGDirectThreadViewListDataSource> *_threadViewListDataSource;
  IGUserSession *_userSession;
  IGDirectAudio *_audio;
  UIView *_backgroundShadowView;
  UIView *_backgroundBubbleView;
  IGDirectAvatarView *_avatarView;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  UILabel *_headerActionLabel;
  UIView *_headerView;
  IGTextButton *_bottomJoinButtonView;
  UIView *_separator;
  IGDirectMessageCell *_messageCellView;
  UILabel *_messageCellHeaderLabel;
  IGDirectMessageCell *_previousMessageCellView;
  NSObject<IGDirectMessageViewModelProtocol> *_previousMessageViewModel;
  struct CGSize { double width; double height; } _previousMessageBubbleContentSize;
  double _playbackTime;
}

@property (readonly, nonatomic) IGStoryStickerExportModel *exportModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long chatStickerType;
@property (readonly, nonatomic) NSString *threadId;
@property (readonly, nonatomic) NSString *threadIdV2;
@property (readonly, nonatomic) NSNumber *audienceType;
@property (readonly, nonatomic) long long entryPoint;
@property (readonly, nonatomic) long long creationSource;
@property (readonly, nonatomic) long long chatStickerStickerType;
@property (readonly, nonatomic) NSString *messageId;
@property (readonly, nonatomic) long long chatStickerCreationAuthorType;
@property (readonly, nonatomic) NSString *contentType;
@property (nonatomic) BOOL isNonDeletable;
@property (nonatomic) BOOL mutedForComposition;
@property (readonly, nonatomic) BOOL isDynamic;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithMessageViewModel:(id)model threadTitle:(id)title threadAvatarProfileImage:(id)image subtitle:(id)subtitle threadTitleAttachment:(id)attachment threadIdV2:(id)v2 audienceType:(id)type chatStickerCreationAuthorType:(long long)type messageSectionComponents:(id)components threadViewListDataSource:(id)source userSession:(id)session audio:(id)audio previousMessageViewModel:(id)model;
- (void)layoutSubviews;
- (BOOL)_isMetaAIShareToStoryImprovementEnabled;
- (id)stickerView;
- (id)tapModelsForCompositionSize:(struct CGSize { double x0; double x1; })size;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (BOOL)constrainStickerWithBoundingBox;
- (double)minimumScale;
- (double)maximumScale;
- (id)asyncVideoClip;
- (id)asyncAudioClip;
- (id)asyncDynamicOverlayImageProvider;
- (void)setPlaybackRate:(double)rate time:(double)time atHostTime:(double)time;
- (double)playbackTime;
- (void)setPlaybackTime:(double)time;
@end

#endif /* IGDirectMessageStickerView_h */