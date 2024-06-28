//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStorySettingsDisclosureViewModel_h
#define IGStorySettingsDisclosureViewModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"

@class NSString;

@interface IGStorySettingsDisclosureViewModel : NSObject<IGListDiffable> {
  /* instance variables */
  BOOL _hideTrailingContentView;
  unsigned long long _disclosureRowType;
}

@property (readonly, copy, nonatomic) NSString *titleText;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSString *disclosureText;

/* instance methods */
- (id)initWithDisclosureRowType:(unsigned long long)type titleText:(id)text descriptionText:(id)text disclosureText:(id)text;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGStorySettingsDisclosureViewModel_h */