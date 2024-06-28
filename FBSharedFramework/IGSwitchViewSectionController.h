//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSwitchViewSectionController_h
#define IGSwitchViewSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "NSObject-Protocol.h"

@class NSString, UIColor;
@protocol IGSwitchViewSectionControllerDelegate;

@interface IGSwitchViewSectionController : IGListGenericSectionController<NSObject> {
  /* instance variables */
  BOOL _isSwitchOn;
  BOOL _highlightable;
  UIColor *_roundedBackgroundColor;
  BOOL _verticallyCenterSwitch;
}

@property (weak, nonatomic) NSObject<IGSwitchViewSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSwitchValue:(BOOL)value;
- (void)setHighlightable:(BOOL)highlightable;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)switchProvider:(id)provider switchToggled:(BOOL)toggled;
@end

#endif /* IGSwitchViewSectionController_h */
