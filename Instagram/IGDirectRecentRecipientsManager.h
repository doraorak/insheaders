//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecentRecipientsManager_h
#define IGDirectRecentRecipientsManager_h
@import Foundation;

@class IGDirectCache, NSArray;

@interface IGDirectRecentRecipientsManager : NSObject {
  /* instance variables */
  IGDirectCache *_directCache;
  long long _maximumRecipientCount;
  BOOL _shouldShowExpandedList;
}

@property (copy, nonatomic) NSArray *recentRecipients;

/* instance methods */
- (id)initWithDirectCache:(id)cache maximumRecipientCount:(long long)count;
@end

#endif /* IGDirectRecentRecipientsManager_h */
