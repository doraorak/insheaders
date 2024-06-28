//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegistrationAgePickerContainerViewModel_h
#define IGRegistrationAgePickerContainerViewModel_h
@import Foundation;

#include "IGRegistrationAgePickerTextFieldViewModel.h"

@class NSDate, NSString;

@interface IGRegistrationAgePickerContainerViewModel : NSObject

@property (readonly, nonatomic) NSString *feedbackText;
@property (readonly, nonatomic) NSDate *placeholderDate;
@property (readonly, nonatomic) IGRegistrationAgePickerTextFieldViewModel *textFieldViewModel;

/* instance methods */
- (id)initWithFeedbackText:(id)text placeholderDate:(id)date textFieldViewModel:(id)model;
@end

#endif /* IGRegistrationAgePickerContainerViewModel_h */