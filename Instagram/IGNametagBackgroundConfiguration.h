//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGNametagBackgroundConfiguration_h
#define IGNametagBackgroundConfiguration_h
@import Foundation;

@class NSArray;

@interface IGNametagBackgroundConfiguration : NSObject {
  /* instance variables */
  NSArray *_backgroundGradientColors;
  long long _cardGradientDirection;
  NSArray *_cardGradientColors;
}

@property (nonatomic) long long backgroundGradientDirection;
@property (nonatomic) BOOL selected;

/* instance methods */
- (id)initWithBackgroundGradientDirection:(long long)direction backgroundGradientColors:(id)colors cardGradientDirection:(long long)direction cardGradientColors:(id)colors;
@end

#endif /* IGNametagBackgroundConfiguration_h */
