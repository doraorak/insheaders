//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEditorTrayAccessibilityElement_h
#define IGEditorTrayAccessibilityElement_h
@import Foundation;

#include "UIAccessibilityElement.h"

@class IGAccessibilityCollectionController;

@interface IGEditorTrayAccessibilityElement : UIAccessibilityElement {
  /* instance variables */
  IGAccessibilityCollectionController *_accessibilityCollectionController;
}

@property (nonatomic) long long currentIndex;

/* instance methods */
- (id)initWithCollectionController:(id)controller accessibilityContainer:(id)container;
- (void)setCollectionView:(id)view;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityScroll:(long long)scroll;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)accessibilityActivate;
- (id)accessibilityCustomActions;
- (BOOL)accessibilityPerformMagicTap;
@end

#endif /* IGEditorTrayAccessibilityElement_h */
