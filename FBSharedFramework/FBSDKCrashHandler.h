//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKCrashHandler_h
#define FBSDKCrashHandler_h
@import Foundation;

#include "FBSDKCrashHandler-Protocol.h"

@class NSArray, NSHashTable;
@protocol FBSDKFileManaging, FBSDKInfoDictionaryProviding;

@interface FBSDKCrashHandler : NSObject<FBSDKCrashHandler>

@property (nonatomic) BOOL isTurnedOn;
@property (retain, nonatomic) NSObject<FBSDKFileManaging> *fileManager;
@property (retain, nonatomic) Class dataExtractor;
@property (retain, nonatomic) NSObject<FBSDKInfoDictionaryProviding> *bundle;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSArray *processedCrashLogs;

/* class methods */
+ (id)shared;
+ (id)getFBSDKVersion;
+ (void)disable;
+ (void)addObserver:(id)observer;
+ (void)removeObserver:(id)observer;
+ (void)clearCrashReportFiles;
+ (id)_filterCrashLogs:(id)logs processedCrashLogs:(id)logs;
+ (BOOL)_callstack:(id)_callstack containsPrefix:(id)prefix;
+ (void)_generateMethodMapping:(id)mapping;
+ (id)_loadLibData:(id)data;
+ (id)_getPathToCrashFile:(id)file;
+ (id)_getPathToLibDataFile:(id)file;
+ (BOOL)_isSafeToGenerateMapping;

/* instance methods */
- (id)initWithFileManager:(id)manager bundle:(id)bundle fileDataExtractor:(Class)extractor;
- (void)disable;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)clearCrashReportFiles;
- (void)_installExceptionsHandler;
- (void)_uninstallExceptionsHandler;
- (void)_saveException:(id)exception;
- (id)_getProcessedCrashLogs;
- (id)_loadCrashLogs;
- (id)_loadCrashLog:(id)log;
- (id)_getCrashLogFileNames:(id)names;
- (void)_saveCrashLog:(id)log;
- (void)_sendCrashLogs;
- (id)_filterCrashLogs:(id)logs processedCrashLogs:(id)logs;
- (BOOL)_callstack:(id)_callstack containsPrefix:(id)prefix;
- (void)_generateMethodMapping:(id)mapping;
- (id)_loadLibData:(id)data;
- (id)_getPathToCrashFile:(id)file;
- (id)_getPathToLibDataFile:(id)file;
- (BOOL)_isSafeToGenerateMapping;
@end

#endif /* FBSDKCrashHandler_h */