//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCameraLoggerContextBuilder_h
#define IGCameraLoggerContextBuilder_h
@import Foundation;

#include "IGSundialTemplateLoggerContext.h"

@class NSArray, NSNumber, NSString, NSUUID;

@interface IGCameraLoggerContextBuilder : NSObject

@property (nonatomic) long long entryPoint;
@property (nonatomic) long long captureType;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) long long destination;
@property (copy, nonatomic) NSString *discoverySessionId;
@property (copy, nonatomic) NSString *searchSessionId;
@property (copy, nonatomic) NSString *inspirationHubId;
@property (copy, nonatomic) NSUUID *preCaptureCompositionId;
@property (nonatomic) long long effectSelectionSource;
@property (nonatomic) long long surfaceElement;
@property (nonatomic) long long promptStickerType;
@property (nonatomic) long long stickerInsertSurface;
@property (nonatomic) BOOL isNewlyCreatedSticker;
@property (copy, nonatomic) NSString *effectCollectionCategory;
@property (copy, nonatomic) NSString *mediaId;
@property (copy, nonatomic) NSString *sourceMediaRankingInfoToken;
@property (copy, nonatomic) NSString *shoppingSessionId;
@property (copy, nonatomic) NSString *pivotPageSessionId;
@property (nonatomic) long long pivotPageEntryPoint;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) BOOL isFromPostFlow;
@property (nonatomic) BOOL isFeedFork;
@property (nonatomic) BOOL isGalleryFirst;
@property (nonatomic) BOOL isQuickShareSheet;
@property (copy, nonatomic) NSArray *bottomCameraDial;
@property (nonatomic) unsigned long long stackMediaCount;
@property (copy, nonatomic) NSString *audioAssetId;
@property (nonatomic) unsigned long long audioType;
@property (nonatomic) BOOL isLogMemoryStatsEnabled;
@property (retain, nonatomic) IGSundialTemplateLoggerContext *templateLoggerContext;
@property (nonatomic) BOOL isE2EE;
@property (copy, nonatomic) NSString *openThreadId;
@property (nonatomic) long long occamadilloThreadId;
@property (nonatomic) long long armadilloThreadId;
@property (copy, nonatomic) NSString *directTransportType;
@property (nonatomic) long long acrType;
@property (copy, nonatomic) NSString *smartReelType;
@property (nonatomic) long long acrBrowserEntryPoint;
@property (nonatomic) BOOL isPanavision;
@property (retain, nonatomic) NSNumber *broadcastId;
@property (retain, nonatomic) NSString *bottomCameraDialSelected;
@property (copy, nonatomic) NSString *addYoursPromptId;
@property (copy, nonatomic) NSString *addYoursPrompt;
@property (nonatomic) long long galleryEntryPoint;

/* instance methods */
- (id)init;
@end

#endif /* IGCameraLoggerContextBuilder_h */
