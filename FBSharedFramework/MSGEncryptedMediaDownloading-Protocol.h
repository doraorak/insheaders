//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MSGEncryptedMediaDownloading_Protocol_h
#define MSGEncryptedMediaDownloading_Protocol_h
@import Foundation;

@protocol MSGEncryptedMediaDownloading <NSObject>
/* instance methods */
- (void)setMailbox:(id)mailbox;
- (void)loadEncryptedMediaWithMediaURL:(id)url requestToken:(id)token downloaderOptions:(struct { id x0; long long x1; id x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; BOOL x6; id x7; unsigned long long x8; })options callbackQueue:(id)queue downloadProgressBlock:(id /* block */)block completion:(id /* block */)completion;
- (void)removeImageFromCache:(id)cache cacheRemovalSource:(unsigned long long)source;
- (void)downloadEncryptedVideoWithMediaURL:(id)url requestToken:(id)token encryptedPayload:(id)payload completion:(id /* block */)completion;
@end

#endif /* MSGEncryptedMediaDownloading_Protocol_h */
