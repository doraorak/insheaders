//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKAccessibilityAction_h
#define BKAccessibilityAction_h
@import Foundation;

#include "BKAccessibilityElementProxy.h"

@class BKContext, BKModel, NSArray, NSMutableDictionary;

@interface BKAccessibilityAction : BKAccessibilityElementProxy {
  /* instance variables */
  BKModel *_model;
  BKModel *_extensionModel;
  BKContext *_context;
  const struct BKA11yActionsConfig * _config;
  NSMutableDictionary *_cachedParsedExpressions;
  NSArray *_cachedCustomActions;
}

/* instance methods */
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)scroll;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityPerformMagicTap;
- (id)accessibilityCustomActions;
- (BOOL)handleCustomAction:(id)action;
@end

#endif /* BKAccessibilityAction_h */
