//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBoostBloksContextManager_h
#define IGBoostBloksContextManager_h
@import Foundation;

#include "IGBoostPostLogger.h"
#include "IGScopedListener-Protocol.h"

@class IGUserSession, NSString;

@interface IGBoostBloksContextManager : NSObject<IGScopedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  id /* block */ _audienceUpdateSucessCallback;
  id /* block */ _billingWizardCallback;
}

@property (retain, nonatomic) IGBoostPostLogger *logger;
@property (retain, nonatomic) NSString *accessToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session logger:(id)logger;
- (void)promoteCreateAndEditAudienceDidFinishInNextStep:(id)step;
- (void)promoteUpdateAutoAudienceLocationDidFinish;
- (void)promoteCreateAndEditAudienceDidTapNextButtonForNextStep:(long long)step;
- (void)promoteCreateAndEditAudienceDidTapCancelButtonOnStep:(long long)step;
- (void)promoteCreateAndEditAudienceDidSaveButtonWithNewAudience:(id)audience;
- (void)billingWizardDidReturnWithWizardName:(id)name returnCode:(id)code;
@end

#endif /* IGBoostBloksContextManager_h */