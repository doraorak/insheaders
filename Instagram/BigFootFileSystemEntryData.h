//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BigFootFileSystemEntryData_h
#define BigFootFileSystemEntryData_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface BigFootFileSystemEntryData : NSObject<NSObject>

@property (readonly, nonatomic) unsigned long long availableDiskSpace;
@property (readonly, nonatomic) unsigned long long freeDiskSpace;
@property (readonly, nonatomic) unsigned long long totalDiskSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAvailabeDiskSpace:(unsigned long long)space freeDiskSpace:(unsigned long long)space totalDiskSpace:(unsigned long long)space;
- (id)dictionaryRepresentation;
@end

#endif /* BigFootFileSystemEntryData_h */