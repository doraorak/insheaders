//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBCCUContactBatchInfo_h
#define FBCCUContactBatchInfo_h
@import Foundation;

@class NSArray;

@interface FBCCUContactBatchInfo : NSObject {
  /* instance variables */
  long long _availableRetriesCount;
}

@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) long long batchIndex;

/* instance methods */
- (id)initWithContacts:(id)contacts batchIndex:(long long)index availableRetriesCount:(long long)count;
@end

#endif /* FBCCUContactBatchInfo_h */
