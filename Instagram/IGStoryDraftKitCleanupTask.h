//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryDraftKitCleanupTask_h
#define IGStoryDraftKitCleanupTask_h
@import Foundation;

#include "IGDeadFileJanitorFileManager.h"
#include "IGDeadFileJanitorFolder.h"
#include "IGMultipleAccountHandling-Protocol.h"
#include "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;

@interface IGStoryDraftKitCleanupTask : NSObject<NSObject> {
  /* instance variables */
  IGDeadFileJanitorFileManager *_fileManager;
  NSURL *_stagingURL;
  NSObject<IGMultipleAccountHandling> *_multipleAccountHandler;
  NSArray *_foldersToCleanup;
}

@property (readonly, nonatomic) IGDeadFileJanitorFolder *folder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFileManager:(id)manager stagingURL:(id)url folder:(id)folder multipleAccountHandler:(id)handler;
- (unsigned long long)countOfFilesInFolderCreatedSinceDate:(id)date;
- (void)ensurePreconditionsAreMetWithCompletion:(id /* block */)completion;
- (unsigned long long)moveFolderWithError:(id *)error;
- (unsigned long long)undoFolderMoveWithError:(id *)error;
- (unsigned long long)performDeletionWithError:(id *)error;
@end

#endif /* IGStoryDraftKitCleanupTask_h */
