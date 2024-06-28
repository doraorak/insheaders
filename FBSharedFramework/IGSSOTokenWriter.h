//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSSOTokenWriter_h
#define IGSSOTokenWriter_h
@import Foundation;

#include "IGSSOTokenWriterDelegate-Protocol.h"
#include "IGScheduler-Protocol.h"
#include "UICKeyChainStore.h"

@class NSString;

@interface IGSSOTokenWriter : NSObject {
  /* instance variables */
  UICKeyChainStore *_keychainStore;
  NSString *_keychainKey;
  NSObject<IGScheduler> *_scheduler;
  NSString *_ssoToken;
}

@property (weak, nonatomic) NSObject<IGSSOTokenWriterDelegate> *delegate;

/* instance methods */
- (id)initWithKeychainStore:(id)store keychainKey:(id)key scheduler:(id)scheduler;
@end

#endif /* IGSSOTokenWriter_h */
