//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSelfieStickerModel_IGVideoURLProvider_h
#define IGDirectSelfieStickerModel_IGVideoURLProvider_h
@import Foundation;

@interface IGDirectSelfieStickerModel (IGVideoURLProvider) <IGVideoURLProvider>
/* instance methods */
- (id)dashManifestData;
- (id)allVideoURLs;
- (id)videoURLForVideoVersion:(long long)version;
- (id)videoURLForCurrentNetworkConditions;
- (id)representationIdStringForVideoURL:(id)url;
- (id)isAudioDetected;
- (id)mediaID;
- (BOOL)isFacebookContent;
- (id)drmHandler;
- (id)encryptedPayload;
- (struct CGSize { double x0; double x1; })size;
- (id)username;
- (BOOL)isSponsored;
@end

#endif /* IGDirectSelfieStickerModel_IGVideoURLProvider_h */