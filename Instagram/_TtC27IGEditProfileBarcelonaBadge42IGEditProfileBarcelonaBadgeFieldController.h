//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC27IGEditProfileBarcelonaBadge42IGEditProfileBarcelonaBadgeFieldController_h
#define _TtC27IGEditProfileBarcelonaBadge42IGEditProfileBarcelonaBadgeFieldController_h
@import Foundation;

#include "IGGroupedTableViewCellDelegate-Protocol.h"

@class IGGroupedTableViewCell;

@interface _TtC27IGEditProfileBarcelonaBadge42IGEditProfileBarcelonaBadgeFieldController : NSObject<IGGroupedTableViewCellDelegate> { // (Swift)
  /* instance variables */
   $__lazy_storage_$_tableViewCell;
   userSession;
   fieldUpdateErrorToastPresenter;
   analyticsModule;
}

@property (nonatomic) BOOL value;
@property (nonatomic, retain) IGGroupedTableViewCell *tableViewCell;

/* instance methods */
- (id)initWithUserSession:(id)session fieldUpdateErrorToastPresenter:(id)presenter analyticsModule:(id)module;
- (void)groupedTableViewCell:(id)cell didChangeParam:(id)param toValue:(id)value isFromSlider:(BOOL)slider;
- (id)init;
@end

#endif /* _TtC27IGEditProfileBarcelonaBadge42IGEditProfileBarcelonaBadgeFieldController_h */
