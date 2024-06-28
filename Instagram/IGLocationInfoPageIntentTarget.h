//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationInfoPageIntentTarget_h
#define IGLocationInfoPageIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class IGAPILocationDict, IGInfoLinkedBusinessViewModel, IGLocationInfoPageModel, NSString;

@interface IGLocationInfoPageIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGAPILocationDict *location;
@property (readonly, nonatomic) IGLocationInfoPageModel *infoPageModel;
@property (readonly, nonatomic) IGInfoLinkedBusinessViewModel *linkedBusinessModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLocation:(id)location infoPageModel:(id)model linkedBusinessModel:(id)model;
@end

#endif /* IGLocationInfoPageIntentTarget_h */
