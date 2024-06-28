//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoURLProvider_Protocol_h
#define IGVideoURLProvider_Protocol_h
@import Foundation;

@protocol IGVideoURLProvider <NSObject, NSCopying>

@property (nonatomic, readonly) NSData *dashManifestData;
@property (nonatomic, readonly) NSObject<FNFDashVideoDrmHandler> *drmHandler;
@property (nonatomic, readonly) MSGEncryptedPayload *encryptedPayload;

/* instance methods */
- (id)allVideoURLs;
- (id)videoURLForVideoVersion:(long long)version;
- (id)videoURLForVideoVersion:(long long)version;
- (id)videoURLForCurrentNetworkConditions;
- (id)representationIdStringForVideoURL:(id)url;
- (id)representationIdStringForVideoURL:(id)url;
- (id)isAudioDetected;
- (id)mediaID;
- (BOOL)isFacebookContent;
- (struct CGSize { double x0; double x1; })size;
- (id)username;
- (BOOL)isSponsored;
@end

#endif /* IGVideoURLProvider_Protocol_h */