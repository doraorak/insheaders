//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLeadGenFormInfoViewModel_h
#define IGLeadGenFormInfoViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGLeadGenFormInfoViewModel : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *pageName;
@property (readonly, copy, nonatomic) NSString *profilePictureURL;
@property (readonly, copy, nonatomic) NSString *heroMediaURL;
@property (readonly, copy, nonatomic) NSString *title;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithPageName:(id)name profilePictureURL:(id)url heroMediaURL:(id)url title:(id)title;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGLeadGenFormInfoViewModel_h */
