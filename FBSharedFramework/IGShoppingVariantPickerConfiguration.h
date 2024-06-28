//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingVariantPickerConfiguration_h
#define IGShoppingVariantPickerConfiguration_h
@import Foundation;

#include "IGShoppingTextVariantPickerConfiguration.h"
#include "IGShoppingThumbnailVariantPickerConfiguration.h"

@interface IGShoppingVariantPickerConfiguration : NSObject

@property (readonly, nonatomic) IGShoppingThumbnailVariantPickerConfiguration *thumbnailPickerConfiguration;
@property (readonly, nonatomic) IGShoppingTextVariantPickerConfiguration *textPickerConfiguration;

/* instance methods */
- (id)initWithThumbnailPickerConfiguration:(id)configuration textPickerConfiguration:(id)configuration;
@end

#endif /* IGShoppingVariantPickerConfiguration_h */
