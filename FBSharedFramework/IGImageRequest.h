//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImageRequest_h
#define IGImageRequest_h
@import Foundation;

#include "IGImageProcessor-Protocol.h"
#include "MOSAdaptiveImageQueryStringComponents.h"
#include "MOSImageRequestInterfacing-Protocol.h"

@class NSData, NSString, NSURL;
@protocol IGImageRequestTracking;

@interface IGImageRequest : NSObject<MOSImageRequestInterfacing>

@property (readonly, nonatomic) long long imageFetchPriority;
@property (readonly, nonatomic) long long cacheFetchType;
@property (readonly, nonatomic) unsigned long long cacheBehavior;
@property (readonly, nonatomic) BOOL shouldBackgroundDecodeImage;
@property (readonly, nonatomic) NSData *previewData;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } previewSize;
@property (readonly, nonatomic) NSObject<IGImageProcessor> *imageProcessor;
@property (readonly, nonatomic) id /* block */ imageCompletionBlock;
@property (readonly, nonatomic) id /* block */ progressiveImageCompletionBlock;
@property (readonly, nonatomic) id /* block */ imageProgressBlock;
@property (readonly, nonatomic) id /* block */ previewImageCompletionBlock;
@property BOOL isCancelled;
@property (readonly, nonatomic) MOSAdaptiveImageQueryStringComponents *adaptiveQueryComponents;
@property (readonly, nonatomic) BOOL isImageRequestedByPrefetchInfra;
@property (readonly, nonatomic) NSObject<IGImageRequestTracking> *tracker;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL isSponsored;
@property (readonly, nonatomic) NSString *module;
@property (readonly, nonatomic) unsigned long long fetchBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUrl:(id)url module:(id)module cacheFetchType:(long long)type imageFetchPriority:(long long)priority fetchBehavior:(unsigned long long)behavior cacheBehavior:(unsigned long long)behavior shouldBackgroundDecodeImage:(BOOL)image previewData:(id)data previewSize:(struct CGSize { double x0; double x1; })size imageProcessor:(id)processor adaptiveQueryComponents:(id)components imageCompletionBlock:(id /* block */)block progressiveImageCompletionBlock:(id /* block */)block imageProgressBlock:(id /* block */)block previewImageCompletionBlock:(id /* block */)block isImageRequestedByPrefetchInfra:(BOOL)infra isSponsored:(BOOL)sponsored tracker:(id)tracker;
- (void)begin;
- (void)cancel;
@end

#endif /* IGImageRequest_h */