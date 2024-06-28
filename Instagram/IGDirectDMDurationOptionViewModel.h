//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectDMDurationOptionViewModel_h
#define IGDirectDMDurationOptionViewModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"

@class NSString;

@interface IGDirectDMDurationOptionViewModel : NSObject<IGListDiffable> {
  /* instance variables */
  NSString *_diffIdentifier;
  NSString *_expiryDurationAsText;
}

@property (readonly, nonatomic) long long expiryDurationInSeconds;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isDisabled;

/* instance methods */
- (id)initWithExpiryDurationInSeconds:(long long)seconds isSelected:(BOOL)selected isDisabled:(BOOL)disabled launcherSetProvider:(id)provider;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGDirectDMDurationOptionViewModel_h */
