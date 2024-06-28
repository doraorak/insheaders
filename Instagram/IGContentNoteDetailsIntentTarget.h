//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContentNoteDetailsIntentTarget_h
#define IGContentNoteDetailsIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class FBWeakObjectContainer, IGContentNoteModel, IGContentNotesDefaultLoggingInfo, IGMedia, NSString;

@interface IGContentNoteDetailsIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGContentNoteModel *note;
@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) IGContentNotesDefaultLoggingInfo *defaultLoggingInfo;
@property (readonly, nonatomic) FBWeakObjectContainer *presentingViewController;
@property (readonly, nonatomic) FBWeakObjectContainer *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNote:(id)note media:(id)media analyticsModule:(id)module defaultLoggingInfo:(id)info presentingViewController:(id)controller delegate:(id)delegate;
@end

#endif /* IGContentNoteDetailsIntentTarget_h */