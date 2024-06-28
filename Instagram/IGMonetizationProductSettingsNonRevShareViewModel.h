//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMonetizationProductSettingsNonRevShareViewModel_h
#define IGMonetizationProductSettingsNonRevShareViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserSession, NSString;

@interface IGMonetizationProductSettingsNonRevShareViewModel : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (long long)productType;
- (long long)payoutProductType;
- (id)title;
- (id)analyticsModule;
- (id)supportLearnMoreURLString;
- (id)universalToggleLearnMoreURLString;
- (unsigned long long)browserURLSource;
- (id)listObjects;
@end

#endif /* IGMonetizationProductSettingsNonRevShareViewModel_h */