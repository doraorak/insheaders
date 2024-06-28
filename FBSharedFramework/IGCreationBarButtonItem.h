//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCreationBarButtonItem_h
#define IGCreationBarButtonItem_h
@import Foundation;

#include "UIBarButtonItem.h"
#include "IGCreationActionBarButton.h"

@interface IGCreationBarButtonItem : UIBarButtonItem {
  /* instance variables */
  BOOL _flexibleWidth;
}

@property (readonly, nonatomic) IGCreationActionBarButton *button;

/* instance methods */
- (id)initWithButton:(id)button flexibleWidth:(BOOL)width;
- (id)initWithCustomView:(id)view;
- (struct CGSize { double x0; double x1; })sizeThatFits:(double)fits;
- (double)width;
@end

#endif /* IGCreationBarButtonItem_h */
