//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDiscoverPeopleConnectionItemConfiguration_h
#define IGDiscoverPeopleConnectionItemConfiguration_h
@import Foundation;

#include "IGListDiffable-Protocol.h"

@class IGUser, NSString, UIColor, UIImage;

@interface IGDiscoverPeopleConnectionItemConfiguration : NSObject<IGListDiffable> {
  /* instance variables */
  BOOL _shouldShowActionButtonSpinner;
  BOOL _shouldUseFollowListPadding;
  BOOL _shouldUsePeopleCellPadding;
  IGUser *_avatarIconUser;
  UIColor *_iconBorderColor;
}

@property (readonly, nonatomic) long long connectionType;
@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, copy, nonatomic) NSString *detailText;
@property (readonly, copy, nonatomic) NSString *actionButtonText;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIColor *iconTintColor;
@property (readonly, nonatomic) BOOL isDismissable;
@property (readonly, nonatomic) BOOL shouldShowBottomSeparator;
@property (readonly, nonatomic) double iconScale;

/* instance methods */
- (id)initWithConnectionType:(long long)type titleText:(id)text detailText:(id)text actionButtonText:(id)text avatarIconUser:(id)user icon:(id)icon iconTintColor:(id)color iconScale:(double)scale iconBorderColor:(id)color isDismissable:(BOOL)dismissable shouldShowActionButtonSpinner:(BOOL)spinner shouldUseFollowListPadding:(BOOL)padding shouldShowBottomSeparator:(BOOL)separator shouldUsePeopleCellPadding:(BOOL)padding;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGDiscoverPeopleConnectionItemConfiguration_h */