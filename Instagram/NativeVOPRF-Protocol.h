//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NativeVOPRF_Protocol_h
#define NativeVOPRF_Protocol_h
@import Foundation;

@protocol NativeVOPRF <NSObject>
/* instance methods */
- (id)blind:(id)blind withBlindingFactorUpdatePtr:(id *)ptr withErrorUpdatePtr:(id *)ptr;
- (id)unblind:(id)unblind withSignerPublicKey:(id)key withBlindingFactor:(id)factor withBlindedSignature:(id)signature shouldVerifyProof:(BOOL)proof withDLEQProofC:(id)c withDLEQProofS:(id)s withErrorUpdatePtr:(id *)ptr;
- (id)computeSharedSecret:(id)secret withUnblindedSignature:(id)signature withErrorUpdatePtr:(id *)ptr;
@end

#endif /* NativeVOPRF_Protocol_h */
