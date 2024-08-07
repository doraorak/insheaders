//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialCreativeToolPivotPagePerformanceLogger_h
#define IGSundialCreativeToolPivotPagePerformanceLogger_h
@import Foundation;

#include "IGSundialGridPerformanceLogger-Protocol.h"

@class NSString;

@interface IGSundialCreativeToolPivotPagePerformanceLogger : NSObject<IGSundialGridPerformanceLogger> {
  /* instance variables */
  NSString *_creativeToolId;
  int _instanceKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCreativeToolId:(id)id;
- (void)logFetchStart;
- (void)logGridItemRenderedWithId:(id)id source:(unsigned long long)source;
- (void)logGridItemRenderFailedWithId:(id)id error:(id)error;
- (void)logGridFeedRenderEnd;
- (void)wasPrefetchedWithItemCount:(long long)count firstItemId:(id)id;
- (void)logFetchCompleteWithItemCount:(long long)count firstItemId:(id)id;
- (void)logFetchFailure:(long long)failure errorMessage:(id)message;
- (void)logGridItemRequestedWithId:(id)id;
@end

#endif /* IGSundialCreativeToolPivotPagePerformanceLogger_h */
