//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationSuggestionDelegate_Protocol_h
#define IGLocationSuggestionDelegate_Protocol_h
@import Foundation;

@protocol IGLocationSuggestionDelegate <NSObject>
/* instance methods */
- (void)locationSuggestionCell:(id)cell didFinishWithLocation:(id)location;
- (void)locationSuggestionCell:(id)cell didSelectTokenWithLocation:(id)location;
- (void)locationSuggestionCelldidClearLocation:(id)location;
- (void)locationSuggestionCell:(id)cell stateChanged:(long long)changed;
@end

#endif /* IGLocationSuggestionDelegate_Protocol_h */