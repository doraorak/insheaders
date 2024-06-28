//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAssistantStellaBusDoubleRatchetCryptoHandler_h
#define FBAssistantStellaBusDoubleRatchetCryptoHandler_h
@import Foundation;

#include "FBAssistantStellaBusSecureStorage.h"
#include "FBAssistantStellaCryptoHandling-Protocol.h"

@class NSArray, NSString;
@protocol FBAssistantConsoleLogging;

@interface FBAssistantStellaBusDoubleRatchetCryptoHandler : NSObject<FBAssistantStellaCryptoHandling> {
  /* instance variables */
  NSString *_prefix;
  NSString *_sharedAppGroupKey;
  NSArray *_handlers;
  FBAssistantStellaBusSecureStorage *_secureStorage;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _encryptDecryptMutex;
  NSObject<FBAssistantConsoleLogging> *_consoleLogger;
}

@property (readonly, copy, nonatomic) NSString *currentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSecKeyTagPrefix:(id)prefix consoleLogger:(id)logger;
- (id)initWithSecKeyTagPrefix:(id)prefix sharedAppGroupKey:(id)key consoleLogger:(id)logger;
- (id)publicKey;
- (BOOL)performKeyExchangeWith:(id)with;
- (BOOL)isReadyForEncryption;
- (BOOL)resetKeys;
- (id)encrypt:(id)encrypt;
- (id)decrypt:(id)decrypt;
@end

#endif /* FBAssistantStellaBusDoubleRatchetCryptoHandler_h */
