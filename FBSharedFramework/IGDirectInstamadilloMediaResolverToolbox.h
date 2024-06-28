//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInstamadilloMediaResolverToolbox_h
#define IGDirectInstamadilloMediaResolverToolbox_h
@import Foundation;

#include "IGAPIClient-Protocol.h"
#include "IGDirectInstamadilloEncryptedBackupsClientStateManager.h"
#include "IGDirectMsysMailboxProviding-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class IGE2EEMediaManager;

@interface IGDirectInstamadilloMediaResolverToolbox : NSObject

@property (readonly, nonatomic) NSObject<IGDirectMsysMailboxProviding> *mailboxProvider;
@property (readonly, nonatomic) NSObject<IGAPIClient> *networker;
@property (readonly, nonatomic) IGDirectInstamadilloEncryptedBackupsClientStateManager *EBClientStateManager;
@property (readonly, nonatomic) IGE2EEMediaManager *e2eeMediaManager;
@property (readonly, nonatomic) NSObject<IGUserLauncherSetProviding> *launcherSet;

/* instance methods */
- (id)initWithMailboxProvider:(id)provider networker:(id)networker EBClientStateManager:(id)manager e2eeMediaManager:(id)manager launcherSet:(id)set;
@end

#endif /* IGDirectInstamadilloMediaResolverToolbox_h */
