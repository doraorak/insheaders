//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBTolerantRemovalDelegate_h
#define FBTolerantRemovalDelegate_h
@import Foundation;

#include "NSFileManagerDelegate-Protocol.h"

@class NSString;

@interface FBTolerantRemovalDelegate : NSObject<NSFileManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)fileManager:(id)manager shouldProceedAfterError:(id)error removingItemAtURL:(id)url;
- (BOOL)fileManager:(id)manager shouldProceedAfterError:(id)error removingItemAtPath:(id)path;
@end

#endif /* FBTolerantRemovalDelegate_h */
