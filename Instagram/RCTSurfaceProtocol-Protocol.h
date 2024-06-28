//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTSurfaceProtocol_Protocol_h
#define RCTSurfaceProtocol_Protocol_h
@import Foundation;

@protocol RCTSurfaceProtocol <NSObject>

@property (readonly) long long stage;
@property (readonly) NSString *moduleName;
@property (weak) NSObject<RCTSurfaceDelegate> *delegate;
@property (readonly) NSNumber *rootViewTag;
@property (copy) NSDictionary *properties;
@property (readonly) long long rootTag;
@property (readonly) struct CGSize { double x0; double x1; } intrinsicSize;

/* instance methods */
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })size maximumSize:(struct CGSize { double x0; double x1; })size;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })size maximumSize:(struct CGSize { double x0; double x1; })size viewportOffset:(struct CGPoint { double x0; double x1; })offset;
- (id)view;
- (struct CGSize { double x0; double x1; })sizeThatFitsMinimumSize:(struct CGSize { double x0; double x1; })size maximumSize:(struct CGSize { double x0; double x1; })size;
- (void)start;
- (void)stop;
@end

#endif /* RCTSurfaceProtocol_Protocol_h */