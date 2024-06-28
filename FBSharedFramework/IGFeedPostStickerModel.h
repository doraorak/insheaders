//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedPostStickerModel_h
#define IGFeedPostStickerModel_h
@import Foundation;

#include "IGFeedPostStickerAttachmentSpec.h"
#include "IGStickerModelType-Protocol.h"
#include "IGUpcomingEvent.h"
#include "IGUser.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol IGFeedPostStickerDelegate;

@interface IGFeedPostStickerModel : NSObject<NSSecureCoding, IGStickerModelType>

@property (readonly, copy, nonatomic) NSURL *userProfilePictureUrl;
@property (readonly, nonatomic) IGUser *user;
@property (readonly, nonatomic) NSArray *coauthors;
@property (readonly, nonatomic) IGUser *owningGroup;
@property (readonly, copy, nonatomic) NSString *caption;
@property (readonly, nonatomic) BOOL isArchive;
@property (readonly, nonatomic) BOOL isVideoMedia;
@property (readonly, nonatomic) BOOL isSidecarMedia;
@property (readonly, nonatomic) NSString *selectedPostId;
@property (readonly, nonatomic) BOOL hasProductTags;
@property (readonly, nonatomic) long long displayType;
@property (readonly, nonatomic) double bubbleCornerRadius;
@property (readonly, copy, nonatomic) NSURL *mediaImageUrl;
@property (readonly, nonatomic) double mediaAspectRatio;
@property (readonly, copy, nonatomic) NSString *mediaOwnerPk;
@property (readonly, copy, nonatomic) NSString *productType;
@property (readonly, nonatomic) BOOL hidePreviewImage;
@property (readonly, nonatomic) long long previewImageContentMode;
@property (readonly, nonatomic) BOOL hideIconImage;
@property (readonly, nonatomic) BOOL hideHeader;
@property (readonly, nonatomic) BOOL hideFooter;
@property (readonly, nonatomic) IGUpcomingEvent *upcomingEvent;
@property (readonly, nonatomic) IGFeedPostStickerAttachmentSpec *attachmentSpec;
@property (readonly, nonatomic) BOOL isResharedMediaIdOwnedByViewer;
@property (readonly, nonatomic) BOOL xpostEnabledForFeedReshare;
@property (readonly, nonatomic) double headerHeight;
@property (readonly, nonatomic) BOOL showProfilePictureBorder;
@property (readonly, weak, nonatomic) NSObject<IGFeedPostStickerDelegate> *delegate;
@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, nonatomic) BOOL includeInRecent;
@property (nonatomic) BOOL isBoostEligible;
@property (copy, nonatomic) NSString *stickerSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPk:(id)pk userProfilePictureUrl:(id)url user:(id)user caption:(id)caption displayType:(long long)type bubbleCornerRadius:(double)radius isArchive:(BOOL)archive isVideoMedia:(BOOL)media isSidecarMedia:(BOOL)media selectedPostId:(id)id hasProductTags:(BOOL)tags mediaImageUrl:(id)url mediaAspectRatio:(double)ratio mediaOwnerPk:(id)pk productType:(id)type hidePreviewImage:(BOOL)image previewImageContentMode:(long long)mode hideIconImage:(BOOL)image hideHeader:(BOOL)header hideFooter:(BOOL)footer upcomingEvent:(id)event attachmentSpec:(id)spec isResharedMediaIdOwnedByViewer:(BOOL)viewer coauthors:(id)coauthors xpostEnabledForFeedReshare:(BOOL)reshare headerHeight:(double)height showProfilePictureBorder:(BOOL)border delegate:(id)delegate;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGFeedPostStickerModel_h */