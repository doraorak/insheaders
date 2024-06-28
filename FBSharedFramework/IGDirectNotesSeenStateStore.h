//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectNotesSeenStateStore_h
#define IGDirectNotesSeenStateStore_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet, NSObject;

@interface IGDirectNotesSeenStateStore : NSObject {
  /* instance variables */
  NSObject *_lock;
  NSMutableDictionary *_seenNoteDataDictionary;
  NSMutableSet *_sentSeenNoteIDs;
  double _minTimeSpentMs;
  double _minPercentVisible;
}

/* instance methods */
- (id)initWithLauncherSetProvider:(id)provider;
- (id)seenIDsMeetingRequirements;
@end

#endif /* IGDirectNotesSeenStateStore_h */