//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchTabContext_h
#define IGSearchTabContext_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, UIImage;

@interface IGSearchTabContext : NSObject<NSObject> {
  /* instance variables */
  UIImage *_fallbackIcon;
  NSString *_accessibilityIdentifier;
  NSString *_accessibilityLabel;
  NSString *_accessibilityHint;
  unsigned long long _searchType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFallbackIcon:(id)icon accessibilityIdentifier:(id)identifier accessibilityLabel:(id)label accessibilityHint:(id)hint searchType:(unsigned long long)type;
- (id)fallbackIcon;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (unsigned long long)searchType;
@end

#endif /* IGSearchTabContext_h */