//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPromptsLogger_h
#define IGPromptsLogger_h
@import Foundation;

#include "IGStoryViewerLoggingContext.h"

@class IGUserSession, NSString;

@interface IGPromptsLogger : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_module;
  NSString *_entrypoint;
  IGStoryViewerLoggingContext *_loggingContext;
}

/* instance methods */
- (id)initWithModule:(id)module userSession:(id)session entrypoint:(long long)entrypoint loggingContext:(id)context;
@end

#endif /* IGPromptsLogger_h */