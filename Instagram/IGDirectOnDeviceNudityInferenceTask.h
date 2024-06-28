//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectOnDeviceNudityInferenceTask_h
#define IGDirectOnDeviceNudityInferenceTask_h
@import Foundation;

#include "NSOperation.h"
#include "MantleManager.h"

@class IGDirectInferenceEligibleMedia, NSArray, NSError, NSNumber, NSString;
@protocol IGDirectOnDeviceNudityInferenceTaskDelegate, OS_dispatch_queue;

@interface IGDirectOnDeviceNudityInferenceTask : NSOperation {
  /* instance variables */
  NSObject<IGDirectOnDeviceNudityInferenceTaskDelegate> *_delegate;
  NSString *_mediaFBID;
  NSString *_configString;
  NSString *_modelPath;
  MantleManager *_mantleManager;
  NSNumber *_result;
  NSObject<OS_dispatch_queue> *_queue;
  struct CGImage * _image;
  char * _imageByteArray;
  NSArray *_mantleDataArray;
}

@property (nonatomic) BOOL executing;
@property (nonatomic) BOOL finished;
@property (readonly, nonatomic) IGDirectInferenceEligibleMedia *media;
@property (readonly, nonatomic) NSError *error;

/* instance methods */
- (id)initWithInferenceEligibleMedia:(id)media image:(struct CGImage *)image modelPath:(id)path configString:(id)string mantleManager:(id)manager queue:(id)queue delegate:(id)delegate;
- (void)dealloc;
- (void)main;
- (BOOL)isExecuting;
- (BOOL)isFinished;
@end

#endif /* IGDirectOnDeviceNudityInferenceTask_h */