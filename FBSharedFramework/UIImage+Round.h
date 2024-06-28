//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef UIImage_Round_h
#define UIImage_Round_h
@import Foundation;

@interface UIImage (Round)
/* class methods */
+ (id)losengeWithSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color borderColor:(id)color borderWidth:(double)width;
+ (id)losengeWithSize:(struct CGSize { double x0; double x1; })size gradientStartColor:(id)color gradientEndColor:(id)color gradientDirection:(long long)direction;
+ (id)losengeWithSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color borderColor:(id)color borderWidth:(double)width drawnBehindImage:(id)image;
+ (id)roundedRectWithSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color cornerRadius:(double)radius borderColor:(id)color borderWidth:(double)width drawnBehindImage:(id)image;
+ (id)ig_resizableOutlineRectWithCornerRadius:(double)radius outlineColor:(id)color;
+ (id)ig_resizableRoundedRectWithCornerRadius:(double)radius fillColor:(id)color;
+ (id)ig_resizableRoundedRectWithCornerRadius:(double)radius fillColor:(id)color outlineColor:(id)color;

/* instance methods */
- (id)roundedImageOfSize:(struct CGSize { double x0; double x1; })size borderColor:(id)color borderWidth:(double)width backgroundColor:(id)color;
- (id)roundedImageOfSize:(struct CGSize { double x0; double x1; })size borderColor:(id)color borderWidth:(double)width paddingWidth:(double)width backgroundColor:(id)color;
- (id)ig_roundedImageOfSize:(struct CGSize { double x0; double x1; })size cornerRadius:(double)radius;
- (id)imageWithRoundedBackgroundColor:(id)color andSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* UIImage_Round_h */