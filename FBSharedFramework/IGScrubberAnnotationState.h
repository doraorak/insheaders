//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGScrubberAnnotationState_h
#define IGScrubberAnnotationState_h
@import Foundation;

@class NSString, UICollectionViewLayout;
@protocol IGScrubberAnnotationDataSource, IGScrubberAnnotationDelegate;

@interface IGScrubberAnnotationState : NSObject {
  /* instance variables */
  UICollectionViewLayout *_layout;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _viewportFrame;
}

@property (weak, nonatomic) NSObject<IGScrubberAnnotationDataSource> *dataSource;
@property (weak, nonatomic) NSObject<IGScrubberAnnotationDelegate> *delegate;
@property (readonly, copy, nonatomic) NSString *displayString;

/* instance methods */
- (id)initWithCollectionViewLayout:(id)layout;
- (void)reload;
@end

#endif /* IGScrubberAnnotationState_h */