//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef VestaClient_h
#define VestaClient_h
@import Foundation;

@interface VestaClient : NSObject
/* class methods */
+ (id)beginRegisterWithPassword:(id)password error:(id *)error;
+ (id)finishRegisterWithR1Message:(id)message r2Message:(id)message r2MessageSig:(id)sig islandEd25519Pub:(id)pub clientState:(id)state userSecret:(id)secret registrationChallenge:(id)challenge islandRsaPub:(id)pub max_login_attempts_or_zero:(char)max_login_attempts_or_zero error:(id *)error;
+ (id)finishRegisterProtoWithR1Message:(id)message r2Message:(id)message r2MessageSig:(id)sig islandEd25519Pub:(id)pub clientState:(id)state userSecret:(id)secret registrationChallenge:(id)challenge islandRsaPub:(id)pub max_login_attempts_or_zero:(char)max_login_attempts_or_zero error:(id *)error;
+ (id)beginLogin:(id)login error:(id *)error;
+ (id)finishLoginWithL2Message:(id)message l2MessageSig:(id)sig islandEd25519Pub:(id)pub clientState:(id)state error:(id *)error;
+ (BOOL)validatePublicKey:(id)key publicKeySignature:(id)signature error:(id *)error;
+ (id)unpackLoginPayload:(id)payload sessionKey:(id)key exportKey:(id)key error:(id *)error;
+ (id)unpackLoginPayloadProto:(id)proto sessionKey:(id)key exportKey:(id)key error:(id *)error;
+ (BOOL)verifyRestoreHistoryWithRequestChallenge:(id)challenge registrationIdentifier:(id)identifier registrationTimestamp:(long long)timestamp restoreCount:(short)count restoreTimestamps:(id)timestamps restoreHistorySignature:(id)signature islandEd25519Pub:(id)pub error:(id *)error;
+ (int)getApiVersion;
@end

#endif /* VestaClient_h */
