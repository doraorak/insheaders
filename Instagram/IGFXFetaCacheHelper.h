//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFXFetaCacheHelper_h
#define IGFXFetaCacheHelper_h
@import Foundation;

#include "FXFetaCacheProtocol-Protocol.h"

@class IGUserSessionProvider, NSString;

@interface IGFXFetaCacheHelper : NSObject<FXFetaCacheProtocol> {
  /* instance variables */
  IGUserSessionProvider *_userSessionProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSessionProvider:(id)provider;
- (void)fetchFetaInfo:(BOOL)info successBlock:(id /* block */)block failureBlock:(id /* block */)block;
- (void)writeFetaInfoToDisk:(BOOL)disk;
- (BOOL)readIsUpgradedFromDisk;
@end

#endif /* IGFXFetaCacheHelper_h */