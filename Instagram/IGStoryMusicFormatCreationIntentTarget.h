//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMusicFormatCreationIntentTarget_h
#define IGStoryMusicFormatCreationIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGPartialModalSheetListener-Protocol.h"
#include "IGStoryMusicFirstCreationHandlerDelegate-Protocol.h"

@class IGPartialModalSheetHeightBehavior, NSString;

@interface IGStoryMusicFormatCreationIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSObject<IGStoryMusicFirstCreationHandlerDelegate> *creationDelegate;
@property (readonly, nonatomic) IGPartialModalSheetHeightBehavior *partialModalSheetHeightBehavior;
@property (readonly, nonatomic) NSObject<IGPartialModalSheetListener> *partialModalSheetListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCreationDelegate:(id)delegate partialModalSheetHeightBehavior:(id)behavior partialModalSheetListener:(id)listener;
@end

#endif /* IGStoryMusicFormatCreationIntentTarget_h */