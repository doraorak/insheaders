//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCasperModelStorage_h
#define IGCasperModelStorage_h
@import Foundation;

#include "IGSignalsExample.h"
#include "NSObject-Protocol.h"

@class IGUserDefaults, NSString;

@interface IGCasperModelStorage : NSObject<NSObject> {
  /* instance variables */
  IGSignalsExample *_lastestExample;
  IGUserDefaults *_sessionUserDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initSessionUserDefaults:(id)defaults;
- (void)storeExample:(id)example metadata:(id)metadata;
- (void)cleanup:(id)cleanup;
- (id)loadExample:(id)example metadata:(id)metadata;
@end

#endif /* IGCasperModelStorage_h */
