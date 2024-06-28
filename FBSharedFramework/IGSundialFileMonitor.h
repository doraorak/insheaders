//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialFileMonitor_h
#define IGSundialFileMonitor_h
@import Foundation;

#include "_TtP26IGSundialDraftFileObserver28IGSundialFileMonitorDelegate_-Protocol.h"

@interface IGSundialFileMonitor : NSObject { // (Swift)
  /* instance variables */
   url;
   fileHandle;
   source;
}

@property (nonatomic, weak) NSObject<_TtP26IGSundialDraftFileObserver28IGSundialFileMonitorDelegate_> *delegate;

/* instance methods */
- (id)initWithUrl:(id)url;
- (void)dealloc;
- (id)init;
@end

#endif /* IGSundialFileMonitor_h */