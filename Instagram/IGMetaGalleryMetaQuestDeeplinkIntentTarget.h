//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMetaGalleryMetaQuestDeeplinkIntentTarget_h
#define IGMetaGalleryMetaQuestDeeplinkIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGMetaGalleryMetaQuestDeeplinkIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *surfaceEntryPoint;
@property (readonly, nonatomic) long long cameraEntryPoint;
@property (readonly, nonatomic) NSString *albumFolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSurfaceEntryPoint:(id)point cameraEntryPoint:(long long)point albumFolder:(id)folder;
@end

#endif /* IGMetaGalleryMetaQuestDeeplinkIntentTarget_h */
