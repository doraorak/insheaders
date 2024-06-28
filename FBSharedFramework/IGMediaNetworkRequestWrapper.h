//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaNetworkRequestWrapper_h
#define IGMediaNetworkRequestWrapper_h
@import Foundation;

#include "FBMediaFileStreamListener-Protocol.h"
#include "FBMediaNetworkRequest-Protocol.h"
#include "IGRequestToken-Protocol.h"

@class NSString;

@interface IGMediaNetworkRequestWrapper : NSObject<FBMediaFileStreamListener, FBMediaNetworkRequest> {
  /* instance variables */
  NSObject<IGRequestToken> *_requestToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequestToken:(id)token streamAnnouncer:(id)announcer;
- (void)cancel;
- (void)didWriteToFile;
- (void)didFinishWritingToFile;
@end

#endif /* IGMediaNetworkRequestWrapper_h */