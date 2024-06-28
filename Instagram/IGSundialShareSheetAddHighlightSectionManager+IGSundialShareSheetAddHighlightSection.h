//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialShareSheetAddHighlightSectionManager_IGSundialShareSheetAddHighlightSection_h
#define IGSundialShareSheetAddHighlightSectionManager_IGSundialShareSheetAddHighlightSection_h
@import Foundation;

@interface IGSundialShareSheetAddHighlightSectionManager (IGSundialShareSheetAddHighlightSection) <IGShareLinkedHighlightManagerDelegate>
/* instance methods */
- (void)linkedHighlightManagerDidFetchHighlights:(id)highlights;
- (void)linkedHighlightManager:(id)manager didSelectHighlightID:(id)id title:(id)title;
- (void)linkedHighlightManagerDidSelectSeeAll:(id)all;
- (void)linkedHighlightManager:(id)manager didToggleLinkedHighlight:(BOOL)highlight;
- (void)linkedHighlightManagerDidClearLinkedHighlight:(id)highlight;
@end

#endif /* IGSundialShareSheetAddHighlightSectionManager_IGSundialShareSheetAddHighlightSection_h */