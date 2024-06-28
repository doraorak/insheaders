//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SCPAuthenticityDocumentPicker_h
#define SCPAuthenticityDocumentPicker_h
@import Foundation;

#include "UIDocumentPickerDelegate-Protocol.h"

@class NSString, UIViewController;

@interface SCPAuthenticityDocumentPicker : NSObject<UIDocumentPickerDelegate> {
  /* instance variables */
  UIViewController *_presentingViewController;
  id _retainSelfUntilCompletion;
  id /* block */ _completion;
  id /* block */ _errorCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPresentingViewController:(id)controller;
- (void)documentPicker:(id)picker didPickDocumentsAtURLs:(id)urls;
- (void)documentPickerWasCancelled:(id)cancelled;
@end

#endif /* SCPAuthenticityDocumentPicker_h */