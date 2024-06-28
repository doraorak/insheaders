//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRankingDataFetchContext_h
#define IGRankingDataFetchContext_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface IGRankingDataFetchContext : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *mediaId;
@property (readonly, copy, nonatomic) NSNumber *countPerPage;
@property (readonly, copy, nonatomic) NSString *pageMaxId;
@property (readonly, copy, nonatomic) NSArray *recentRecipients;
@property (readonly, nonatomic) BOOL isFirstPage;
@property (readonly, nonatomic) BOOL shouldPaginate;
@property (readonly, nonatomic) BOOL isPrivateShare;
@property (readonly, nonatomic) BOOL isTwoPageVariant;
@property (readonly, copy, nonatomic) NSDictionary *ibcShareSheetParams;
@property (readonly, copy, nonatomic) NSDictionary *eventsShareSheetParams;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithMediaId:(id)id countPerPage:(id)page pageMaxId:(id)id recentRecipients:(id)recipients isFirstPage:(BOOL)page shouldPaginate:(BOOL)paginate isPrivateShare:(BOOL)share isTwoPageVariant:(BOOL)variant ibcShareSheetParams:(id)params eventsShareSheetParams:(id)params;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGRankingDataFetchContext_h */
