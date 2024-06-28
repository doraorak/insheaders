//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProfileAdsResponseParser_h
#define IGProfileAdsResponseParser_h
@import Foundation;

#include "IGNetworkParser-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"

@class NSString;
@protocol IGAPIStoreProviding><IGMediaStoreProviding><IGUserStoreProviding><IGProductSaveStatusStoreProviding;

@interface IGProfileAdsResponseParser : NSObject<IGNetworkParser> {
  /* instance variables */
  NSObject<IGAPIStoreProviding><IGMediaStoreProviding><IGUserStoreProviding><IGProductSaveStatusStoreProviding> *_objectStores;
  NSObject<IGUserLauncherSetProviding> *_featureSets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithObjectStores:(id)stores featureSets:(id)sets;
- (id)parsedObjectFromResponse:(id)response;
@end

#endif /* IGProfileAdsResponseParser_h */