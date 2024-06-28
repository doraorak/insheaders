//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFFileBasedCache_h
#define FNFFileBasedCache_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSFileHandle, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface FNFFileBasedCache : NSObject<NSObject> {
  /* instance variables */
  NSFileHandle *_fileHandle;
  NSURL *_fileURL;
  NSMutableDictionary *_fileMap;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _cacheMutex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)dealloc;
- (id)dataForKey:(id)key;
- (BOOL)hasDataForKey:(id)key;
- (void)insertData:(id)data forKey:(id)key completion:(id /* block */)completion;
- (id)_insertData:(id)data forKey:(id)key;
- (id)_getDirectoryURL;
- (void)_setupDirectory;
- (void)_cleanUpIfNecessary;
- (BOOL)_openFile;
- (void)_closeFile;
@end

#endif /* FNFFileBasedCache_h */
