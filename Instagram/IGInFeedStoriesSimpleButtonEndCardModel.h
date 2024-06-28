//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInFeedStoriesSimpleButtonEndCardModel_h
#define IGInFeedStoriesSimpleButtonEndCardModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGInFeedStoriesSimpleButtonEndCardModel : NSObject<NSObject>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *buttonText;
@property (readonly, nonatomic) long long actionType;
@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, nonatomic) long long endCardType;
@property (readonly, copy, nonatomic) NSString *filteringTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)makeWithPK:(id)pk type:(long long)type filteringTag:(id)tag entryDictionary:(id)dictionary objectStores:(id)stores;

/* instance methods */
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGInFeedStoriesSimpleButtonEndCardModel_h */