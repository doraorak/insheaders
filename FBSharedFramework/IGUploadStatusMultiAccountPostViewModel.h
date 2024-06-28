//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUploadStatusMultiAccountPostViewModel_h
#define IGUploadStatusMultiAccountPostViewModel_h
@import Foundation;

@class NSOrderedSet, NSString;

@interface IGUploadStatusMultiAccountPostViewModel : NSObject {
  /* instance variables */
  long long _pendingCount;
  long long _successCount;
  long long _failureCount;
  long long _totalCount;
}

@property (readonly, copy, nonatomic) NSString *uploadID;
@property (readonly, copy, nonatomic) NSOrderedSet *shares;
@property (readonly, nonatomic) BOOL expanded;

/* instance methods */
- (id)initWithUploadID:(id)id shares:(id)shares expanded:(BOOL)expanded;
- (id)image;
- (id)progressBarColor;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)debugDescription;
@end

#endif /* IGUploadStatusMultiAccountPostViewModel_h */