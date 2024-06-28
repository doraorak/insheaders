//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemImagePrefetchTracker_h
#define IGFeedItemImagePrefetchTracker_h
@import Foundation;

#include "IGFeedItemPrefetchTracking-Protocol.h"
#include "IGImageURL.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGFeedItemImagePrefetchTracker : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGFeedItemPrefetchTracking> *_prefetchTracker;
  IGImageURL *_imageURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImageURL:(id)url prefetchTracker:(id)tracker;
- (void)trackImageNetworkRequestStarted;
- (void)trackImageRequestCompletedFromSource:(unsigned long long)source withError:(id)error;
@end

#endif /* IGFeedItemImagePrefetchTracker_h */