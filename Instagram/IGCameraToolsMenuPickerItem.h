//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraToolsMenuPickerItem_h
#define IGCameraToolsMenuPickerItem_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString, UIImage;

@interface IGCameraToolsMenuPickerItem : NSObject<NSCopying> {
  /* instance variables */
  id _loggableValue;
}

@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;

/* instance methods */
- (id)initWithImage:(id)image accessibilityLabel:(id)label;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGCameraToolsMenuPickerItem_h */