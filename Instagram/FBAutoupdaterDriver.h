//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAutoupdaterDriver_h
#define FBAutoupdaterDriver_h
@import Foundation;

#include "FBAutoupdaterHost.h"
#include "FBAutoupdaterUpdate.h"
#include "NSObject-Protocol.h"

@class NSArray, NSDateFormatter, NSFileManager, NSMutableArray, NSOperationQueue, NSProgress, NSString;
@protocol FBAutoupdaterCleaner, FBAutoupdaterDeltaUpdateApplier, FBAutoupdaterDownloader, FBAutoupdaterDriverDelegate, FBAutoupdaterDriverProgressDelegate, FBAutoupdaterInfoUpdater, FBAutoupdaterInstaller, FBAutoupdaterPreparer, FBAutoupdaterUnarchiver, FBAutoupdaterVerifier;

@interface FBAutoupdaterDriver : NSObject<NSObject> {
  /* instance variables */
  NSArray *_cachedUpdates;
  NSFileManager *_fileManager;
  NSOperationQueue *_progressDelegateQueue;
  NSMutableArray *_processQueue;
  FBAutoupdaterUpdate *_updateBeingProcessed;
  BOOL _deltaProcessed;
  NSDateFormatter *_dateFormatter;
  BOOL _autoRemoveUnappliedUpdates;
  BOOL _applyUpdatesAfterInstall;
  NSObject<FBAutoupdaterDriverProgressDelegate> *_progressDelegate;
  NSObject<FBAutoupdaterCleaner> *_cleaner;
  NSObject<FBAutoupdaterDeltaUpdateApplier> *_deltaApplier;
  NSObject<FBAutoupdaterPreparer> *_preparer;
  NSObject<FBAutoupdaterInfoUpdater> *_infoUpdater;
  NSObject<FBAutoupdaterInstaller> *_installer;
  NSProgress *_currentOperationProgress;
}

@property (retain, nonatomic) NSObject<FBAutoupdaterDownloader> *downloader;
@property (retain, nonatomic) NSObject<FBAutoupdaterUnarchiver> *unarchiver;
@property (retain, nonatomic) NSObject<FBAutoupdaterVerifier> *verifier;
@property (retain, nonatomic) FBAutoupdaterHost *host;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) NSString *downloadPath;
@property (copy, nonatomic) NSString *extractPath;
@property (copy, nonatomic) NSString *deltaUpdateToPath;
@property (copy, nonatomic) NSString *deltaUpdateFromPath;
@property (copy, nonatomic) NSString *installFromPath;
@property (weak, nonatomic) NSObject<FBAutoupdaterDriverDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate progressDelegate:(id)delegate delegateQueue:(id)queue host:(id)host cleaner:(id)cleaner downloader:(id)downloader unarchiver:(id)unarchiver deltaApplier:(id)applier preparer:(id)preparer verifier:(id)verifier infoUpdater:(id)updater installer:(id)installer;
- (void)generatingPathForUpdate:(id)update;
- (id)relativePathFrom:(id)from toPath:(id)path;
- (void)_processUnarchivedUpdate:(id)update;
- (void)autoupdaterDownloader:(id)downloader didStartUpdate:(id)update expectedLength:(long long)length;
- (void)autoupdaterDownloader:(id)downloader update:(id)update didMakeProgress:(id)progress;
- (void)autoupdaterDownloader:(id)downloader didFinishUpdate:(id)update;
- (void)autoupdaterDownloader:(id)downloader update:(id)update didFail:(id)fail;
- (void)autoupdaterBackgroundDownloader:(id)downloader didFinishEventsForIdentifier:(id)identifier;
- (BOOL)autoupdaterBackgroundDownloader:(id)downloader allowCellularAccessForDownloadingUpdate:(id)update;
- (void)autoupdaterUnarchiver:(id)unarchiver didStartUpdate:(id)update;
- (void)autoupdaterUnarchiver:(id)unarchiver update:(id)update didMakeProgress:(id)progress;
- (BOOL)autoupdaterUnarchiver:(id)unarchiver update:(id)update shouldUnarchiveFile:(id)file toPath:(id)path crc32:(unsigned long long)crc32;
- (void)autoupdaterUnarchiver:(id)unarchiver didFinishUpdate:(id)update;
- (void)autoupdaterUnarchiver:(id)unarchiver update:(id)update didFail:(id)fail;
@end

#endif /* FBAutoupdaterDriver_h */
