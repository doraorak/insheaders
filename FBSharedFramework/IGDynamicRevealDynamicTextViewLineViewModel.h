//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDynamicRevealDynamicTextViewLineViewModel_h
#define IGDynamicRevealDynamicTextViewLineViewModel_h
@import Foundation;

@class NSArray, NSString, UIFont;

@interface IGDynamicRevealDynamicTextViewLineViewModel : NSObject {
  /* instance variables */
  NSArray *_wordModels;
}

@property (readonly, nonatomic) UIFont *font;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *words;

/* instance methods */
- (id)initWithFont:(id)font text:(id)text width:(double)width height:(double)height wordModels:(id)models;
@end

#endif /* IGDynamicRevealDynamicTextViewLineViewModel_h */
