//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPaymentsW3CClientKitKeyPair_h
#define FBPaymentsW3CClientKitKeyPair_h
@import Foundation;

@interface FBPaymentsW3CClientKitKeyPair : NSObject {
  /* instance variables */
  struct __SecKey * _privateKey;
}

@property (readonly, nonatomic) struct __SecKey * publicKey;

/* instance methods */
- (id)initWithPrivateKey:(struct __SecKey *)key publicKey:(struct __SecKey *)key;
- (void)dealloc;
@end

#endif /* FBPaymentsW3CClientKitKeyPair_h */