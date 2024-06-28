//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchChallengeNullStateRequestBuilder_h
#define IGSearchChallengeNullStateRequestBuilder_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@interface IGSearchChallengeNullStateRequestBuilder : NSObject<NSObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)requestBuilderForQueryString:(id)string rankToken:(id)token additionalParams:(id)params locationManager:(id)manager excludeList:(id)list;
@end

#endif /* IGSearchChallengeNullStateRequestBuilder_h */
