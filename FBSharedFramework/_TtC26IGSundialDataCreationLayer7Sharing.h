//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC26IGSundialDataCreationLayer7Sharing_h
#define _TtC26IGSundialDataCreationLayer7Sharing_h
@import Foundation;

#include "IGAPIBrandedContentGatingInfo.h"
#include "IGAPIPollSticker.h"
#include "IGBrandedContentMedia.h"
#include "IGCaptionAddOnCreationModel.h"
#include "IGCoauthorUserTagGroup.h"
#include "IGLocationMetadata.h"
#include "IGMLMediaGroup.h"
#include "IGMediaShareToDirectPreviewConfiguration.h"
#include "IGSundialCreationTemplateMetadata.h"
#include "IGSundialShoppingMetadata.h"
#include "IGUser.h"
#include "IGUsertagGroup.h"

@class NSArray, NSDictionary, NSString;

@interface _TtC26IGSundialDataCreationLayer7Sharing : NSObject { // (Swift)
  /* instance variables */
   upcomingEventId;
   _scheduleMetadata;
   _fundraiser;
   _publicChatsWelcomeVideoMetadata;
   _captionAddOnInfo;
   _linkedHighlightModel;
   templateMetadataData;
}

@property (nonatomic, retain) _TtC26IGSundialDataCreationLayer14SharingOptions *options;
@property (nonatomic, copy) NSArray *tags;
@property (nonatomic, retain) IGUsertagGroup *userTags;
@property (nonatomic, retain) IGCoauthorUserTagGroup *coauthorUserTags;
@property (nonatomic) long long audienceControlType;
@property (nonatomic) long long profileDisplayControlType;
@property (nonatomic, copy) NSDictionary *facebookSharingOptions;
@property (nonatomic, retain) IGBrandedContentMedia *brandedContent;
@property (nonatomic, copy) NSString *sourceMediaRankingToken;
@property (nonatomic, copy) NSString *ctaButtonInfoType;
@property (nonatomic, copy) NSString *acrTemplateClipsMediaId;
@property (nonatomic, copy) NSString *renamedOriginalAudioTitle;
@property (nonatomic, copy) NSString *parentTemplateClipsMediaId;
@property (nonatomic, copy) NSString *metaVerifiedLink;
@property (nonatomic, copy) NSString *thirdPartySharingAppId;
@property (nonatomic, copy) NSArray *geoGatingCountries;
@property (nonatomic) long long fanclubVideoType;
@property (nonatomic) BOOL shouldLinkHighlight;
@property (nonatomic, retain) IGAPIBrandedContentGatingInfo *audienceRestrictions;
@property (nonatomic, retain) IGLocationMetadata *locationMetadata;
@property (nonatomic, retain) IGUser *sponsorPartner;
@property (nonatomic, retain) IGSundialShoppingMetadata *shoppingMetadata;
@property (nonatomic, retain) IGAPIPollSticker *commentPollModel;
@property (nonatomic, retain) IGMLMediaGroup *acrMediaGroup;
@property (nonatomic, retain) IGCaptionAddOnCreationModel *captionAddOn;
@property (nonatomic, retain) IGMediaShareToDirectPreviewConfiguration *shareToDirectConfig;
@property (nonatomic, retain) IGSundialCreationTemplateMetadata *templateMetadata;

/* instance methods */
- (id)init;
@end

#endif /* _TtC26IGSundialDataCreationLayer7Sharing_h */
