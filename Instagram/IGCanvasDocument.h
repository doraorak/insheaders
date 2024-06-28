//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCanvasDocument_h
#define IGCanvasDocument_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSArray, NSString, UIColor;

@interface IGCanvasDocument : NSObject<NSCoding> {
  /* instance variables */
  BOOL _hasSwipeToOpenStyle;
  NSString *_documentId;
  NSString *_baseURLString;
}

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) BOOL showSeeMoreChrome;
@property (readonly, copy, nonatomic) NSArray *models;
@property (readonly, copy, nonatomic) NSString *htmlSource;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithResponse:(id)response;
@end

#endif /* IGCanvasDocument_h */