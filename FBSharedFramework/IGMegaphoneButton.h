//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMegaphoneButton_h
#define IGMegaphoneButton_h
@import Foundation;

@class NSString, NSURL, UIColor;

@interface IGMegaphoneButton : NSObject

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) NSString *action;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL dismissPromotion;
@property (readonly, nonatomic) BOOL showSpinner;

/* instance methods */
- (id)initWithText:(id)text url:(id)url backgroundColor:(id)color borderColor:(id)color textColor:(id)color action:(id)action dismissPromotion:(BOOL)promotion showSpinner:(BOOL)spinner;
- (id)initWithText:(id)text style:(long long)style url:(id)url action:(id)action dismissPromotion:(BOOL)promotion showSpinner:(BOOL)spinner;
@end

#endif /* IGMegaphoneButton_h */