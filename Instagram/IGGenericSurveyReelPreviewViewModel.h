//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGenericSurveyReelPreviewViewModel_h
#define IGGenericSurveyReelPreviewViewModel_h
@import Foundation;

@class IGStory, IGUserSession, NSString;

@interface IGGenericSurveyReelPreviewViewModel : NSObject

@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) IGStory *story;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (readonly, nonatomic) NSString *module;
@property (readonly, nonatomic) BOOL enableAutoplay;
@property (readonly, nonatomic) BOOL enableEnlargedPreview;

/* instance methods */
- (id)initWithUserSession:(id)session story:(id)story containerSize:(struct CGSize { double x0; double x1; })size module:(id)module enableAutoplay:(BOOL)autoplay enableEnlargedPreview:(BOOL)preview;
@end

#endif /* IGGenericSurveyReelPreviewViewModel_h */