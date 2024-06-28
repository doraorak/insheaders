//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHighlightsEditViewModel_h
#define IGHighlightsEditViewModel_h
@import Foundation;

@class NSString, UIImage;

@interface IGHighlightsEditViewModel : NSObject {
  /* instance variables */
  UIImage *_emptyViewIcon;
  NSString *_emptyViewTitle;
  NSString *_emptyViewSubtitle;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *headerText;

/* instance methods */
- (id)initWithTitle:(id)title emptyViewIcon:(id)icon emptyViewTitle:(id)title emptyViewSubtitle:(id)subtitle headerText:(id)text;
@end

#endif /* IGHighlightsEditViewModel_h */