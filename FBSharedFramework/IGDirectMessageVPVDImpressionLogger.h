//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageVPVDImpressionLogger_h
#define IGDirectMessageVPVDImpressionLogger_h
@import Foundation;

#include "IGUserSession.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGDirectMessageViewModelProtocol;

@interface IGDirectMessageVPVDImpressionLogger : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGDirectMessageViewModelProtocol> *_viewModel;
  IGUserSession *_userSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model userSession:(id)session;
- (void)fireImpressionForHandler:(id)handler key:(id)key maxDuration:(double)duration sumDuration:(double)duration;
@end

#endif /* IGDirectMessageVPVDImpressionLogger_h */
