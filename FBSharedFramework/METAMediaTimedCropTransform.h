//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAMediaTimedCropTransform_h
#define METAMediaTimedCropTransform_h
@import Foundation;

#include "METAMediaTimedTransform-Protocol.h"

@class NSString;

@interface METAMediaTimedCropTransform : NSObject<METAMediaTimedTransform>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropBoxStart;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cropBoxEnd;
@property (readonly, nonatomic) struct { double x0; double x1; } timeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStartingCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })crop endingCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })crop timeRange:(struct { double x0; double x1; })range;
- (id)initWithCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })crop timeRange:(struct { double x0; double x1; })range;
- (id)initFromMetadata:(id)metadata;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)toMetadata;
@end

#endif /* METAMediaTimedCropTransform_h */
