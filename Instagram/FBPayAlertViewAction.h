//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayAlertViewAction_h
#define FBPayAlertViewAction_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBPayAlertViewAction : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long actionStyle;
@property (readonly, nonatomic) BOOL isPreferredAlertAction;
@property (readonly, copy, nonatomic) id /* block */ actionHandler;

/* instance methods */
- (id)initWithTitle:(id)title actionStyle:(long long)style isPreferredAlertAction:(BOOL)action actionHandler:(id /* block */)handler;
@end

#endif /* FBPayAlertViewAction_h */