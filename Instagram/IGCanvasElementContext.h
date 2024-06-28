//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCanvasElementContext_h
#define IGCanvasElementContext_h
@import Foundation;

@class NSString, UIColor;

@interface IGCanvasElementContext : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } inset;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, copy, nonatomic) NSString *loggingToken;
@property (readonly, nonatomic) unsigned long long layoutStyle;

/* instance methods */
- (id)initWithType:(unsigned long long)type inset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset backgroundColor:(id)color loggingToken:(id)token layoutStyle:(unsigned long long)style;
@end

#endif /* IGCanvasElementContext_h */