//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdEmptyViewButtonConfig_h
#define IGAdEmptyViewButtonConfig_h
@import Foundation;

@class NSString, UIColor, UIFont;

@interface IGAdEmptyViewButtonConfig : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIFont *font;

/* instance methods */
- (id)initWithTitle:(id)title backgroundColor:(id)color textColor:(id)color font:(id)font;
@end

#endif /* IGAdEmptyViewButtonConfig_h */