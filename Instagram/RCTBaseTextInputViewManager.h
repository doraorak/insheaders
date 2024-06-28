//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTBaseTextInputViewManager_h
#define RCTBaseTextInputViewManager_h
@import Foundation;

#include "RCTBaseTextViewManager.h"
#include "RCTUIManagerObserver-Protocol.h"

@class NSHashTable, NSString;

@interface RCTBaseTextInputViewManager : RCTBaseTextViewManager<RCTUIManagerObserver> {
  /* instance variables */
  NSHashTable *_shadowViews;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)moduleName;
+ (void)load;
+ (id)propConfig_autoCapitalize;
+ (id)propConfig_autoCorrect;
+ (id)propConfig_contextMenuHidden;
+ (id)propConfig_editable;
+ (id)propConfig_enablesReturnKeyAutomatically;
+ (id)propConfig_keyboardAppearance;
+ (id)propConfig_placeholder;
+ (id)propConfig_placeholderTextColor;
+ (id)propConfig_returnKeyType;
+ (id)propConfig_selectionColor;
+ (id)propConfig_spellCheck;
+ (id)propConfig_caretHidden;
+ (id)propConfig_clearButtonMode;
+ (id)propConfig_scrollEnabled;
+ (id)propConfig_secureTextEntry;
+ (id)propConfig_smartInsertDelete;
+ (id)propConfig_autoFocus;
+ (id)propConfig_submitBehavior;
+ (id)propConfig_clearTextOnFocus;
+ (id)propConfig_keyboardType;
+ (id)propConfig_showSoftInputOnFocus;
+ (id)propConfig_maxLength;
+ (id)propConfig_selectTextOnFocus;
+ (id)propConfig_selection;
+ (id)propConfig_inputAccessoryViewID;
+ (id)propConfig_textContentType;
+ (id)propConfig_passwordRules;
+ (id)propConfig_onChange;
+ (id)propConfig_onKeyPressSync;
+ (id)propConfig_onChangeSync;
+ (id)propConfig_onSelectionChange;
+ (id)propConfig_onTextInput;
+ (id)propConfig_onScroll;
+ (id)propConfig_mostRecentEventCount;
+ (id)propConfigShadow_text;
+ (id)propConfigShadow_placeholder;
+ (id)propConfigShadow_onContentSizeChange;
+ (id)propConfig_multiline;
+ (const struct RCTMethodInfo *)__rct_export__1080;
+ (const struct RCTMethodInfo *)__rct_export__1161;
+ (const struct RCTMethodInfo *)__rct_export__1292;

/* instance methods */
- (void)set_multiline:(id)set_multiline forView:(id)view withDefaultView:(id)view;
- (id)shadowView;
- (void)setBridge:(id)bridge;
- (void)focus:(id)focus;
- (void)blur:(id)blur;
- (void)setTextAndSelection:(id)selection mostRecentEventCount:(long long)count value:(id)value start:(long long)start end:(long long)end;
- (void)uiManagerWillPerformMounting:(id)mounting;
- (void)handleDidUpdateMultiplierNotification;
@end

#endif /* RCTBaseTextInputViewManager_h */