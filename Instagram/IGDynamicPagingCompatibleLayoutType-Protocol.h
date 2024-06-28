//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDynamicPagingCompatibleLayoutType_Protocol_h
#define IGDynamicPagingCompatibleLayoutType_Protocol_h
@import Foundation;

@protocol IGDynamicPagingCompatibleLayoutType <NSObject>

@property (nonatomic, weak) NSObject<IGDynamicPagingCompatibleLayoutDelegate> *delegate;
@property (nonatomic, readonly) double fractionalSectionIndex;
@property (nonatomic, readonly) double fractionalPageIndex;
@property (nonatomic, readonly) long long projectedPageIndex;
@property (nonatomic, readonly) long long projectedSectionIndex;
@property (nonatomic, readonly) double normalizedVerticalOffset;

/* instance methods */
- (double)heightForPageAtSectionIndex:(long long)index;
- (double)heightForPageAtSectionIndex:(long long)index;
- (double)heightForSectionAtIndex:(long long)index;
- (double)heightForSectionAtIndex:(long long)index;
- (BOOL)isCompactPageAtSectionIndex:(long long)index;
- (BOOL)isCompactPageAtSectionIndex:(long long)index;
- (BOOL)isCompactPageAtIndex:(long long)index;
- (BOOL)isCompactPageAtIndex:(long long)index;
- (double)pageOffsetAtIndex:(long long)index;
- (double)pageOffsetAtIndex:(long long)index;
- (double)pageOffsetForItemAtSectionIndex:(long long)index;
- (double)pageOffsetForItemAtSectionIndex:(long long)index;
- (long long)firstSectionAtPageIndex:(long long)index;
- (long long)firstSectionAtPageIndex:(long long)index;
- (long long)sectionCountAtPageIndex:(long long)index;
- (long long)sectionCountAtPageIndex:(long long)index;
@end

#endif /* IGDynamicPagingCompatibleLayoutType_Protocol_h */