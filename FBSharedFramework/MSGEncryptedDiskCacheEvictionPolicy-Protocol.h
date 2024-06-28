//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MSGEncryptedDiskCacheEvictionPolicy_Protocol_h
#define MSGEncryptedDiskCacheEvictionPolicy_Protocol_h
@import Foundation;

@protocol MSGEncryptedDiskCacheEvictionPolicy <NSObject>
/* instance methods */
- (BOOL)shouldDeleteFileWithCreationDate:(id)date;
- (BOOL)shouldDeleteFileWithCreationDate:(id)date;
- (BOOL)shouldBeginDiskCacheEviction;
- (long long)getTrimAmountInBytesGivenDiskUsage:(long long)usage;
- (long long)getTrimAmountInBytesGivenDiskUsage:(long long)usage;
- (void)performMailboxActionThenDiskCacheEviction:(id /* block */)eviction;
@end

#endif /* MSGEncryptedDiskCacheEvictionPolicy_Protocol_h */
