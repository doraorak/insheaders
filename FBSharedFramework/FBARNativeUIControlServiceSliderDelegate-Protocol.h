//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARNativeUIControlServiceSliderDelegate_Protocol_h
#define FBARNativeUIControlServiceSliderDelegate_Protocol_h
@import Foundation;

@protocol FBARNativeUIControlServiceSliderDelegate <NSObject>
/* instance methods */
- (void)nativeUIControlServiceForEffectDescriptor:(id)descriptor showSliderWithValueChangedCallback:(id /* block */)callback;
- (void)hideSliderForNativeUIControlServiceWithEffectDescriptor:(id)descriptor;
- (void)nativeUIControlServiceForEffectDescriptor:(id)descriptor didChangeSliderValue:(double)value;
- (void)nativeUIControlServiceForEffectDescriptor:(id)descriptor configureSliderWithConfiguration:(id)configuration;
@end

#endif /* FBARNativeUIControlServiceSliderDelegate_Protocol_h */