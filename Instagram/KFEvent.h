//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFEvent_h
#define KFEvent_h
@import Foundation;

#include "KFEventModel.h"
#include "KFInteractivityToolbox.h"

@interface KFEvent : NSObject {
  /* instance variables */
  KFInteractivityToolbox *_toolbox;
  KFEventModel *_model;
  BOOL _active;
}

/* instance methods */
- (id)initWithInteractivityToolbox:(id)toolbox model:(id)model;
- (void)dealloc;
- (void)activate;
- (void)deactivate;
@end

#endif /* KFEvent_h */
