//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBakeoffIntentTarget_h
#define IGBakeoffIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSString;
@protocol IGSimpleActionPresentableViewerDelegate;

@interface IGBakeoffIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *extraDataToken;
@property (readonly, nonatomic) NSString *surveySessionId;
@property (readonly, nonatomic) NSObject<IGSimpleActionPresentableViewerDelegate> *simpleActionDelegate;
@property (readonly, nonatomic) id /* block */ navigationCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithExtraDataToken:(id)token surveySessionId:(id)id simpleActionDelegate:(id)delegate navigationCompletion:(id /* block */)completion;
@end

#endif /* IGBakeoffIntentTarget_h */