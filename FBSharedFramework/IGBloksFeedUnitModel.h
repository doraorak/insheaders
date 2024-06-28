//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBloksFeedUnitModel_h
#define IGBloksFeedUnitModel_h
@import Foundation;

#include "IGAdPlatformGapRules.h"
#include "IGListDiffable-Protocol.h"
#include "IGNetegoBloksProviding-Protocol.h"
#include "IGNetegoItem-Protocol.h"
#include "NSCoding-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface IGBloksFeedUnitModel : NSObject<IGListDiffable, IGNetegoItem, NSCoding, IGNetegoBloksProviding> {
  /* instance variables */
  NSString *_type;
  unsigned long long _viewStateItemType;
  NSString *_listKitUUID;
}

@property (readonly, nonatomic) NSString *pk;
@property (readonly, nonatomic) NSString *trackingToken;
@property (readonly, nonatomic) NSDictionary *bloksData;
@property (readonly, nonatomic) NSArray *displayedMedia;
@property (readonly, nonatomic) BOOL isFullscreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IGAdPlatformGapRules *gapRules;

/* instance methods */
- (id)initWithPK:(id)pk trackingToken:(id)token type:(id)type bloksData:(id)data gapRules:(id)rules displayedMedia:(id)media viewStateItemType:(unsigned long long)type isFullscreen:(BOOL)fullscreen;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)type;
- (id)netegoStringType;
- (id)unitItemId;
- (unsigned long long)unitItemType;
- (unsigned long long)serverViewStateItemType;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGBloksFeedUnitModel_h */