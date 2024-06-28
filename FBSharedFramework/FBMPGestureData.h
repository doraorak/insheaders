//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMPGestureData_h
#define FBMPGestureData_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, NSUUID;

@interface FBMPGestureData : NSObject<NSObject>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) long long phase;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } locationInView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } viewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUUID:(id)uuid phase:(long long)phase locationInView:(struct CGPoint { double x0; double x1; })view viewSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale;
@end

#endif /* FBMPGestureData_h */
