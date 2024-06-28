//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MWALinkSecurerDelegate_Protocol_h
#define MWALinkSecurerDelegate_Protocol_h
@import Foundation;

@protocol MWALinkSecurerDelegate <NSObject>
/* instance methods */
- (void)linkSecurer:(id)securer isEncryptedWithTxChallenge:(id)challenge rxChallenge:(id)challenge;
- (void)linkSecurer:(id)securer securedLinkWithCipher:(id)cipher txId:(id)id rxId:(id)id asMain:(BOOL)main pendingData:(id)data;
- (void)linkSecurer:(id)securer encounteredError:(id)error;
- (unsigned short)linkSecurer:(id)securer writeData:(id)data;
@end

#endif /* MWALinkSecurerDelegate_Protocol_h */