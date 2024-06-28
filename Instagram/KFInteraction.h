//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFInteraction_h
#define KFInteraction_h
@import Foundation;

#include "KFInteractionModel.h"
#include "KFInteractivityListener-Protocol.h"
#include "KFInteractivityToolbox.h"

@class NSMutableArray, NSString;

@interface KFInteraction : NSObject<KFInteractivityListener> {
  /* instance variables */
  KFInteractionModel *_model;
  KFInteractivityToolbox *_toolbox;
  NSMutableArray *_events;
  NSMutableArray *_actions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithInteractionModel:(id)model toolbox:(id)toolbox;
- (void)start;
- (void)onInteractivityEvent:(id)event;
- (void)onActivateInteractionGroup:(id)group;
- (void)onDeactivateInteractionGroup:(id)group;
@end

#endif /* KFInteraction_h */
