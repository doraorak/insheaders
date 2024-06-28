//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AELiveEditingDynamicRampProvider_h
#define AELiveEditingDynamicRampProvider_h
@import Foundation;

#include "RichAvatarConfig.h"

@protocol AEContentDeliveryLibraryInterface, AELiveEditingDynamicRampProviderDelegate, OS_dispatch_queue;

@interface AELiveEditingDynamicRampProvider : NSObject {
  /* instance variables */
  NSObject<AEContentDeliveryLibraryInterface> *_cdl;
  NSObject<OS_dispatch_queue> *_cdlQueue;
  RichAvatarConfig *_latestConfig;
}

@property (weak, nonatomic) NSObject<AELiveEditingDynamicRampProviderDelegate> *delegate;

/* instance methods */
- (id)initWithCDL:(id)cdl;
@end

#endif /* AELiveEditingDynamicRampProvider_h */