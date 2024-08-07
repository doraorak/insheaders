//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContentFilterDefaultLogger_h
#define IGContentFilterDefaultLogger_h
@import Foundation;

#include "IGContentFilterLoggerConfiguration.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGContentFilterDefaultLogger : NSObject<NSObject> {
  /* instance variables */
  IGContentFilterLoggerConfiguration *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)startTextFilterAddRemovePattern;
- (id)startTextFilterFindSingleOnAllDictForSource:(id)source;
- (id)startTextFilterFindAllOnAllDictForSource:(id)source;
- (id)startTextFilterSpinUpEngine;
@end

#endif /* IGContentFilterDefaultLogger_h */
