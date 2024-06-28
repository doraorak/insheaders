//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FWALinkedDeviceSharedContainerDiscoveryProvider_h
#define FWALinkedDeviceSharedContainerDiscoveryProvider_h
@import Foundation;

#include "FWALinkedDeviceDiscovering-Protocol.h"

@class NSString, NSURL;

@interface FWALinkedDeviceSharedContainerDiscoveryProvider : NSObject<FWALinkedDeviceDiscovering>

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSURL *containerURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)providerInSharedContainerWithError:(id *)error;
+ (id)providerInSharedContainerForApp:(id)app withError:(id *)error;

/* instance methods */
- (id)initWithContainerURL:(id)url linkableApp:(id)app;
- (id)discoverLinkableDevices:(id *)devices;
@end

#endif /* FWALinkedDeviceSharedContainerDiscoveryProvider_h */