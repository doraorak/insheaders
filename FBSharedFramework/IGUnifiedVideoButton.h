//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUnifiedVideoButton_h
#define IGUnifiedVideoButton_h
@import Foundation;

#include "IGBouncyButton.h"
#include "IGEDRViewType-Protocol.h"

@class NSString, UIImageView;

@interface IGUnifiedVideoButton : IGBouncyButton<IGEDRViewType> {
  /* instance variables */
  UIImageView *_iconImageView;
  double _sizeScale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIcon:(unsigned long long)icon;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setPushedDown:(BOOL)down;
- (BOOL)isAccessibilityElement;
- (void)setEDR:(BOOL)edr;
@end

#endif /* IGUnifiedVideoButton_h */