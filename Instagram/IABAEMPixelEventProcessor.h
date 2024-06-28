//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IABAEMPixelEventProcessor_h
#define IABAEMPixelEventProcessor_h
@import Foundation;

@class NSMutableArray;

@interface IABAEMPixelEventProcessor : NSObject {
  /* instance variables */
  id /* block */ _pixelDataProcessingHandler;
  NSMutableArray *_pixelEventsQueue;
}

@property (readonly, nonatomic) BOOL adsDataIsReceived;

/* instance methods */
- (id)initWithPixelEventProcessingHandler:(id /* block */)handler;
- (void)processPixelEvent:(id)event withCurrentWebsiteURL:(id)url;
- (void)notifyAdsDataIsReceived;
@end

#endif /* IABAEMPixelEventProcessor_h */
