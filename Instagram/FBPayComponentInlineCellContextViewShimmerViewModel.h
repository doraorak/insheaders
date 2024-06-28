//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayComponentInlineCellContextViewShimmerViewModel_h
#define FBPayComponentInlineCellContextViewShimmerViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface FBPayComponentInlineCellContextViewShimmerViewModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) unsigned long long numberOfShimmeringLines;
@property (readonly, nonatomic) double firstLineHorizontalSizeFactor;
@property (readonly, nonatomic) double secondLineHorizontalSizeFactor;
@property (readonly, nonatomic) double thirdLineHorizontalSizeFactor;
@property (readonly, nonatomic) double fourthLineHorizontalSizeFactor;
@property (readonly, nonatomic) double verticalSizeFactor;
@property (readonly, nonatomic) BOOL shouldShowLeftShimmerView;

/* instance methods */
- (id)initWithNumberOfShimmeringLines:(unsigned long long)lines firstLineHorizontalSizeFactor:(double)factor secondLineHorizontalSizeFactor:(double)factor thirdLineHorizontalSizeFactor:(double)factor fourthLineHorizontalSizeFactor:(double)factor verticalSizeFactor:(double)factor shouldShowLeftShimmerView:(BOOL)view;
@end

#endif /* FBPayComponentInlineCellContextViewShimmerViewModel_h */
