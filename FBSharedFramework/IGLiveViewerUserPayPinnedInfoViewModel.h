//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveViewerUserPayPinnedInfoViewModel_h
#define IGLiveViewerUserPayPinnedInfoViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface IGLiveViewerUserPayPinnedInfoViewModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) BOOL isMultiplePaymentsEnabled;
@property (readonly, copy, nonatomic) NSString *broadcasterUsername;
@property (readonly, copy, nonatomic) NSString *mediaId;
@property (readonly, copy, nonatomic) NSString *broadcasterId;
@property (readonly, copy, nonatomic) NSString *userId;
@property (readonly, copy, nonatomic) NSString *productType;
@property (readonly, nonatomic) NSObject<IGAnalyticsEventLoggingProtocol> *structuredLogger;

/* class methods */
+ (id)valueWithJSONDictionary:(id)jsondictionary error:(id *)error;

/* instance methods */
- (id)initWithButtonTitle:(id)title descriptionText:(id)text isMultiplePaymentsEnabled:(BOOL)enabled broadcasterUsername:(id)username mediaId:(id)id broadcasterId:(id)id userId:(id)id productType:(id)type structuredLogger:(id)logger;
@end

#endif /* IGLiveViewerUserPayPinnedInfoViewModel_h */