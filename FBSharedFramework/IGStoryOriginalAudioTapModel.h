//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryOriginalAudioTapModel_h
#define IGStoryOriginalAudioTapModel_h
@import Foundation;

#include "IGMusicBookmarkableStoriesAudioProtocol-Protocol.h"
#include "IGUser.h"
#include "NSCoding-Protocol.h"

@class NSString, NSURL;

@interface IGStoryOriginalAudioTapModel : NSObject<NSCoding, IGMusicBookmarkableStoriesAudioProtocol> {
  /* instance variables */
  NSString *_audioClusterID;
  NSString *_originalAudioAssetID;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, copy, nonatomic) IGUser *artist;
@property (readonly, nonatomic) NSURL *albumArtURL;
@property (readonly, nonatomic) NSURL *audioFileURL;
@property (readonly, nonatomic) BOOL shouldMuteAudio;
@property (readonly, nonatomic) BOOL isExplicit;
@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSString *audioClusterId;
@property (readonly, nonatomic) NSString *originalAudioAssetId;
@property (nonatomic) BOOL isBookmarked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAudioAssetID:(id)id title:(id)title artistName:(id)name artist:(id)artist albumArtURL:(id)url audioFileURL:(id)url shouldMuteAudio:(BOOL)audio isExplicit:(BOOL)explicit isBookmarked:(BOOL)bookmarked;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGStoryOriginalAudioTapModel_h */
