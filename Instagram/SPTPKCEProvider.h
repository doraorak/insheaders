//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SPTPKCEProvider_h
#define SPTPKCEProvider_h
@import Foundation;

@class NSString;

@interface SPTPKCEProvider : NSObject {
  /* instance variables */
  unsigned long long _codeVerifierLength;
}

@property (copy, nonatomic) NSString *codeChallenge;
@property (copy, nonatomic) NSString *codeVerifier;
@property (nonatomic) unsigned long long codeChallengeMethod;

/* class methods */
+ (id)PKCEProviderWithCodeVerifierLength:(unsigned long long)length codeChallengeMethod:(unsigned long long)method;

/* instance methods */
- (id)initWithCodeVerifierLength:(unsigned long long)length codeChallengeMethod:(unsigned long long)method;
- (void)update;
@end

#endif /* SPTPKCEProvider_h */
