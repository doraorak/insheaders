//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC9IGSchools21IGSchoolsUIDatePicker_h
#define _TtC9IGSchools21IGSchoolsUIDatePicker_h
@import Foundation;

#include "UIPickerView.h"

@interface _TtC9IGSchools21IGSchoolsUIDatePicker : UIPickerView { // (Swift)
  /* instance variables */
   calendar;
   _maximumDate;
   _minimumDate;
   _date;
   months;
   years;
   target;
   action;
   onDateSelected;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
@end

#endif /* _TtC9IGSchools21IGSchoolsUIDatePicker_h */