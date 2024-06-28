//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingPDPBootstrapManager_h
#define IGShoppingPDPBootstrapManager_h
@import Foundation;

#include "IGShoppingPDPDataModel.h"

@class IGStatefulNetworker, IGStatefulNetworkerFetchState, IGUserSession;
@protocol IGShoppingPDPBootstrapManagerDelegate;

@interface IGShoppingPDPBootstrapManager : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
  IGStatefulNetworker *_networker;
  BOOL _isPrefetching;
  IGShoppingPDPDataModel *_dataModel;
}

@property (weak, nonatomic) NSObject<IGShoppingPDPBootstrapManagerDelegate> *delegate;
@property (readonly, copy, nonatomic) IGStatefulNetworkerFetchState *fetchState;

/* instance methods */
- (id)initWithUserSession:(id)session productItem:(id)item presentationContext:(id)context;
@end

#endif /* IGShoppingPDPBootstrapManager_h */