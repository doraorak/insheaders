//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayLocalAuthentication_h
#define FBPayLocalAuthentication_h
@import Foundation;

@class LAContext;

@interface FBPayLocalAuthentication : NSObject {
  /* instance variables */
  LAContext *_localAuthContext;
}

/* instance methods */
- (id)init;
- (void)authenticateWithFallbackTitle:(id)title reason:(id)reason completion:(id /* block */)completion;
- (void)_authenticateWithFallbackTitle:(id)title reason:(id)reason policy:(long long)policy completion:(id /* block */)completion;
- (void)authenticateForAccessKeychainWithFallbackTitle:(id)title reason:(id)reason accessControl:(unsigned long long)control isAuthenticationReusable:(BOOL)reusable completion:(id /* block */)completion;
- (BOOL)isBiometricSystemEnabled;
- (int)biometricSystemType;
@end

#endif /* FBPayLocalAuthentication_h */