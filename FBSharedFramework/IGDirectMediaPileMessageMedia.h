//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMediaPileMessageMedia_h
#define IGDirectMediaPileMessageMedia_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectAttachmentIntervention.h"
#include "IGDirectMediaResolverContext.h"
#include "IGDirectUIMessageMetadata.h"
#include "IGDirectXMA.h"
#include "IGDirectXMAShare.h"
#include "IGImageSpecifier.h"
#include "IGPhoto.h"
#include "IGVideo.h"
#include "NSCoding-Protocol.h"

@class NSData;

@interface IGDirectMediaPileMessageMedia : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  IGPhoto *_photo_photo;
  IGImageSpecifier *_photo_imageSpecifier;
  NSData *_photo_imageData;
  IGDirectMediaResolverContext *_photo_photoResolverContext;
  IGDirectAttachmentIntervention *_photo_intervention;
  IGVideo *_video_video;
  IGPhoto *_video_overlayPhoto;
  NSData *_video_previewImageData;
  IGDirectMediaResolverContext *_video_videoResolverContext;
  IGDirectMediaResolverContext *_video_overlayPhotoResolverContext;
  IGDirectXMA *_xmaShare_xma;
  IGDirectXMAShare *_xmaShare_xmaShare;
  IGDirectUIMessageMetadata *_xmaShare_xmaMessageMetadata;
  IGPhoto *_xmaShare_xmaPreviewPhoto;
}

/* class methods */
+ (id)photoWithPhoto:(id)photo imageSpecifier:(id)specifier imageData:(id)data photoResolverContext:(id)context intervention:(id)intervention;
+ (id)videoWithVideo:(id)video overlayPhoto:(id)photo previewImageData:(id)data videoResolverContext:(id)context overlayPhotoResolverContext:(id)context;
+ (id)xmaShareWithXma:(id)xma xmaShare:(id)share xmaMessageMetadata:(id)metadata xmaPreviewPhoto:(id)photo;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGDirectMediaPileMessageMedia_h */
