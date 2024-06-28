//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStyledStringViewAttachment_h
#define IGStyledStringViewAttachment_h
@import Foundation;

@class NSAttributedString;

@interface IGStyledStringViewAttachment : NSObject {
  /* instance variables */
  struct __CTRunDelegate * _runDelegate;
}

@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double baselineOffset;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewSize;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)generateView;
@end

#endif /* IGStyledStringViewAttachment_h */
