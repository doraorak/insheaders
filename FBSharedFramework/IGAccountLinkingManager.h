//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAccountLinkingManager_h
#define IGAccountLinkingManager_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGAccountLinkingInfo.h"
#include "IGAccountLinkingManaging-Protocol.h"

@class NSString;
@protocol IGAccountLinking;

@interface IGAccountLinkingManager : NSObject<IGAccountLinkingManaging> {
  /* instance variables */
  NSObject<IGAPIClient> *_networker;
  NSObject<IGAccountLinking> *_accountLinker;
  IGAccountLinkingInfo *_accountLinkingInfo;
  id /* block */ _childAccountRetrieval;
  id /* block */ _mainAccountRetrieval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNetworker:(id)networker childAccountRetrieval:(id /* block */)retrieval mainAccountRetrieval:(id /* block */)retrieval acountLinking:(id)linking;
- (void)prefetchLinkedAccountGroupInfo;
- (id)getLinkedAccountGroupInfoWithCompletion:(id /* block */)completion;
- (void)unlinkMainAccount:(id)account completion:(id /* block */)completion;
@end

#endif /* IGAccountLinkingManager_h */