//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImageViewAnimatedTransitioningProviderToggleable_h
#define IGImageViewAnimatedTransitioningProviderToggleable_h
@import Foundation;

#include "IGImageViewAnimatedTransitioningProviding-Protocol.h"

@class NSString;

@interface IGImageViewAnimatedTransitioningProviderToggleable : NSObject<IGImageViewAnimatedTransitioningProviding> {
  /* instance variables */
  long long _behavior;
}

@property (nonatomic) BOOL animationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBehavior:(long long)behavior;
- (unsigned long long)imageView:(id)view animatedTransitionFromState:(id)state toState:(id)state;
@end

#endif /* IGImageViewAnimatedTransitioningProviderToggleable_h */