//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstamadilloThreadRequestProvider_h
#define IGDirectInstamadilloThreadRequestProvider_h
@import Foundation;

#include "IGDirectInstamadilloEncryptedBackupsClientStateManager.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGDirectInstamadilloThreadRequestProvider : NSObject<NSObject> {
  /* instance variables */
  IGDirectInstamadilloEncryptedBackupsClientStateManager *_encryptedBackupsClientStateManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEncryptedBackupsClientStateManager:(id)manager;
- (void)urlRequestForFetchInput:(id)input configurationProviding:(id)providing completion:(id /* block */)completion;
@end

#endif /* IGDirectInstamadilloThreadRequestProvider_h */
