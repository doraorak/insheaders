//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAPIValueObjectChangesCopier_h
#define IGAPIValueObjectChangesCopier_h
@import Foundation;

@class NSMutableDictionary;

@interface IGAPIValueObjectChangesCopier : NSObject {
  /* instance variables */
  NSMutableDictionary *_propertiesMap;
}

/* class methods */
+ (id)_capitalizeString:(id)string;

/* instance methods */
- (id)initWithSchema:(const struct IGAPIValueObjectSchema *)schema;
- (id)propertiesMapFromUpdates:(id /* block */)updates;
- (id)propertiesMapFromObject:(id)object withUpdates:(id /* block */)updates;
@end

#endif /* IGAPIValueObjectChangesCopier_h */
