//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEditedPost_h
#define IGEditedPost_h
@import Foundation;

#include "IGEditedPostSelectedAudio.h"

@class IGAPIBrandedContentGatingInfo, IGAPIChannelsPreviewDict, IGAPIIGBioProductDict, IGAPILocationDict, IGBrandedContentMedia, IGCoauthorUserTagGroup, IGFBUserTagGroup, IGMedia, IGMediaCroppingInfo, IGProductItemTagGroup, IGUserSession, IGUsertagGroup, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface IGEditedPost : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  BOOL _brandedContentStartedNil;
  IGUsertagGroup *_usertags;
  NSMutableDictionary *_postUsertags;
  NSMutableDictionary *_postFBUserTags;
  NSMutableDictionary *_postProductItemTags;
  IGAPIIGBioProductDict *_igBioProduct;
  NSMutableDictionary *_postAccessibilityCaptions;
  NSMutableDictionary *_postProductCollectionTags;
  IGCoauthorUserTagGroup *_coauthorUserTags;
  NSMutableArray *_deletedSubitemPosts;
  IGMediaCroppingInfo *_croppingCoordinates;
  IGEditedPostSelectedAudio *_postAudio;
  NSNumber *_isMadeWithAI;
}

@property (retain, nonatomic) IGAPILocationDict *location;
@property (retain, nonatomic) NSString *caption;
@property (retain, nonatomic) IGFBUserTagGroup *fbUserTags;
@property (retain, nonatomic) IGProductItemTagGroup *productItemTags;
@property (readonly, nonatomic) BOOL hasProductTags;
@property (readonly, nonatomic) BOOL hasUserTags;
@property (retain, nonatomic) IGAPIChannelsPreviewDict *channelTagData;
@property (retain, nonatomic) IGBrandedContentMedia *brandedContent;
@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) NSArray *featuredProducts;
@property (retain, nonatomic) IGAPIBrandedContentGatingInfo *audienceRestrictions;

/* instance methods */
- (id)initWithMedia:(id)media userSession:(id)session;
- (id)pk;
@end

#endif /* IGEditedPost_h */
