//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImageLoggingInfo_h
#define IGImageLoggingInfo_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectImageLoggingInfoExtras.h"
#include "IGImageLoggingIdentifier.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface IGImageLoggingInfo : FBValueObject<NSCopying, NSCoding>

@property (readonly, copy, nonatomic) IGImageLoggingIdentifier *identifier;
@property (readonly, nonatomic) BOOL isAd;
@property (readonly, nonatomic) BOOL isCarousel;
@property (readonly, nonatomic) BOOL isProfilePicture;
@property (readonly, copy, nonatomic) IGDirectImageLoggingInfoExtras *directExtras;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithIdentifier:(id)identifier isAd:(BOOL)ad isCarousel:(BOOL)carousel isProfilePicture:(BOOL)picture directExtras:(id)extras;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGImageLoggingInfo_h */