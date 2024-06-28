//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef BKImagePerfInfoEventAnnouncer_h
#define BKImagePerfInfoEventAnnouncer_h
@import Foundation;

#include "NSObject-Protocol.h"

@class BKContext, BKLispyExpression, NSString;

@interface BKImagePerfInfoEventAnnouncer : NSObject<NSObject> {
  /* instance variables */
  BKContext *_bloksContext;
  BKLispyExpression *_onImagePerfUpdateExpr;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUpdateCallbackExpression:(id)expression bloksContext:(id)context;
- (void)didUpdateImagePerf:(id)perf forEvent:(unsigned long long)event atTime:(double)time;
@end

#endif /* BKImagePerfInfoEventAnnouncer_h */
