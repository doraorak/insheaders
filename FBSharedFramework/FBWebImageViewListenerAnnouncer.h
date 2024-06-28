//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBWebImageViewListenerAnnouncer_h
#define FBWebImageViewListenerAnnouncer_h
@import Foundation;

#include "FBAnnouncerBase.h"
#include "FBWebImageViewListener-Protocol.h"

@class NSString;

@interface FBWebImageViewListenerAnnouncer : FBAnnouncerBase<FBWebImageViewListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)webImageView:(id)view didAnnounceImageRenderForPrerenderedImageFromResponse:(id)response forImageSpecifier:(id)specifier atTime:(double)time;
- (void)webImageView:(id)view didSetBlurredImageFromResponse:(id)response forImageSpecifier:(id)specifier;
- (void)webImageView:(id)view didSetImageFromResponse:(id)response forImageSpecifier:(id)specifier;
- (void)webImageView:(id)view didUpdateLoadProgress:(double)progress;
- (void)webImageView:(id)view didFailDownloadingImageWithURL:(id)url error:(id)error;
- (void)webImageView:(id)view willStartDownloadingSpecifier:(id)specifier withDownloaderName:(id)name;
- (void)webImageView:(id)view didCancelWithSpecifier:(id)specifier;
- (void)webImageViewDidShowPlaceholder:(id)placeholder;
- (void)webImageViewDidHidePlaceholder:(id)placeholder;
- (void)webImageViewDidHideAnimationEndOnPlaceholder:(id)placeholder;
- (void)webImageViewDidAppearOnScreen;
- (void)webImageViewDidZoom;
- (void)webImageView:(id)view didFailRequestingImageWithReason:(id)reason;
@end

#endif /* FBWebImageViewListenerAnnouncer_h */