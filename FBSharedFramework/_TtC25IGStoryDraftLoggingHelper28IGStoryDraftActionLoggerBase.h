//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC25IGStoryDraftLoggingHelper28IGStoryDraftActionLoggerBase_h
#define _TtC25IGStoryDraftLoggingHelper28IGStoryDraftActionLoggerBase_h
@import Foundation;

#include "_TtP25IGStoryDraftLoggingHelper24IGStoryDraftActionLogger_-Protocol.h"

@interface _TtC25IGStoryDraftLoggingHelper28IGStoryDraftActionLoggerBase : NSObject<_TtP25IGStoryDraftLoggingHelper24IGStoryDraftActionLogger_> {
  /* instance variables */
   complete;
   started;
}

/* instance methods */
- (void)start;
- (void)error:(id)error;
- (void)success;
- (id)init;
@end

#endif /* _TtC25IGStoryDraftLoggingHelper28IGStoryDraftActionLoggerBase_h */