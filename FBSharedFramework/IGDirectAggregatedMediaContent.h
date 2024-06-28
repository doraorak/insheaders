//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAggregatedMediaContent_h
#define IGDirectAggregatedMediaContent_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectAttachmentIntervention.h"
#include "IGDirectInstamadilloEncryptedBackupPayload.h"
#include "IGDirectInstamadilloVideoResolving-Protocol.h"
#include "IGDirectMediaResolverContext.h"
#include "IGDirectXMA.h"
#include "IGImageSpecifier.h"
#include "IGMedia.h"
#include "IGPhoto.h"
#include "IGPostItemProtocol-Protocol.h"
#include "IGVideo.h"

@class NSData;

@interface IGDirectAggregatedMediaContent : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGPhoto *_photo_photo;
  IGImageSpecifier *_photo_photoImageSpecifier;
  IGImageSpecifier *_photo_photoPreviewImageSpecifier;
  IGDirectAttachmentIntervention *_photo_intervention;
  IGDirectMediaResolverContext *_photo_photoResolverContext;
  IGVideo *_video_video;
  IGPhoto *_video_overlayPhoto;
  IGImageSpecifier *_video_overlayPhotoImageSpecifier;
  NSObject<IGDirectInstamadilloVideoResolving> *_video_videoResolver;
  IGDirectMediaResolverContext *_video_videoResolverContext;
  IGDirectMediaResolverContext *_video_overlayPhotoResolverContext;
  IGDirectXMA *_reshare_xma;
  IGImageSpecifier *_reshare_resharePreviewImageSpecifier;
  IGMedia *_reshareMedia_media;
  IGImageSpecifier *_reshareMedia_reshareMediaImageSpecifier;
  NSObject<IGPostItemProtocol> *_reshareMedia_carouselShareChildPost;
  IGImageSpecifier *_reshareMedia_carouselShareChildPostImageSpecifier;
  NSData *_pendingImageData;
  IGDirectInstamadilloEncryptedBackupPayload *_encryptedPayload;
}

/* class methods */
+ (id)encryptedPayload:(id)payload;
+ (id)pendingImageData:(id)data;
+ (id)photoWithPhoto:(id)photo photoImageSpecifier:(id)specifier photoPreviewImageSpecifier:(id)specifier intervention:(id)intervention photoResolverContext:(id)context;
+ (id)reshareMediaWithMedia:(id)media reshareMediaImageSpecifier:(id)specifier carouselShareChildPost:(id)post carouselShareChildPostImageSpecifier:(id)specifier;
+ (id)reshareWithXma:(id)xma resharePreviewImageSpecifier:(id)specifier;
+ (id)videoWithVideo:(id)video overlayPhoto:(id)photo overlayPhotoImageSpecifier:(id)specifier videoResolver:(id)resolver videoResolverContext:(id)context overlayPhotoResolverContext:(id)context;

/* instance methods */
@end

#endif /* IGDirectAggregatedMediaContent_h */
