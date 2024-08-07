//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP16IGStartupContext24IGStartupContextProtocol__Protocol_h
#define _TtP16IGStartupContext24IGStartupContextProtocol__Protocol_h
@import Foundation;

@protocol _TtP16IGStartupContext24IGStartupContextProtocol_ <NSObject>

@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) long long origin;
@property (nonatomic, readonly) long long applicationState;
@property (nonatomic, readonly) _TtC20IGStartupAnalyzerQPL25IGStartupAnalyzerQPLEvent *qplEvent;
@property (nonatomic, readonly) BOOL applicationDidBecomeActive;
@property (nonatomic, readonly) long long destinationSurface;
@property (nonatomic, readonly) BOOL isActive;

/* instance methods */
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)updateOrigin:(long long)origin;
- (BOOL)canBeMergedWithQplModuleId:(int)id;
- (void)willEndOnSurface:(long long)surface;
- (void)successWithSurface:(long long)surface;
- (void)cancelWithSurface:(long long)surface reason:(id)reason;
- (void)failWithSurface:(long long)surface reason:(id)reason;
@end

#endif /* _TtP16IGStartupContext24IGStartupContextProtocol__Protocol_h */
