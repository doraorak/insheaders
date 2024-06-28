//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStorySettingsIntentTarget_h
#define IGStorySettingsIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGStorySettingsIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) long long settingOptions;
@property (readonly, nonatomic) BOOL prefersTabBarHidden;
@property (readonly, nonatomic) long long entryPoint;
@property (readonly, nonatomic) BOOL isPresentedModally;
@property (readonly, nonatomic) unsigned long long scrollOptions;
@property (readonly, nonatomic) id /* block */ onDoneButtonPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSettingOptions:(long long)options prefersTabBarHidden:(BOOL)hidden entryPoint:(long long)point isPresentedModally:(BOOL)modally scrollOptions:(unsigned long long)options onDoneButtonPress:(id /* block */)press;
@end

#endif /* IGStorySettingsIntentTarget_h */
