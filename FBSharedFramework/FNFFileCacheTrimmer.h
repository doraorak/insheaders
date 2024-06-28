//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFFileCacheTrimmer_h
#define FNFFileCacheTrimmer_h
@import Foundation;

@class NSFileManager, NSString;
@protocol FNFFileEvictionPerformanceLogging, FNFFileStreamBackgroundScheduling;

@interface FNFFileCacheTrimmer : NSObject {
  /* instance variables */
  NSString *_cachePath;
  unsigned long long _capacityInBytes;
  unsigned long long _maxFileCount;
  NSFileManager *_fileManager;
  NSObject<FNFFileStreamBackgroundScheduling> *_scheduler;
  NSObject<FNFFileEvictionPerformanceLogging> *_fileEvictionLogger;
  unsigned long long _trimmingTask;
  double _lastTrimTime;
}

/* instance methods */
- (id)initWithCachePath:(id)path capacityInBytes:(unsigned long long)bytes maxFileCount:(unsigned long long)count fileManager:(id)manager backgroundScheduler:(id)scheduler fileEvictionLogger:(id)logger;
- (void)_startBackgroundCacheTrimmingTask;
- (void)_performBackgroundCacheTrimmingTaskWithURLs:(id)urls;
- (unsigned long long)_removeExcessFiles;
@end

#endif /* FNFFileCacheTrimmer_h */