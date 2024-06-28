//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchResultSectionControllerLoggingProvider_Protocol_h
#define IGSearchResultSectionControllerLoggingProvider_Protocol_h
@import Foundation;

@protocol IGSearchResultSectionControllerLoggingProvider <NSObject>
/* instance methods */
- (BOOL)isReadyForImpressionLogging;
- (BOOL)isReadyForImpressionLoggingForViewModel:(id)model;
- (id)searchSessionId;
- (id)shoppingSessionId;
- (id)serpSource;
- (id)serpSessionId;
- (id)searchTerm;
- (id)rankToken;
- (id)analyticsModule;
- (id)searchType;
- (id)priorModule;
- (id)priorSerpSessionId;
- (id)priorQuery;
- (BOOL)isMixedContentSerp;
- (id)followAttributionEntryTrigger;
@end

#endif /* IGSearchResultSectionControllerLoggingProvider_Protocol_h */
