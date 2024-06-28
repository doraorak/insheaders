//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC27IGBrandedContentSuggestions33IGBrandedContentSuggestionFetcher_h
#define _TtC27IGBrandedContentSuggestions33IGBrandedContentSuggestionFetcher_h
@import Foundation;

@class NSArray;

@interface _TtC27IGBrandedContentSuggestions33IGBrandedContentSuggestionFetcher : NSObject { // (Swift)
  /* instance variables */
   userSession;
   delegate;
   projectsMetadata;
   approvedBrands;
   $__lazy_storage_$_projectsFetcher;
}

@property (nonatomic, copy) NSArray *suggestions;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)initWithUserSession:(id)session delegate:(id)delegate;
- (void)fetch;
- (id)init;
@end

#endif /* _TtC27IGBrandedContentSuggestions33IGBrandedContentSuggestionFetcher_h */
