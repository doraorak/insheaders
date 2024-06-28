//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18IGE2EEMediaManager35IGE2EECacheEvictionExpirationPolicy_h
#define _TtC18IGE2EEMediaManager35IGE2EECacheEvictionExpirationPolicy_h
@import Foundation;

#include "MSGEncryptedDiskCacheEvictionPolicy-Protocol.h"

@interface _TtC18IGE2EEMediaManager35IGE2EECacheEvictionExpirationPolicy : NSObject<MSGEncryptedDiskCacheEvictionPolicy> { // (Swift)
  /* instance variables */
   isEBEnabled;
   maxRetentionDays;
}

/* instance methods */
- (BOOL)shouldDeleteFileWithCreationDate:(id)date;
- (BOOL)shouldBeginDiskCacheEviction;
- (void)performMailboxActionThenDiskCacheEviction:(id /* block */)eviction;
- (long long)getTrimAmountInBytesGivenDiskUsage:(long long)usage;
- (id)init;
@end

#endif /* _TtC18IGE2EEMediaManager35IGE2EECacheEvictionExpirationPolicy_h */
