//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPrimerInfoItem_h
#define IGPrimerInfoItem_h
@import Foundation;

#include "IGStyledString.h"

@class NSString, UIImage;

@interface IGPrimerInfoItem : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, copy, nonatomic) IGStyledString *styledString;

/* instance methods */
@end

#endif /* IGPrimerInfoItem_h */