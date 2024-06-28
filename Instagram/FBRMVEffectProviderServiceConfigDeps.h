//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBRMVEffectProviderServiceConfigDeps_h
#define FBRMVEffectProviderServiceConfigDeps_h
@import Foundation;

@class FBARPlatformEventsDataProviderConfiguration, FBARPlatformTexturesServiceConfiguration, FBARWorldTrackingDataProviderConfiguration, NSDictionary;
@protocol FBARCameraSLAMControlling, FBARGalleryPickerServiceDataSource, FBARNativeUIControlServicePickerDelegate><FBARNativeUIControlServiceSliderDelegate><FBARNativeUIControlServiceRawEditableTextDelegate;

@interface FBRMVEffectProviderServiceConfigDeps : NSObject

@property (readonly, nonatomic) FBARPlatformEventsDataProviderConfiguration *platformEventsConfig;
@property (readonly, nonatomic) NSDictionary *effectCameraShareArguments;
@property (readonly, nonatomic) NSObject<FBARCameraSLAMControlling> *cameraSLAMController;
@property (readonly, nonatomic) FBARWorldTrackingDataProviderConfiguration *worldTrackingDataProviderConfiguration;
@property (readonly, nonatomic) NSObject<FBARNativeUIControlServicePickerDelegate><FBARNativeUIControlServiceSliderDelegate><FBARNativeUIControlServiceRawEditableTextDelegate> *nativeUIControlHandler;
@property (readonly, nonatomic) FBARPlatformTexturesServiceConfiguration *platformTexturesConfiguration;
@property (readonly, nonatomic) NSObject<FBARGalleryPickerServiceDataSource> *galleryPickerServiceDataSource;

/* instance methods */
- (id)initWithPlatformEventsConfig:(id)config effectCameraShareArguments:(id)arguments cameraSLAMController:(id)slamcontroller worldTrackingDataProviderConfiguration:(id)configuration nativeUIControlHandler:(id)handler platformTexturesConfiguration:(id)configuration galleryPickerServiceDataSource:(id)source;
@end

#endif /* FBRMVEffectProviderServiceConfigDeps_h */
