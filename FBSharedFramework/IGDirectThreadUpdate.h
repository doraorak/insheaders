//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadUpdate_h
#define IGDirectThreadUpdate_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGDirectMessageUpdate.h"
#include "IGDirectThreadMetadata.h"
#include "IGDirectThreadMetadataUpdate.h"

@class NSString;

@interface IGDirectThreadUpdate : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGDirectMessageUpdate *_messageUpdate;
  IGDirectThreadMetadataUpdate *_threadMetadataUpdate;
  IGDirectThreadMetadata *_replaceThreadMetadata;
  NSString *_removeThread_threadId;
}

/* class methods */
+ (id)messageUpdate:(id)update;
+ (id)removeThreadWithThreadId:(id)id;
+ (id)replaceThreadMetadata:(id)metadata;
+ (id)threadMetadataUpdate:(id)update;

/* instance methods */
@end

#endif /* IGDirectThreadUpdate_h */
