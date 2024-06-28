//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEditProfileIntentTarget_h
#define IGEditProfileIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGEditProfileViewControllerTypeDelegate-Protocol.h"

@class NSNumber, NSString;

@interface IGEditProfileIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSNumber *startTime;
@property (readonly, nonatomic) BOOL isPresented;
@property (readonly, nonatomic) BOOL shouldAutoFocusFirstEmptyBusinessProfileField;
@property (readonly, nonatomic) BOOL shouldCheckTopVC;
@property (readonly, nonatomic) BOOL shouldResetBiographyTranslation;
@property (readonly, nonatomic) BOOL isPresentFromNuxProfileCompletion;
@property (readonly, nonatomic) NSObject<IGEditProfileViewControllerTypeDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStartTime:(id)time isPresented:(BOOL)presented shouldAutoFocusFirstEmptyBusinessProfileField:(BOOL)field shouldCheckTopVC:(BOOL)vc shouldResetBiographyTranslation:(BOOL)translation isPresentFromNuxProfileCompletion:(BOOL)completion delegate:(id)delegate;
@end

#endif /* IGEditProfileIntentTarget_h */