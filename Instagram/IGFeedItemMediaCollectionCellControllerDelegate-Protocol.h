//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemMediaCollectionCellControllerDelegate_Protocol_h
#define IGFeedItemMediaCollectionCellControllerDelegate_Protocol_h
@import Foundation;

@protocol IGFeedItemMediaCollectionCellControllerDelegate <NSObject>
/* instance methods */
- (void)mediaCollectionCellControllerDidTapOnCTA:(id)cta;
- (void)mediaCollectionCellControllerDidTapOnCTA:(id)cta;
- (void)mediaCollectionCellControllerAccessibilityDidTapOnCTA:(id)cta;
- (void)mediaCollectionCellControllerAccessibilityDidTapOnCTA:(id)cta;
- (void)mediaCollectionCellController:(id)controller didDoubleTapOnCell:(id)cell locationInfo:(id)info;
- (void)mediaCollectionCellController:(id)controller didDoubleTapOnCell:(id)cell locationInfo:(id)info;
- (void)mediaCollectionCellController:(id)controller didSingleTapOnModernVideoCell:(id)cell;
- (void)mediaCollectionCellControllerDidTapOnNonVideoCellAccessibility:(id)accessibility;
- (void)mediaCollectionCellControllerDidTapOnNonVideoCellAccessibility:(id)accessibility;
- (void)mediaCollectionCellDidSingleTapThumbnailWithiOSLinks:(id)oslinks productItem:(id)item tappableComponent:(id)component;
- (void)mediaCollectionCellController:(id)controller didSingleTapCTAThumbnailWithDirectResponseInfo:(id)info;
- (void)mediaCollectionCellController:(id)controller didSingleTapCTAThumbnailWithDirectResponseInfo:(id)info;
- (void)mediaCollectionCellAccessibilityDidSingleTapThumbnailWithiOSLinks:(id)oslinks productItem:(id)item tappableComponent:(id)component;
@end

#endif /* IGFeedItemMediaCollectionCellControllerDelegate_Protocol_h */
