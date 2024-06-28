//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFriendsMapNotesComposerModalIntentTarget_h
#define IGFriendsMapNotesComposerModalIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGDirectNotesComposerViewControllerDelegate-Protocol.h"
#include "IGPartialModalSheetListener-Protocol.h"

@class CLLocation, NSString;

@interface IGFriendsMapNotesComposerModalIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSObject<IGDirectNotesComposerViewControllerDelegate> *delegate;
@property (readonly, nonatomic) NSObject<IGPartialModalSheetListener> *modalSheetListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLocation:(id)location delegate:(id)delegate modalSheetListener:(id)listener;
@end

#endif /* IGFriendsMapNotesComposerModalIntentTarget_h */