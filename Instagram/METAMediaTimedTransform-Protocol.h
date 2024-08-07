//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAMediaTimedTransform_Protocol_h
#define METAMediaTimedTransform_Protocol_h
@import Foundation;

@protocol METAMediaTimedTransform <NSObject, NSCoding>

@property (nonatomic, readonly) struct { double x0; double x1; } timeRange;

/* instance methods */
- (id)toMetadata;
- (id)initFromMetadata:(id)metadata;
@end

#endif /* METAMediaTimedTransform_Protocol_h */
