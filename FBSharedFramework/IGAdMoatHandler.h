//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdMoatHandler_h
#define IGAdMoatHandler_h
@import Foundation;

#include "IGAdPlatformToolbox.h"

@class NSArray;

@interface IGAdMoatHandler : NSObject {
  /* instance variables */
  IGAdPlatformToolbox *_adPlatformToolbox;
  NSArray *_guards;
}

/* instance methods */
- (id)initWithAdPlatformToolbox:(id)toolbox loggingProvider:(id)provider;
- (BOOL)canInsertAt:(long long)at sponsoredItem:(id)item surfaceState:(id)state;
- (void)sponsoredItem:(id)item insertedAt:(long long)at entryIndex:(long long)index;
- (void)sessionEnd;
@end

#endif /* IGAdMoatHandler_h */
