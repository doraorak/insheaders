//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewersDataSource_h
#define IGStoryViewersDataSource_h
@import Foundation;

@class NSMutableArray, NSMutableOrderedSet;

@interface IGStoryViewersDataSource : NSObject {
  /* instance variables */
  NSMutableArray *_viewers;
  NSMutableOrderedSet *_viewerIDs;
  unsigned long long _nonfriendFBViewerCount;
}

@property (nonatomic) BOOL isExpired;
@property (nonatomic) BOOL isFBStoryArchived;

/* instance methods */
- (id)init;
@end

#endif /* IGStoryViewersDataSource_h */
