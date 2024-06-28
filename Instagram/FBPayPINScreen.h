//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayPINScreen_h
#define FBPayPINScreen_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray, NSAttributedString, NSString;

@interface FBPayPINScreen : NSObject<NSObject> {
  /* instance variables */
  NSString *_screenContentType;
  NSAttributedString *_screenDescription;
  NSString *_editFieldTitle;
}

@property (readonly, copy, nonatomic) NSString *actionButtonText;
@property (readonly, copy, nonatomic) NSArray *errorMessages;
@property (readonly, copy, nonatomic) NSAttributedString *terms;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScreenContentType:(id)type title:(id)title subtitle:(id)subtitle screenDescription:(id)description actionButtonText:(id)text errorMessages:(id)messages editFieldTitle:(id)title terms:(id)terms;
@end

#endif /* FBPayPINScreen_h */