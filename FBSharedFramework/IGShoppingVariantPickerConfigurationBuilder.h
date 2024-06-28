//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingVariantPickerConfigurationBuilder_h
#define IGShoppingVariantPickerConfigurationBuilder_h
@import Foundation;

#include "IGShoppingVariantPickerOutOfStockValueStyle.h"

@interface IGShoppingVariantPickerConfigurationBuilder : NSObject {
  /* instance variables */
  id /* block */ _titleBlock;
  id /* block */ _subtitleBlock;
  id /* block */ _canShowSizeChartBlock;
  id /* block */ _textPickerSectionConfiguration;
  IGShoppingVariantPickerOutOfStockValueStyle *_outOfStockValueStyle;
}

/* instance methods */
- (id)initWithTitleBlock:(id /* block */)block;
- (id)build;
@end

#endif /* IGShoppingVariantPickerConfigurationBuilder_h */
