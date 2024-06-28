//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAddClipIntentTarget_h
#define IGSundialAddClipIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class IGSundialComposition, IGSundialReplaceSingleVideoClipInfo, NSString;
@protocol IGSundialAddClipViewControllerDelegate;

@interface IGSundialAddClipIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGSundialComposition *composition;
@property (readonly, nonatomic) NSObject<IGSundialAddClipViewControllerDelegate> *delegate;
@property (readonly, nonatomic) IGSundialReplaceSingleVideoClipInfo *replaceSingleVideoClipInfo;
@property (readonly, nonatomic) BOOL shouldForceCameraOverGallery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithComposition:(id)composition delegate:(id)delegate replaceSingleVideoClipInfo:(id)info shouldForceCameraOverGallery:(BOOL)gallery;
@end

#endif /* IGSundialAddClipIntentTarget_h */
