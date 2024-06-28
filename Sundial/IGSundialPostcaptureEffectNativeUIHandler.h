//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialPostcaptureEffectNativeUIHandler_h
#define IGSundialPostcaptureEffectNativeUIHandler_h
@import Foundation;

#include "IGPostCaptureARControllerNativeUIDelegate-Protocol.h"
#include "IGTextInputResponder.h"

@class NSString, UIView;
@protocol IGAREffectPlatformEventsSender, IGSundialPostcaptureEffectNativeUIHandlerDelegate;

@interface IGSundialPostcaptureEffectNativeUIHandler : NSObject<IGPostCaptureARControllerNativeUIDelegate> {
  /* instance variables */
  IGTextInputResponder *_arEffectTextInputResponder;
  NSObject<IGSundialPostcaptureEffectNativeUIHandlerDelegate> *_delegate;
  UIView *_containerView;
  NSObject<IGAREffectPlatformEventsSender> *_platformEventsSender;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)postCaptureARControllerShouldShowTextInput:(id)input currentText:(id)text;
- (void)postCaptureARControllerShouldHideTextInput:(id)input;
- (void)postCaptureARControllerShouldShowEditableTextInput:(id)input currentText:(id)text;
- (void)textInputResponderTextDidChange:(id)change;
- (void)textInputResponderDidTapDone:(id)done;
@end

#endif /* IGSundialPostcaptureEffectNativeUIHandler_h */
