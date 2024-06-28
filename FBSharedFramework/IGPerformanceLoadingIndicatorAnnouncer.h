//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPerformanceLoadingIndicatorAnnouncer_h
#define IGPerformanceLoadingIndicatorAnnouncer_h
@import Foundation;

#include "IGAnnouncer.h"

@class NSString;

@interface IGPerformanceLoadingIndicatorAnnouncer : IGAnnouncer {
  /* instance variables */
  unsigned long long _direction;
  NSString *_viewpointModelKey;
}

@property (readonly, nonatomic) BOOL isVisible;

/* instance methods */
- (id)initWithDirection:(unsigned long long)direction;
- (id)viewpointAction;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* IGPerformanceLoadingIndicatorAnnouncer_h */