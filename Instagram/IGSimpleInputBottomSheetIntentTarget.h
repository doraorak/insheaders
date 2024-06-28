//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSimpleInputBottomSheetIntentTarget_h
#define IGSimpleInputBottomSheetIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGSimpleInputViewControllerDelegate-Protocol.h"

@class NSString;

@interface IGSimpleInputBottomSheetIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *placeholderText;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *prefilledTextFieldText;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) NSObject<IGSimpleInputViewControllerDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long maxCharacterCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTitle:(id)title placeholderText:(id)text descriptionText:(id)text prefilledTextFieldText:(id)text analyticsModule:(id)module delegate:(id)delegate maxCharacterCount:(unsigned long long)count;
@end

#endif /* IGSimpleInputBottomSheetIntentTarget_h */
