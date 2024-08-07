//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAMediaSource_h
#define METAMediaSource_h
@import Foundation;

@class METAMediaSource *, NSError *, NSString, NSURL *;

@interface METAMediaSource : NSObject { // (Swift)
  /* instance variables */
   rootNode;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } size_deprecated;
@property (nonatomic, readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } duration_deprecated;
@property (nonatomic, readonly) float nominalFrameRate;
@property (nonatomic, readonly) struct CGColorSpace * colorSpace;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) float estimatedVideoDataRate;

/* class methods */
+ (BOOL)useSecureNSCoding;
+ (void)setUseSecureNSCoding:(BOOL)nscoding;

/* instance methods */
- (void)extentWithCompletionHandler:(id /* block */)handler;
- (void)sizeWithCompletionHandler:(id /* block */)handler;
- (void)durationWithCompletionHandler:(id /* block */)handler;
- (void)minFrameDurationWithCompletionHandler:(id /* block */)handler;
- (void)prepareWithReset:(BOOL)reset delegate:(<ImageSourcePrepareDelegate> *)delegate completionHandler:(id /* block */)handler;
- (void)prepareWithCompletionHandler:(id /* block */)handler;
- (void)cleanupWithCompletionHandler:(id /* block */)handler;
- (id)imageSourceAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })at error:(id *)error;
- (id)debugDescriptionWithLevel:(long long)level;
- (void)cloneTo:(NSURL *)to completionHandler:(id /* block */)handler;
- (id)withDynamicRange:(long long)range;
- (id)init;
@end

#endif /* METAMediaSource_h */
