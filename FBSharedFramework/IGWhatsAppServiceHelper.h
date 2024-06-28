//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGWhatsAppServiceHelper_h
#define IGWhatsAppServiceHelper_h
@import Foundation;

#include "IGServiceHelperProtocol-Protocol.h"
#include "IGUserSession.h"

@class NSString;

@interface IGWhatsAppServiceHelper : NSObject<IGServiceHelperProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
}

@property (nonatomic) BOOL isAvailableForSharing;
@property (nonatomic) BOOL wantsToShare;
@property (nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)shortServiceName;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)detailText;
- (id)crossPostSubtitleText;
- (id)crossPostingDestination;
- (id)serviceName;
- (BOOL)isConfigured;
- (BOOL)isConfiguredOnlyOnServer;
- (BOOL)hidden;
- (BOOL)shouldUseSubtitleCellStyle;
- (BOOL)isConfiguredForCrossPosting;
- (BOOL)isAvailableInCurrentLocale;
- (BOOL)supportsMediaType:(long long)type;
- (BOOL)supportsCrosspostingWith:(id)with forMediaType:(long long)type;
- (BOOL)requiresLocationCoordinate;
- (BOOL)needsToReauthorize;
- (id)shareKey;
- (id)sharingInfo;
- (id)viewControllerForAdvancedOptionsWithUserSession:(id)session;
- (void)setupServerLinkage:(id)linkage;
- (void)reauthorizeIfNeeded;
- (void)logout;
- (void)logoutAndUnlink;
@end

#endif /* IGWhatsAppServiceHelper_h */