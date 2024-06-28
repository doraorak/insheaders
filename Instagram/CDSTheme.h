//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef CDSTheme_h
#define CDSTheme_h
@import Foundation;

#include "CDSTokenResolver.h"

@class NSString;

@interface CDSTheme : NSObject {
  /* instance variables */
  CDSTokenResolver *_tokenResolver;
}

@property (readonly, nonatomic) NSString *name;

/* instance methods */
- (id)initWithName:(unsigned long long)name;
- (id)shadowWithToken:(unsigned long long)token;
@end

#endif /* CDSTheme_h */