//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMessageFilterSettings_h
#define IGMessageFilterSettings_h
@import Foundation;

#include "IGObjectDiskStorage.h"
#include "IGScheduler-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface IGMessageFilterSettings : NSObject {
  /* instance variables */
  NSMutableDictionary *_settings;
  NSDictionary *_persistedSettings;
  IGObjectDiskStorage *_storage;
  NSObject<IGScheduler> *_writeScheduler;
  BOOL _suppressingDuplicateWrites;
  BOOL _needsWrite;
}

/* instance methods */
- (id)initWithStorage:(id)storage writeScheduler:(id)scheduler suppressingDuplicateWrites:(BOOL)writes;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (id)objectForKeyedSubscript:(id)subscript;
@end

#endif /* IGMessageFilterSettings_h */
