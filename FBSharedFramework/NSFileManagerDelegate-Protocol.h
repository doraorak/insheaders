//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSFileManagerDelegate_Protocol_h
#define NSFileManagerDelegate_Protocol_h
@import Foundation;

@protocol NSFileManagerDelegate <NSObject>
@optional
/* instance methods */
- (BOOL)fileManager:(id)manager shouldCopyItemAtPath:(id)path toPath:(id)path;
- (BOOL)fileManager:(id)manager shouldCopyItemAtURL:(id)url toURL:(id)url;
- (BOOL)fileManager:(id)manager shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path;
- (BOOL)fileManager:(id)manager shouldProceedAfterError:(id)error copyingItemAtURL:(id)url toURL:(id)url;
- (BOOL)fileManager:(id)manager shouldMoveItemAtPath:(id)path toPath:(id)path;
- (BOOL)fileManager:(id)manager shouldMoveItemAtURL:(id)url toURL:(id)url;
- (BOOL)fileManager:(id)manager shouldProceedAfterError:(id)error movingItemAtPath:(id)path toPath:(id)path;
- (BOOL)fileManager:(id)manager shouldProceedAfterError:(id)error movingItemAtURL:(id)url toURL:(id)url;
- (BOOL)fileManager:(id)manager shouldLinkItemAtPath:(id)path toPath:(id)path;
- (BOOL)fileManager:(id)manager shouldLinkItemAtURL:(id)url toURL:(id)url;
- (BOOL)fileManager:(id)manager shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path;
- (BOOL)fileManager:(id)manager shouldProceedAfterError:(id)error linkingItemAtURL:(id)url toURL:(id)url;
- (BOOL)fileManager:(id)manager shouldRemoveItemAtPath:(id)path;
- (BOOL)fileManager:(id)manager shouldRemoveItemAtURL:(id)url;
- (BOOL)fileManager:(id)manager shouldProceedAfterError:(id)error removingItemAtPath:(id)path;
- (BOOL)fileManager:(id)manager shouldProceedAfterError:(id)error removingItemAtURL:(id)url;
@end

#endif /* NSFileManagerDelegate_Protocol_h */
