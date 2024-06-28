//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSmartSuggestionSingleCTABuilder_h
#define IGDirectSmartSuggestionSingleCTABuilder_h
@import Foundation;

@class NSString;

@interface IGDirectSmartSuggestionSingleCTABuilder : NSObject {
  /* instance variables */
  NSString *_title;
  BOOL _usePrimaryStyling;
}

/* class methods */
+ (id)directSmartSuggestionSingleCTAFromExistingDirectSmartSuggestionSingleCTA:(id)cta;

/* instance methods */
- (id)initWithTitle:(id)title;
- (id)build;
- (id)withTitle:(id)title;
- (id)withUsePrimaryStyling:(BOOL)styling;
@end

#endif /* IGDirectSmartSuggestionSingleCTABuilder_h */
