//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioSavedListIntentTarget_h
#define IGAudioSavedListIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGAudioBrowserModelsListViewControllerDelegate-Protocol.h"

@class NSString;
@protocol IGAudioBrowserLogger;

@interface IGAudioSavedListIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSObject<IGAudioBrowserLogger> *logger;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) unsigned long long bookmarkCallsSurface;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) NSObject<IGAudioBrowserModelsListViewControllerDelegate> *modelsListVCDelegate;
@property (readonly, nonatomic) BOOL isInitialActiveTabMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLogger:(id)logger category:(unsigned long long)category bookmarkCallsSurface:(unsigned long long)surface analyticsModule:(id)module modelsListVCDelegate:(id)vcdelegate isInitialActiveTabMusic:(BOOL)music;
@end

#endif /* IGAudioSavedListIntentTarget_h */
