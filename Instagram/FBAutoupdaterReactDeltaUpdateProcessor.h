//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAutoupdaterReactDeltaUpdateProcessor_h
#define FBAutoupdaterReactDeltaUpdateProcessor_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSFileManager, NSString;
@protocol FBAutoupdaterFileManageDelegate;

@interface FBAutoupdaterReactDeltaUpdateProcessor : NSObject<NSObject> {
  /* instance variables */
  NSFileManager *_fileManager;
  NSObject<FBAutoupdaterFileManageDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (id)manifestFilename;
- (BOOL)processPatchUpdate:(id)update atPath:(id)path source:(id)source destination:(id)destination host:(id)host error:(id *)error;
- (id)readDeltaUpdateManifestAtUpdatePath:(id)path error:(id *)error;
@end

#endif /* FBAutoupdaterReactDeltaUpdateProcessor_h */