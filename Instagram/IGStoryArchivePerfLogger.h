//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryArchivePerfLogger_h
#define IGStoryArchivePerfLogger_h
@import Foundation;

#include "NSObject-Protocol.h"

@class FBTimer, NSMutableDictionary, NSString;

@interface IGStoryArchivePerfLogger : NSObject<NSObject> {
  /* instance variables */
  BOOL _isPageLoadMarkerStarted;
  int _pageLoadMarkerId;
  NSMutableDictionary *_reelPkToSectionDictionary;
  int _mediaLoadMarkerId;
  FBTimer *_pageLoadTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)markWillRequestNextPage;
- (void)markDidReceiveNextPage;
- (void)markPageRequestFailedWithReason:(unsigned long long)reason;
- (void)markCancelPageRequest;
- (void)markMediaStartWithPk:(id)pk section:(unsigned long long)section;
- (void)markMediaPointWillRequestWithPk:(id)pk;
- (void)markMediaPointRequestReceivedMediaWithPk:(id)pk;
- (void)markMediaEndSuccessWithPk:(id)pk;
- (void)markMediaFetchFailedWithPk:(id)pk reason:(unsigned long long)reason error:(id)error;
- (void)markMediaFetchCancelAll;
@end

#endif /* IGStoryArchivePerfLogger_h */