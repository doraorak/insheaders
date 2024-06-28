//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPDataStoreEventRecordList_h
#define IGQPDataStoreEventRecordList_h
@import Foundation;

#include "IGQPDataStoreEventRecord.h"
#include "NSCoding-Protocol.h"

@class NSString;

@interface IGQPDataStoreEventRecordList : NSObject<NSCoding> {
  /* instance variables */
  IGQPDataStoreEventRecord *_mostRecentRecord;
}

@property (readonly, copy, nonatomic) NSString *event;
@property (readonly, nonatomic) long long count;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithRecord:(id)record count:(long long)count;
@end

#endif /* IGQPDataStoreEventRecordList_h */