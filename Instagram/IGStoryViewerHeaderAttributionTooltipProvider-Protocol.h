//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerHeaderAttributionTooltipProvider_Protocol_h
#define IGStoryViewerHeaderAttributionTooltipProvider_Protocol_h
@import Foundation;

@protocol IGStoryViewerHeaderAttributionTooltipProvider <NSObject>
/* instance methods */
- (BOOL)headerAttributionShouldShowTooltip;
- (void)headerAttributionWillShowTooltip;
- (id)headerAttributionTooltipText;
- (id)headerAttributionAnalyticsTag;
@end

#endif /* IGStoryViewerHeaderAttributionTooltipProvider_Protocol_h */