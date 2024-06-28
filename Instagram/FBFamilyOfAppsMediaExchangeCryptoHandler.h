//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBFamilyOfAppsMediaExchangeCryptoHandler_h
#define FBFamilyOfAppsMediaExchangeCryptoHandler_h
@import Foundation;

#include "FBAssistantStellaCryptoHandling-Protocol.h"

@class NSData, NSString;

@interface FBFamilyOfAppsMediaExchangeCryptoHandler : NSObject<FBAssistantStellaCryptoHandling> {
  /* instance variables */
  NSData *_encryptionKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEncryptionKey:(id)key;
- (BOOL)performKeyExchangeWith:(id)with;
- (id)publicKey;
- (void)resetKeys;
- (BOOL)isReadyForEncryption;
- (id)encrypt:(id)encrypt;
- (id)decrypt:(id)decrypt;
@end

#endif /* FBFamilyOfAppsMediaExchangeCryptoHandler_h */
