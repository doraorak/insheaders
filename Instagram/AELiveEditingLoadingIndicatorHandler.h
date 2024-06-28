//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AELiveEditingLoadingIndicatorHandler_h
#define AELiveEditingLoadingIndicatorHandler_h
@import Foundation;

@protocol AELiveEditingLoadingIndicatorHandlerDelegate;

@interface AELiveEditingLoadingIndicatorHandler : NSObject {
  /* instance variables */
  unsigned long long _loadingReason;
  NSObject<AELiveEditingLoadingIndicatorHandlerDelegate> *_delegate;
}

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)clear;
@end

#endif /* AELiveEditingLoadingIndicatorHandler_h */