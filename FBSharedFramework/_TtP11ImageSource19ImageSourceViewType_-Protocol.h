//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP11ImageSource19ImageSourceViewType__Protocol_h
#define _TtP11ImageSource19ImageSourceViewType__Protocol_h
@import Foundation;

@protocol _TtP11ImageSource19ImageSourceViewType_ 

@property (nonatomic, retain) NSObject<_TtP11ImageSource29ImageSourceViewRenderDelegate_> *renderDelegate;
@property (nonatomic) BOOL preferCoreImageRendering;
@property (nonatomic) BOOL shouldMinimizeMemory;
@property (nonatomic) BOOL enforceSingleRendering;
@property (nonatomic) BOOL shouldMinimizeDrawables;

/* instance methods */
- (void)render:(id)render;
- (void)flushCacheWithReset:(BOOL)reset;
@end

#endif /* _TtP11ImageSource19ImageSourceViewType__Protocol_h */
