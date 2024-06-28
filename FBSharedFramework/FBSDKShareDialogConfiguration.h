//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKShareDialogConfiguration_h
#define FBSDKShareDialogConfiguration_h
@import Foundation;

#include "FBSDKServerConfigurationProviding-Protocol.h"

@class NSString;

@interface FBSDKShareDialogConfiguration : NSObject

@property (retain, nonatomic) NSObject<FBSDKServerConfigurationProviding> *serverConfigurationProvider;
@property (readonly, copy, nonatomic) NSString *defaultShareMode;

/* instance methods */
- (id)init;
- (id)initWithServerConfigurationProvider:(id)provider;
- (BOOL)shouldUseNativeDialogForDialogName:(id)name;
- (BOOL)shouldUseSafariViewControllerForDialogName:(id)name;
@end

#endif /* FBSDKShareDialogConfiguration_h */