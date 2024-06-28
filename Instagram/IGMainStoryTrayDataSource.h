//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMainStoryTrayDataSource_h
#define IGMainStoryTrayDataSource_h
@import Foundation;

#include "IGMainStoryTrayDataSourceProtocol-Protocol.h"

@class IGUserSession, NSArray, NSString;

@interface IGMainStoryTrayDataSource : NSObject<IGMainStoryTrayDataSourceProtocol> {
  /* instance variables */
  IGUserSession *_userSession;
  NSArray *_trayViewModels;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _spinnerEdgeInsets;
  unsigned long long _spinnerVerticalAlignment;
  double _height;
}

@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL trayShouldScrollToEndOnDismiss;
@property (readonly, nonatomic) BOOL hasSeenStateEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)removeEmptyStateStory;
- (id)allItemsForTray;
- (id)viewModelForReel:(id)reel;
- (id)viewModelForLiveBroadcast:(id)broadcast;
- (void)setPendingAnimationPrivateStoryPKs:(id)pks;
- (id)storyTrayViewModelsForLoggingContext;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
@end

#endif /* IGMainStoryTrayDataSource_h */