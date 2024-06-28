//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARFaceTrackingModelConfigurationAML_h
#define FBARFaceTrackingModelConfigurationAML_h
@import Foundation;

#include "FBARFaceTrackingModelConfiguring-Protocol.h"

@class NSDictionary, NSString;

@interface FBARFaceTrackingModelConfigurationAML : NSObject<FBARFaceTrackingModelConfiguring>

@property (readonly, copy, nonatomic) NSDictionary *cxxModelFilePaths;
@property (readonly, copy, nonatomic) NSString *expressionFittingModelFilePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithFaceDetectModelFilePath:(id)path faceTrackerModelFilePath:(id)path faceContourModelFilePath:(id)path faceMeshModelFilePath:(id)path expressionFittingModelFilePath:(id)path;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithModelFilePaths:(id)paths expressionFittingModelFilePath:(id)path;
- (id)copyWithExpressionFittingModelPath:(id)path;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBARFaceTrackingModelConfigurationAML_h */