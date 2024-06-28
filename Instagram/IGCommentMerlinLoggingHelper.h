//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentMerlinLoggingHelper_h
#define IGCommentMerlinLoggingHelper_h
@import Foundation;

@class FBMerlinManager;
@protocol IGCommentVPVDHelperDelegate;

@interface IGCommentMerlinLoggingHelper : NSObject {
  /* instance variables */
  FBMerlinManager *_merlinManager;
}

@property (readonly, weak, nonatomic) NSObject<IGCommentVPVDHelperDelegate> *delegate;

/* instance methods */
- (id)initWithMerlinManager:(id)manager;
- (id)initWithMerlinManager:(id)manager delegate:(id)delegate;
@end

#endif /* IGCommentMerlinLoggingHelper_h */