//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC33IGDInstamadilloMediaUploadHandler33IGDInstamadilloMediaUploadHandler_h
#define _TtC33IGDInstamadilloMediaUploadHandler33IGDInstamadilloMediaUploadHandler_h
@import Foundation;

#include "IGDInstamadilloMediaUploading-Protocol.h"

@interface _TtC33IGDInstamadilloMediaUploadHandler33IGDInstamadilloMediaUploadHandler : NSObject<IGDInstamadilloMediaUploading> { // (Swift)
  /* instance variables */
   mailboxProvider;
   videoTranscoder;
   userPK;
}

/* instance methods */
- (id)initWithMailboxProvider:(id)provider videoTranscoder:(id)transcoder userPK:(id)pk;
- (void)renderVideoComposition:(id)composition userPk:(id)pk renderId:(id)id completion:(id /* block */)completion;
- (void)renderMediaSource:(id)source videoConfig:(id)config userPk:(id)pk renderId:(id)id completion:(id /* block */)completion;
- (void)uploadMediaWithFileURL:(id)url mediaType:(long long)type completion:(id /* block */)completion;
- (id)pendingMediaURLWithUploadId:(id)id fileExtension:(id)extension;
- (id)init;
@end

#endif /* _TtC33IGDInstamadilloMediaUploadHandler33IGDInstamadilloMediaUploadHandler_h */