//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryPostCaptureEditingIntentTargetConfigurationBuilder_h
#define IGStoryPostCaptureEditingIntentTargetConfigurationBuilder_h
@import Foundation;

@class IGAREffectTargetModel;

@interface IGStoryPostCaptureEditingIntentTargetConfigurationBuilder : NSObject {
  /* instance variables */
  IGAREffectTargetModel *_arEffectTargetModel;
  unsigned long long _presentationMethod;
}

@property (nonatomic) BOOL modalPresentationCapturesStatusBarAppearance;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (id)build;
@end

#endif /* IGStoryPostCaptureEditingIntentTargetConfigurationBuilder_h */