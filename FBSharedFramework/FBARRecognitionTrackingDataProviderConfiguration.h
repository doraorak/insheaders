//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARRecognitionTrackingDataProviderConfiguration_h
#define FBARRecognitionTrackingDataProviderConfiguration_h
@import Foundation;

#include "FBARServiceConfigurationCxx-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;
@protocol struct shared_ptr<arfx::services::IServiceConfiguration> { struct IServiceConfiguration * x0; struct __shared_weak_count * x1; }, {shared_ptr<facebook::mobile::xplat::executor::SerialAsyncExecutorFactory>="__ptr_"^{SerialAsyncExecutorFactory}"__cntrl_"^{__shared_weak_count}}, {vector<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator> *, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>>>="__value_"^v}}, {vector<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator> *, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>>>="__value_"^v}};

@interface FBARRecognitionTrackingDataProviderConfiguration : NSObject<FBARServiceConfigurationCxx, NSSecureCoding> {
  /* instance variables */
  struct vector<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>>> { void *__begin_; void *__end_; struct __compressed_pair<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator> *, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>>> { void *__value_; } __end_cap_; } trackerCreators_;
  struct vector<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>>> { void *__begin_; void *__end_; struct __compressed_pair<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator> *, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>>> { void *__value_; } __end_cap_; } recognizerCreators_;
  struct shared_ptr<facebook::mobile::xplat::executor::SerialAsyncExecutorFactory> { struct SerialAsyncExecutorFactory *__ptr_; struct __shared_weak_count *__cntrl_; } recognizerExecutorFactory_;
}

@property (readonly, nonatomic) struct ServiceType { int x0; } serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct shared_ptr<arfx::services::IServiceConfiguration> { struct IServiceConfiguration * x0; struct __shared_weak_count * x1; } engineServiceConfiguration;

/* class methods */
+ (id)newWithRecognizerCreators:(struct vector<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>>> { void * x0; void * x1; struct __compressed_pair<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator> *, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>>> { void * x0; } x2; })creators trackerCreators:(struct vector<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>>> { void * x0; void * x1; struct __compressed_pair<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator> *, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>>> { void * x0; } x2; })creators;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRecognizerCreators:(struct vector<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>>> { void * x0; void * x1; struct __compressed_pair<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator> *, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::IRecognizerCreator>>> { void * x0; } x2; })creators trackerCreators:(struct vector<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>>> { void * x0; void * x1; struct __compressed_pair<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator> *, std::allocator<arfx::shared_ref<msqrd::dataprovider::recognitiontracking::ITrackerCreator>>> { void * x0; } x2; })creators;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBARRecognitionTrackingDataProviderConfiguration_h */
