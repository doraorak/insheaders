//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKFxImProfilePictureEditorController_h
#define BKFxImProfilePictureEditorController_h
@import Foundation;

#include "BKBloksComponentController.h"
#include "BKFxImProfilePictureEditorView.h"

@interface BKFxImProfilePictureEditorController : BKBloksComponentController {
  /* instance variables */
  BKFxImProfilePictureEditorView *_editorView;
}

/* instance methods */
- (void)didAcquireView:(id)view;
- (void)willRelinquishView:(id)view;
- (void)saveAction;
- (void)editAction;
- (void)applyFrame:(id)frame;
@end

#endif /* BKFxImProfilePictureEditorController_h */