//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryAdTextModel_h
#define IGStoryAdTextModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGAPIDelayedCaptionDict.h"
#include "IGAPIStoryAdAutoCropCaptionInfoDict.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString, UIColor;

@interface IGStoryAdTextModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *shortenedText;
@property (readonly, copy, nonatomic) UIColor *textBackgroundColor;
@property (readonly, copy, nonatomic) UIColor *textColor;
@property (readonly, copy, nonatomic) IGAPIStoryAdAutoCropCaptionInfoDict *textArea;
@property (readonly, copy, nonatomic) NSString *textDescription;
@property (readonly, copy, nonatomic) NSNumber *textSize;
@property (readonly, copy, nonatomic) NSArray *mentionedUsers;
@property (readonly, copy, nonatomic) IGAPIDelayedCaptionDict *delayCaptionModel;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithText:(id)text shortenedText:(id)text textBackgroundColor:(id)color textColor:(id)color textArea:(id)area textDescription:(id)description textSize:(id)size mentionedUsers:(id)users delayCaptionModel:(id)model;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGStoryAdTextModel_h */
