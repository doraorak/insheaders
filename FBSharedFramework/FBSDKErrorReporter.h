//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKErrorReporter_h
#define FBSDKErrorReporter_h
@import Foundation;

#include "FBSDKErrorReporting-Protocol.h"
#include "FBSDKSettings-Protocol.h"

@class NSString;
@protocol FBSDKFileManaging;

@interface FBSDKErrorReporter : NSObject<FBSDKErrorReporting>

@property (retain, nonatomic) NSObject<FBSDKFileManaging> *fileManager;
@property (retain, nonatomic) NSObject<FBSDKSettings> *settings;
@property (retain, nonatomic) Class dataExtractor;
@property (readonly, nonatomic) NSString *directoryPath;
@property (nonatomic) BOOL isEnabled;

/* class methods */
+ (id)shared;
+ (void)saveError:(long long)error errorDomain:(id)domain message:(id)message;

/* instance methods */
- (id)init;
- (id)initWithFileManager:(id)manager settings:(id)settings fileDataExtractor:(Class)extractor;
- (void)enable;
- (void)saveError:(long long)error errorDomain:(id)domain message:(id)message;
- (void)createErrorDirectoryIfNeeded;
- (void)uploadErrors;
- (id)loadErrorReports;
- (void)_clearErrorInfo;
- (void)_saveErrorInfoToDisk:(id)disk;
- (id)_pathToErrorInfoFile;
@end

#endif /* FBSDKErrorReporter_h */
