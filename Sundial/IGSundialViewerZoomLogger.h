//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialViewerZoomLogger_h
#define IGSundialViewerZoomLogger_h
@import Foundation;

#include "IGFeedItemZoomLogger.h"
#include "IGFeedItemZoomLoggerDelegate-Protocol.h"
#include "IGPostItemProtocol-Protocol.h"

@class IGMedia, NSMutableDictionary, NSString;

@interface IGSundialViewerZoomLogger : NSObject<IGFeedItemZoomLoggerDelegate> {
  /* instance variables */
  NSMutableDictionary *_zoomBeginTimes;
  IGFeedItemZoomLogger *_feedItemZoomLogger;
  IGMedia *_currentMedia;
  NSObject<IGPostItemProtocol> *_currentPostItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLoggingProvider:(id)provider sponsoredSupportConfiguration:(id)configuration analyticsLogger:(id)logger feedItemConfiguration:(id)configuration;
- (id)mediaForFeedItemZoomLogger:(id)logger;
- (id)subItemForFeedItemZoomLogger:(id)logger;
@end

#endif /* IGSundialViewerZoomLogger_h */