//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGListReloadIndexPath_h
#define IGListReloadIndexPath_h
@import Foundation;

@class NSIndexPath;

@interface IGListReloadIndexPath : NSObject

@property (readonly, nonatomic) NSIndexPath *fromIndexPath;
@property (readonly, nonatomic) NSIndexPath *toIndexPath;

/* instance methods */
- (id)initWithFromIndexPath:(id)path toIndexPath:(id)path;
@end

#endif /* IGListReloadIndexPath_h */