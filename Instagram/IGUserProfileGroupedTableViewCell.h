//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserProfileGroupedTableViewCell_h
#define IGUserProfileGroupedTableViewCell_h
@import Foundation;

#include "IGGroupedTableViewProfileCell.h"

@class IGTextField;

@interface IGUserProfileGroupedTableViewCell : IGGroupedTableViewProfileCell

@property (readonly, nonatomic) IGTextField *usernameField;

/* instance methods */
- (id)init;
- (double)leftImagePadding;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;
@end

#endif /* IGUserProfileGroupedTableViewCell_h */
