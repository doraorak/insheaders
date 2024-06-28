//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC13IABPixelEvent20IABPixelEventManager_h
#define _TtC13IABPixelEvent20IABPixelEventManager_h
@import Foundation;

#include "EnigmaIABListener-Protocol.h"

@interface _TtC13IABPixelEvent20IABPixelEventManager : NSObject<EnigmaIABListener> { // (Swift)
  /* instance variables */
   receiversPublisher;
   pixelEventSubject;
   shouldAccumulatePixelData;
}

/* instance methods */
- (void)process:(id)process;
- (id)init;
@end

#endif /* _TtC13IABPixelEvent20IABPixelEventManager_h */
