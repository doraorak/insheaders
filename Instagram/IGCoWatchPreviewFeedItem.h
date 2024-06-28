//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCoWatchPreviewFeedItem_h
#define IGCoWatchPreviewFeedItem_h
@import Foundation;

#include "IGCoWatchAudioAttribution.h"
#include "IGCoWatchPhotoItem-Protocol.h"
#include "IGCoWatchSizedUrl.h"
#include "IGPostItemProtocol-Protocol.h"

@class IGMedia, IGUser, NSArray, NSNumber, NSString;

@interface IGCoWatchPreviewFeedItem : NSObject<IGCoWatchPhotoItem> {
  /* instance variables */
  NSObject<IGPostItemProtocol> *_post;
}

@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) long long mediaType;
@property (readonly, copy, nonatomic) NSString *mediaId;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) IGUser *owner;
@property (readonly, nonatomic) BOOL hasAudio;
@property (readonly, nonatomic) BOOL supportsVideoDurationControls;
@property (readonly, nonatomic) BOOL isLiveStreaming;
@property (readonly, nonatomic) long long contentSource;
@property (readonly, nonatomic) unsigned long long mediaProductType;
@property (readonly, nonatomic) NSArray *captionLocales;
@property (readonly, nonatomic) IGCoWatchAudioAttribution *audioAttribution;
@property (readonly) NSNumber *carouselItemIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGCoWatchSizedUrl *photoURL;

/* instance methods */
- (id)initWithMedia:(id)media postItemPK:(id)pk;
@end

#endif /* IGCoWatchPreviewFeedItem_h */
