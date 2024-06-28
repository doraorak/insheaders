//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFPrefetchOperating_Protocol_h
#define FNFPrefetchOperating_Protocol_h
@import Foundation;

@protocol FNFPrefetchOperating <NSObject>

@property (copy, nonatomic) id /* block */ operationBlock;
@property (nonatomic) unsigned long long enqueueTimeMS;
@property (nonatomic) unsigned long long operationBlockStartTimeMS;
@property (nonatomic) unsigned long long shelfEnqueueTimeMS;

@end

#endif /* FNFPrefetchOperating_Protocol_h */
