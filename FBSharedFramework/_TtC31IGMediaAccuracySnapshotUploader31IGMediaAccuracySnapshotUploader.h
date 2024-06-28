//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC31IGMediaAccuracySnapshotUploader31IGMediaAccuracySnapshotUploader_h
#define _TtC31IGMediaAccuracySnapshotUploader31IGMediaAccuracySnapshotUploader_h
@import Foundation;

@class NSString;

@interface _TtC31IGMediaAccuracySnapshotUploader31IGMediaAccuracySnapshotUploader : NSObject { // (Swift)
  /* instance variables */
   userSessionProvider;
   snapshot;
   readwriteQueue;
}

@property (nonatomic, readonly) NSString *pendingCompositionID;

/* instance methods */
- (id)initWithUserSessionProvider:(id)provider;
- (void)setSnapshotWithImageData:(id)data timestamp:(double)timestamp compositionID:(id)id sourceType:(long long)type;
- (void)cachePendingSnapshotWithCompositionID:(id)id waterfallID:(id)id uploadID:(id)id;
- (id)init;
@end

#endif /* _TtC31IGMediaAccuracySnapshotUploader31IGMediaAccuracySnapshotUploader_h */