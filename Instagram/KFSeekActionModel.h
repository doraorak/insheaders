//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KFSeekActionModel_h
#define KFSeekActionModel_h
@import Foundation;

#include "KFActionModel.h"

@interface KFSeekActionModel : KFActionModel

@property (nonatomic) double progress;

/* instance methods */
- (id)initWithProgress:(double)progress;
- (id)createActionWithInteractivityToolbox:(id)toolbox;
@end

#endif /* KFSeekActionModel_h */