//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectXMAClipCommentPreviewViewModel_h
#define IGDirectXMAClipCommentPreviewViewModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class IGImageSpecifier, NSString;

@interface IGDirectXMAClipCommentPreviewViewModel : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGImageSpecifier *_bubble_imageSpecifier;
  NSString *_bubble_commentText;
  NSString *_xmaStyle_commentCount;
  NSString *_xmaStyle_username;
  NSString *_xmaStyle_commentText;
}

/* class methods */
+ (id)bubbleWithImageSpecifier:(id)specifier commentText:(id)text;
+ (id)xmaStyleWithCommentCount:(id)count username:(id)username commentText:(id)text;

/* instance methods */
@end

#endif /* IGDirectXMAClipCommentPreviewViewModel_h */