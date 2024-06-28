//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShareStoryToFeedIntentTarget_h
#define IGShareStoryToFeedIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGFeedCreationFlowDelegate-Protocol.h"

@class IGAPIHighlightsAttributionDict, NSArray, NSString;

@interface IGShareStoryToFeedIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) long long entryPoint;
@property (readonly, nonatomic) NSArray *mediaItems;
@property (readonly, nonatomic) BOOL presentModally;
@property (readonly, nonatomic) NSObject<IGFeedCreationFlowDelegate> *delegate;
@property (readonly, nonatomic) IGAPIHighlightsAttributionDict *linkedHighlightModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEntryPoint:(long long)point mediaItems:(id)items presentModally:(BOOL)modally delegate:(id)delegate linkedHighlightModel:(id)model;
@end

#endif /* IGShareStoryToFeedIntentTarget_h */
