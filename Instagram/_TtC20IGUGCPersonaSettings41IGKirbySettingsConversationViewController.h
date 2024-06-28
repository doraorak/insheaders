//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGUGCPersonaSettings41IGKirbySettingsConversationViewController_h
#define _TtC20IGUGCPersonaSettings41IGKirbySettingsConversationViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC20IGUGCPersonaSettings41IGKirbySettingsConversationViewController : IGViewController { // (Swift)
  /* instance variables */
   delegate;
   userSession;
   logger;
   originalWelcomeMessage;
   originalIcebreakerPrompt1;
   originalIcebreakerPrompt2;
   originalIcebreakerPrompt3;
   didConfirmEdits;
   $__lazy_storage_$_scrollView;
   $__lazy_storage_$_welcomeMessageSectionTitle;
   $__lazy_storage_$_welcomeMessageSectionDescription;
   $__lazy_storage_$_icebreakersSectionTitle;
   $__lazy_storage_$_icebreakersSectionDescription;
   $__lazy_storage_$_welcomeMessageField;
   $__lazy_storage_$_icebreakerField1;
   $__lazy_storage_$_icebreakerField2;
   $__lazy_storage_$_icebreakerField3;
   persona;
   editingEnabled;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarDividerHidden;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)didTapDoneButton;
- (void)didTapBackButton;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC20IGUGCPersonaSettings41IGKirbySettingsConversationViewController_h */
