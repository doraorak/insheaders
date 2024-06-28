//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationAddPictureIntentTarget_h
#define IGRegistrationAddPictureIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGNUXLayoutSpec.h"
#include "IGStandardizedNUXLayoutSpec.h"

@class NSString;
@protocol IGRegistrationAddPictureViewControllerDelegate;

@interface IGRegistrationAddPictureIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGNUXLayoutSpec *layoutSpec;
@property (readonly, nonatomic) IGStandardizedNUXLayoutSpec *standardizedLayoutSpec;
@property (readonly, nonatomic) BOOL isNUXRedesignEnabled;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSObject<IGRegistrationAddPictureViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLayoutSpec:(id)spec standardizedLayoutSpec:(id)spec isNUXRedesignEnabled:(BOOL)enabled source:(long long)source delegate:(id)delegate;
@end

#endif /* IGRegistrationAddPictureIntentTarget_h */