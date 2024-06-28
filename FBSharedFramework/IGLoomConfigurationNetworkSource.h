//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLoomConfigurationNetworkSource_h
#define IGLoomConfigurationNetworkSource_h
@import Foundation;

#include "IGRequestToken-Protocol.h"
#include "IGUserSession.h"

@protocol FBLoomConfigurationNetworkSourceDelegate;

@interface IGLoomConfigurationNetworkSource : NSObject {
  /* instance variables */
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _onGoingRequestMutex;
  NSObject<IGRequestToken> *_onGoingRequest;
}

@property (weak, nonatomic) NSObject<FBLoomConfigurationNetworkSourceDelegate> *delegate;
@property (weak, nonatomic) IGUserSession *userSession;

/* instance methods */
- (BOOL)canFetchConfiguration;
- (BOOL)configurationExpired;
- (void)fetchConfiguration;
- (void)cancel;
- (void)reset;
@end

#endif /* IGLoomConfigurationNetworkSource_h */
