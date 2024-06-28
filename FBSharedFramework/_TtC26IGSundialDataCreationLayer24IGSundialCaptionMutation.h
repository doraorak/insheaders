//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC26IGSundialDataCreationLayer24IGSundialCaptionMutation_h
#define _TtC26IGSundialDataCreationLayer24IGSundialCaptionMutation_h
@import Foundation;

#include "_TtP26IGSundialDataCreationLayer21IGSundialDataMutation_-Protocol.h"

@class NSString;

@interface _TtC26IGSundialDataCreationLayer24IGSundialCaptionMutation : NSObject<_TtP26IGSundialDataCreationLayer21IGSundialDataMutation_> { // (Swift)
  /* instance variables */
   value;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) unsigned long long updateType;
@property (nonatomic, readonly) BOOL shouldBlockUndo;

/* instance methods */
- (id)initWithValue:(id)value;
- (id)handleWithConfig:(id)config input:(id)input next:(id)next;
- (BOOL)isEqualTo:(id)to;
- (id)init;
@end

#endif /* _TtC26IGSundialDataCreationLayer24IGSundialCaptionMutation_h */