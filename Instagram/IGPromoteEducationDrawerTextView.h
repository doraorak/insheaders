//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromoteEducationDrawerTextView_h
#define IGPromoteEducationDrawerTextView_h
@import Foundation;

#include "UIView.h"
#include "IGPromoteChevronViewCell.h"
#include "IGPromoteChevronViewModel.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGPromoteEducationDrawerTextViewDelegate;

@interface IGPromoteEducationDrawerTextView : UIView<NSObject> {
  /* instance variables */
  IGPromoteChevronViewModel *_chevronViewModel;
  IGPromoteChevronViewCell *_chevronViewCell;
}

@property (weak, nonatomic) NSObject<IGPromoteEducationDrawerTextViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessage:(id)message;
- (void)layoutSubviews;
- (void)promoteChevronViewDidTapCell:(id)cell;
@end

#endif /* IGPromoteEducationDrawerTextView_h */
