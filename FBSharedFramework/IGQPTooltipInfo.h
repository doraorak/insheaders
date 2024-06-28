//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQPTooltipInfo_h
#define IGQPTooltipInfo_h
@import Foundation;

#include "IGQPTooltipAnchorID.h"

@class NSNumber, UIView;

@interface IGQPTooltipInfo : NSObject {
  /* instance variables */
  BOOL _shouldTrackContainerView;
  UIView *_attachmentView;
}

@property (readonly, copy, nonatomic) IGQPTooltipAnchorID *anchorID;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (readonly, weak, nonatomic) NSNumber *padding;

/* instance methods */
- (id)initWithAnchorID:(id)id containerView:(id)view shouldTrackContainerView:(BOOL)view attachmentView:(id)view padding:(id)padding;
@end

#endif /* IGQPTooltipInfo_h */
