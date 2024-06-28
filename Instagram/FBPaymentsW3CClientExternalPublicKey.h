//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPaymentsW3CClientExternalPublicKey_h
#define FBPaymentsW3CClientExternalPublicKey_h
@import Foundation;

@class NSString;

@interface FBPaymentsW3CClientExternalPublicKey : NSObject

@property (readonly, nonatomic) struct __SecKey * publicKey;
@property (readonly, nonatomic) NSString *base64x509Der;

/* instance methods */
- (id)initWithBase64X509Der:(id)der;
- (void)dealloc;
@end

#endif /* FBPaymentsW3CClientExternalPublicKey_h */
