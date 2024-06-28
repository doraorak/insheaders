//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectGeneratedStickerNUXIntentTarget_h
#define IGDirectGeneratedStickerNUXIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGImageSpecifier.h"

@class IGDirectThreadAnalyticsLogger, NSString, NSURL;

@interface IGDirectGeneratedStickerNUXIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGImageSpecifier *imageSpecifier;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) id /* block */ ctaHandler;
@property (readonly, nonatomic) unsigned long long nuxType;
@property (readonly, nonatomic) BOOL isDirect;
@property (readonly, nonatomic) BOOL isAnimated;
@property (readonly, nonatomic) IGDirectThreadAnalyticsLogger *logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImageSpecifier:(id)specifier url:(id)url ctaHandler:(id /* block */)handler nuxType:(unsigned long long)type isDirect:(BOOL)direct isAnimated:(BOOL)animated logger:(id)logger;
@end

#endif /* IGDirectGeneratedStickerNUXIntentTarget_h */
