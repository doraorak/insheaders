//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SNAnimationTemplateContent_h
#define SNAnimationTemplateContent_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SNAnimationTemplateContent : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *templateName;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSArray *assetsInfo;

/* instance methods */
- (id)initWithTemplateName:(id)name content:(id)content assets:(id)assets assetsInfo:(id)info;
@end

#endif /* SNAnimationTemplateContent_h */
