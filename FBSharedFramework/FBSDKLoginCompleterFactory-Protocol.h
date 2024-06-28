//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKLoginCompleterFactory_Protocol_h
#define FBSDKLoginCompleterFactory_Protocol_h
@import Foundation;

#include "FBSDKLoginCompleterFactory-Protocol.h"

@protocol FBSDKLoginCompleterFactory 
/* instance methods */
- (id)createLoginCompleterWithURLParameters:(id)urlparameters appID:(id)id authenticationTokenCreator:(id)creator internalUtility:(id)utility;
@end

#endif /* FBSDKLoginCompleterFactory_Protocol_h */
