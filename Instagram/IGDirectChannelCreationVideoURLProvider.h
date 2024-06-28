//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectChannelCreationVideoURLProvider_h
#define IGDirectChannelCreationVideoURLProvider_h
@import Foundation;

#include "IGVideoURLProvider-Protocol.h"

@class MSGEncryptedPayload, NSData, NSString, NSURL;
@protocol FNFDashVideoDrmHandler;

@interface IGDirectChannelCreationVideoURLProvider : NSObject<IGVideoURLProvider> {
  /* instance variables */
  NSURL *_videoUrl;
  NSString *_mediaId;
}

@property (readonly, nonatomic) NSData *dashManifestData;
@property (readonly, nonatomic) NSObject<FNFDashVideoDrmHandler> *drmHandler;
@property (readonly, nonatomic) MSGEncryptedPayload *encryptedPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoURL:(id)url mediaId:(id)id;
- (id)allVideoURLs;
- (id)videoURLForVideoVersion:(long long)version;
- (id)videoURLForCurrentNetworkConditions;
- (id)representationIdStringForVideoURL:(id)url;
- (id)isAudioDetected;
- (id)mediaID;
- (BOOL)isFacebookContent;
- (struct CGSize { double x0; double x1; })size;
- (id)username;
- (BOOL)isSponsored;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGDirectChannelCreationVideoURLProvider_h */