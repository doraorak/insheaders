//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFInteractionGroup_h
#define KFInteractionGroup_h
@import Foundation;

#include "KFInteractionGroupModel.h"
#include "KFInteractivityToolbox.h"

@class NSArray;

@interface KFInteractionGroup : NSObject {
  /* instance variables */
  KFInteractionGroupModel *_model;
  KFInteractivityToolbox *_toolbox;
  NSArray *_interactions;
}

/* instance methods */
- (id)initWithInteractionGroupModel:(id)model toolbox:(id)toolbox;
- (void)start;
@end

#endif /* KFInteractionGroup_h */