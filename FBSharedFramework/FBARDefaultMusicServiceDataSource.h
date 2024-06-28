//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARDefaultMusicServiceDataSource_h
#define FBARDefaultMusicServiceDataSource_h
@import Foundation;

#include "FBARMusicServiceDataSource-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface FBARDefaultMusicServiceDataSource : NSObject<FBARMusicServiceDataSource, NSSecureCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (struct shared_future<std::shared_ptr<msqrd::services::music::IMusicItem>> { void * x0; })fetchCurrentPlayingItem;
- (struct shared_future<int> { void * x0; })fetchCurrentPlayingItemPlaybackTimeMs;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* FBARDefaultMusicServiceDataSource_h */
