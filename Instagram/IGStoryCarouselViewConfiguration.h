//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryCarouselViewConfiguration_h
#define IGStoryCarouselViewConfiguration_h
@import Foundation;

@interface IGStoryCarouselViewConfiguration : NSObject

@property (readonly, nonatomic) double selectedItemWidth;
@property (readonly, nonatomic) double unselectedItemWidth;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) double padding;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) BOOL showViewerCount;

/* instance methods */
- (id)initWithSelectedItemWidth:(double)width unselectedItemWidth:(double)width aspectRatio:(double)ratio padding:(double)padding cornerRadius:(double)radius showViewerCount:(BOOL)count;
@end

#endif /* IGStoryCarouselViewConfiguration_h */
