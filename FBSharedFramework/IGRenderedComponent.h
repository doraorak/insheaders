//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRenderedComponent_h
#define IGRenderedComponent_h
@import Foundation;

@class NSMutableDictionary, NSString;

@interface IGRenderedComponent : NSObject {
  /* instance variables */
  NSMutableDictionary *_analyticsExtras;
  NSString *_componentKey;
}

/* instance methods */
- (id)initWithComponentKey:(id)key;
- (void)setString:(id)string forKey:(id)key;
- (void)setNumber:(id)number forKey:(id)key;
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)setArray:(id)array forKey:(id)key;
- (id)renderingAnalyticsExtras;
@end

#endif /* IGRenderedComponent_h */