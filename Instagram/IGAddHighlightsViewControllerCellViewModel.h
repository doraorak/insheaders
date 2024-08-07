//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAddHighlightsViewControllerCellViewModel_h
#define IGAddHighlightsViewControllerCellViewModel_h
@import Foundation;

@class IGStory;

@interface IGAddHighlightsViewControllerCellViewModel : NSObject {
  /* instance variables */
  BOOL _isOpalHighlight;
}

@property (readonly, nonatomic) IGStory *story;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isSelectable;
@property (readonly, nonatomic) BOOL isSelected;

/* instance methods */
- (id)initWithReel:(id)reel isPlaceholder:(BOOL)placeholder isSelectable:(BOOL)selectable isSelected:(BOOL)selected isOpalHighlight:(BOOL)highlight;
@end

#endif /* IGAddHighlightsViewControllerCellViewModel_h */
