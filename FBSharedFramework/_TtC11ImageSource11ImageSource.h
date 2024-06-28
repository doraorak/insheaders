//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC11ImageSource11ImageSource_h
#define _TtC11ImageSource11ImageSource_h
@import Foundation;

@class CIImage;

@interface _TtC11ImageSource11ImageSource : NSObject { // (Swift)
  /* instance variables */
   rootNode;
   renderPlan;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } extent;
@property (nonatomic, readonly) struct CGColorSpace * colorSpace;
@property (nonatomic, readonly) CIImage *ciImage;

/* instance methods */
- (id)init;
- (struct CGImage *)createCGImageWithContext:(id)context;
@end

#endif /* _TtC11ImageSource11ImageSource_h */
