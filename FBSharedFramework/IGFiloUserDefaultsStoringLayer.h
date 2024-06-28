//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFiloUserDefaultsStoringLayer_h
#define IGFiloUserDefaultsStoringLayer_h
@import Foundation;

#include "IGFiloLayer.h"

@class NSUserDefaults;

@interface IGFiloUserDefaultsStoringLayer : IGFiloLayer {
  /* instance variables */
  NSUserDefaults *_userDefaults;
}

/* instance methods */
- (id)initWithIdentifier:(id)identifier userDefaults:(id)defaults;
- (id)allKeysAttributedTo:(id)to;
- (BOOL)containsKey:(id)key attributedTo:(id)to;
- (id)receiveValueForKey:(id)key attributedTo:(id)to error:(id *)error;
- (void)sendValue:(id)value forKey:(id)key attributedTo:(id)to completion:(id /* block */)completion;
- (void)flushAttributedTo:(id)to completion:(id /* block */)completion;
@end

#endif /* IGFiloUserDefaultsStoringLayer_h */
