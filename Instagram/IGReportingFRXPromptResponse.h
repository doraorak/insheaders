//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGReportingFRXPromptResponse_h
#define IGReportingFRXPromptResponse_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGReportingEscalationRequestFRXPromptResponse.h"
#include "IGReportingPolicyEducationFRXPromptResponse.h"
#include "IGReportingProcessEducationFRXPromptResponse.h"
#include "IGReportingSelectVictimFRXPromptResponse.h"
#include "IGReportingStartFRXPromptResponse.h"
#include "IGReportingSubmitFRXPromptResponse.h"

@interface IGReportingFRXPromptResponse : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGReportingStartFRXPromptResponse *_startResponse_startResponse;
  IGReportingSubmitFRXPromptResponse *_submitResponse_submitResponse;
  IGReportingPolicyEducationFRXPromptResponse *_policyEducationResponse_policyEducationResponse;
  IGReportingSelectVictimFRXPromptResponse *_selectVictimResponse_selectVictimResponse;
  IGReportingProcessEducationFRXPromptResponse *_processEducationResponse_processEducationResponse;
  IGReportingEscalationRequestFRXPromptResponse *_escalationRequestResponse_escalationRequest;
}

/* class methods */
+ (id)escalationRequestResponseWithEscalationRequest:(id)request;
+ (id)policyEducationResponseWithPolicyEducationResponse:(id)response;
+ (id)processEducationResponseWithProcessEducationResponse:(id)response;
+ (id)selectVictimResponseWithSelectVictimResponse:(id)response;
+ (id)startResponseWithStartResponse:(id)response;
+ (id)submitResponseWithSubmitResponse:(id)response;

/* instance methods */
@end

#endif /* IGReportingFRXPromptResponse_h */