//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAutoupdaterZipUnarchiver_h
#define FBAutoupdaterZipUnarchiver_h
@import Foundation;

#include "FBAutoupdaterUpdate.h"
#include "NSObject-Protocol.h"

@class NSFileManager, NSMutableDictionary, NSProgress, NSString;
@protocol FBAutoupdaterUnarchiverDelegate, FBAutoupdaterZipUnarchiverOutputStrategy, OS_dispatch_queue;

@interface FBAutoupdaterZipUnarchiver : NSObject<NSObject> {
  /* instance variables */
  NSFileManager *_fileManager;
  FBAutoupdaterUpdate *_currentUpdate;
  NSMutableDictionary *_manifest;
  NSMutableDictionary *_uncompressedFilesizeMap;
  NSString *_fromPath;
  NSObject<OS_dispatch_queue> *_unzipQueue;
  NSObject<FBAutoupdaterZipUnarchiverOutputStrategy> *_outputStrategy;
}

@property (weak, nonatomic) NSObject<FBAutoupdaterUnarchiverDelegate> *delegate;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (id)initWithDelegate:(id)delegate outputStrategy:(id)strategy;
- (void)unarchive:(id)unarchive fromPath:(id)path toPath:(id)path;
- (void)cancel;
- (void)_startUnarchive:(id)unarchive fromPath:(id)path toPath:(id)path;
@end

#endif /* FBAutoupdaterZipUnarchiver_h */