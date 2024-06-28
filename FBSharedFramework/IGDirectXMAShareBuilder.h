//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectXMAShareBuilder_h
#define IGDirectXMAShareBuilder_h
@import Foundation;

#include "IGDirectFaviconUrlInfo.h"
#include "IGDirectImageInfo.h"
#include "IGDirectMediaResolverContext.h"
#include "IGDirectPreviewImmersiveUrlInfo.h"
#include "IGPhoto.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, UIColor;

@interface IGDirectXMAShareBuilder : NSObject {
  /* instance variables */
  long long _xmaLayoutType;
  NSString *_itemType;
  NSString *_attachmentId;
  long long _attachmentIndex;
  NSURL *_previewURL;
  IGPhoto *_previewURLImageVersions;
  NSURL *_playableURL;
  NSString *_previewMediaId;
  struct CGSize { double width; double height; } _previewSize;
  IGDirectImageInfo *_previewIconInfo;
  long long _previewIconType;
  long long _previewLayoutType;
  NSArray *_previewExtraUrlsInfo;
  long long _previewImageDecorationType;
  long long _previewImageFallbackType;
  IGDirectPreviewImmersiveUrlInfo *_previewImmersiveUrlInfo;
  BOOL _isQuoted;
  NSString *_titleText;
  long long _maxTitleNumOfLines;
  NSString *_subtitleText;
  long long _maxSubtitleNumOfLines;
  long long _subtitleDecorationType;
  NSString *_headerIconURLMimeType;
  NSArray *_headerIconURLs;
  long long _headerIconLayoutType;
  long long _headerIconsCount;
  NSString *_collapsibleId;
  struct CGSize { double width; double height; } _headerIconSize;
  NSString *_headerTitleText;
  NSString *_headerSubtitleText;
  NSURL *_accessoryPreviewURL;
  NSURL *_accessoryPlayableURL;
  UIColor *_textColor;
  NSString *_footerBodyText;
  NSString *_groupName;
  NSURL *_targetURL;
  NSString *_targetURLTitle;
  NSString *_accessibilitySummaryText;
  NSString *_accessibilitySummaryHint;
  BOOL _isSharable;
  BOOL _isBorderless;
  BOOL _shouldRespectServerPreviewSize;
  NSArray *_ctaButtons;
  long long _faviconStyle;
  IGDirectFaviconUrlInfo *_faviconUrlInfo;
  NSURL *_playableAudioURL;
  NSArray *_musicPreviewCountriesAllowed;
  NSNumber *_overlayIconGlyph;
  NSString *_overlayTitle;
  NSString *_overlayDescription;
  NSDate *_expiringAtDate;
  NSArray *_usersInFacepile;
  NSArray *_facepileViewURLs;
  long long _verifiedType;
  long long _collectionSaveIconState;
  BOOL _canReply;
  long long _countDownTimeStampMs;
  NSDictionary *_loggingExtras;
  NSNumber *_nuxType;
  NSString *_videoDashManifest;
  BOOL _shouldRefresh;
  NSString *_commentOverlayUsername;
  NSString *_commentOverlayText;
  NSURL *_commentOverlaySenderProfilePictureUrl;
  NSString *_commentOverlayCommentCount;
  NSString *_forwardingSerializedContentRef;
  IGDirectMediaResolverContext *_mediaResolverContext;
  IGDirectMediaResolverContext *_thumbnailResolverContext;
  BOOL _shouldGreyOutReplyPreview;
  NSNumber *_uploadMosClientSide;
}

/* class methods */
+ (id)directXMAShareFromExistingDirectXMAShare:(id)xmashare;

/* instance methods */
- (id)initWithItemType:(id)type facepileViewURLs:(id)urls;
- (id)build;
- (id)withXmaLayoutType:(long long)type;
- (id)withItemType:(id)type;
- (id)withAttachmentId:(id)id;
- (id)withAttachmentIndex:(long long)index;
- (id)withPreviewURL:(id)url;
- (id)withPreviewURLImageVersions:(id)versions;
- (id)withPlayableURL:(id)url;
- (id)withPreviewMediaId:(id)id;
- (id)withPreviewSize:(struct CGSize { double x0; double x1; })size;
- (id)withPreviewIconInfo:(id)info;
- (id)withPreviewIconType:(long long)type;
- (id)withPreviewLayoutType:(long long)type;
- (id)withPreviewExtraUrlsInfo:(id)info;
- (id)withPreviewImageDecorationType:(long long)type;
- (id)withPreviewImageFallbackType:(long long)type;
- (id)withPreviewImmersiveUrlInfo:(id)info;
- (id)withIsQuoted:(BOOL)quoted;
- (id)withTitleText:(id)text;
- (id)withMaxTitleNumOfLines:(long long)lines;
- (id)withSubtitleText:(id)text;
- (id)withMaxSubtitleNumOfLines:(long long)lines;
- (id)withSubtitleDecorationType:(long long)type;
- (id)withHeaderIconURLMimeType:(id)type;
- (id)withHeaderIconURLs:(id)urls;
- (id)withHeaderIconLayoutType:(long long)type;
- (id)withHeaderIconsCount:(long long)count;
- (id)withCollapsibleId:(id)id;
- (id)withHeaderIconSize:(struct CGSize { double x0; double x1; })size;
- (id)withHeaderTitleText:(id)text;
- (id)withHeaderSubtitleText:(id)text;
- (id)withAccessoryPreviewURL:(id)url;
- (id)withAccessoryPlayableURL:(id)url;
- (id)withTextColor:(id)color;
- (id)withFooterBodyText:(id)text;
- (id)withGroupName:(id)name;
- (id)withTargetURL:(id)url;
- (id)withTargetURLTitle:(id)urltitle;
- (id)withAccessibilitySummaryText:(id)text;
- (id)withAccessibilitySummaryHint:(id)hint;
- (id)withIsSharable:(BOOL)sharable;
- (id)withIsBorderless:(BOOL)borderless;
- (id)withShouldRespectServerPreviewSize:(BOOL)size;
- (id)withCtaButtons:(id)buttons;
- (id)withFaviconStyle:(long long)style;
- (id)withFaviconUrlInfo:(id)info;
- (id)withPlayableAudioURL:(id)url;
- (id)withMusicPreviewCountriesAllowed:(id)allowed;
- (id)withOverlayIconGlyph:(id)glyph;
- (id)withOverlayTitle:(id)title;
- (id)withOverlayDescription:(id)description;
- (id)withExpiringAtDate:(id)date;
- (id)withUsersInFacepile:(id)facepile;
- (id)withFacepileViewURLs:(id)urls;
- (id)withVerifiedType:(long long)type;
- (id)withCollectionSaveIconState:(long long)state;
- (id)withCanReply:(BOOL)reply;
- (id)withCountDownTimeStampMs:(long long)ms;
- (id)withLoggingExtras:(id)extras;
- (id)withNuxType:(id)type;
- (id)withVideoDashManifest:(id)manifest;
- (id)withShouldRefresh:(BOOL)refresh;
- (id)withCommentOverlayUsername:(id)username;
- (id)withCommentOverlayText:(id)text;
- (id)withCommentOverlaySenderProfilePictureUrl:(id)url;
- (id)withCommentOverlayCommentCount:(id)count;
- (id)withForwardingSerializedContentRef:(id)ref;
- (id)withMediaResolverContext:(id)context;
- (id)withThumbnailResolverContext:(id)context;
- (id)withShouldGreyOutReplyPreview:(BOOL)preview;
- (id)withUploadMosClientSide:(id)side;
@end

#endif /* IGDirectXMAShareBuilder_h */
