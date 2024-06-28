//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDSSegmentedPillBarViewDelegate_Protocol_h
#define IGDSSegmentedPillBarViewDelegate_Protocol_h
@import Foundation;

@protocol IGDSSegmentedPillBarViewDelegate <NSObject>
/* instance methods */
- (void)segmentedPillBar:(id)bar didTapPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didTapPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didLongPressPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didLongPressPillAtIndex:(unsigned long long)index;
- (BOOL)segmentedPillBar:(id)bar shouldDeselectPillAtIndex:(unsigned long long)index;
- (BOOL)segmentedPillBar:(id)bar shouldDeselectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar willDeselectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar willDeselectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didDeselectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didDeselectPillAtIndex:(unsigned long long)index;
- (BOOL)segmentedPillBar:(id)bar shouldSelectPillAtIndex:(unsigned long long)index;
- (BOOL)segmentedPillBar:(id)bar shouldSelectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar willSelectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar willSelectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didSelectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didSelectPillAtIndex:(unsigned long long)index;
@end

#endif /* IGDSSegmentedPillBarViewDelegate_Protocol_h */
