//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGUGCPersonaSettings31IGUGCPersonaSettingsFactsEditor_h
#define _TtC20IGUGCPersonaSettings31IGUGCPersonaSettingsFactsEditor_h
@import Foundation;

#include "IGViewController.h"
#include "UITextViewDelegate-Protocol.h"

@interface _TtC20IGUGCPersonaSettings31IGUGCPersonaSettingsFactsEditor : IGViewController<UITextViewDelegate> { // (Swift)
  /* instance variables */
   logger;
   scrollView;
   textField;
   deleteCell;
   originalFact;
   isAddingFact;
   didConfirmEdits;
   didDeleteFact;
   editingEnabled;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)textViewDidChange:(id)change;
- (void)didTapDoneButton;
- (void)didTapBackButton;
- (void)didTapDeleteCell;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC20IGUGCPersonaSettings31IGUGCPersonaSettingsFactsEditor_h */
