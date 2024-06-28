//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGResourceDirectory_h
#define IGResourceDirectory_h
@import Foundation;

#include "IGDiskDirectory.h"
#include "IGDiskManager.h"

@class NSArray, NSMapTable, NSMutableDictionary;

@interface IGResourceDirectory : NSObject {
  /* instance variables */
  id _lock;
  NSMutableDictionary *_fileURLToResourceNameMapping;
  NSMapTable *_imageToResourceNameMapping;
  NSMapTable *_dataToResourceNameMapping;
  IGDiskDirectory *_diskDirectory;
  IGDiskManager *_diskManager;
}

@property (readonly, nonatomic) NSArray *resources;

/* instance methods */
- (id)initWithDirectory:(id)directory diskManager:(id)manager;
@end

#endif /* IGResourceDirectory_h */