//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC26IGProfilePerformanceLogger26IGProfilePerformanceLogger_h
#define _TtC26IGProfilePerformanceLogger26IGProfilePerformanceLogger_h
@import Foundation;

#include "IGProfilePictureImageViewLoadDelegate-Protocol.h"

@class NSString;

@interface _TtC26IGProfilePerformanceLogger26IGProfilePerformanceLogger : NSObject<IGProfilePictureImageViewLoadDelegate> { // (Swift)
  /* instance variables */
   components;
   gridItemsRequested;
   gridItemsLoaded;
   gridItemsVisibleInitial;
   gridItemsVisibleFinal;
}

@property (nonatomic, copy) NSString *analyticsModule;
@property (nonatomic, copy) NSString *previousAnalyticsModule;
@property (nonatomic, copy) NSString *navChain;
@property (nonatomic) long long gridType;
@property (nonatomic, copy) NSString *gridTypeString;
@property (nonatomic) BOOL isSelfProfile;
@property (nonatomic, copy) NSString *priorSubmodule;
@property (nonatomic) BOOL fromDeeplink;

/* instance methods */
- (void)cancel:(id)cancel;
- (void)addAnnotationKey:(id)key intValue:(long long)value;
- (void)addAnnotationKey:(id)key stringValue:(id)value;
- (void)addAnnotationKey:(id)key boolValue:(BOOL)value;
- (void)viewWillAppearWithUserPk:(id)pk;
- (void)viewWillDisappearWithLeavingProfileSurface:(BOOL)surface;
- (void)bioCached;
- (void)bioLoadStarted;
- (void)bioLoadFinished;
- (void)bioLoadFailed;
- (void)storiesRingLoadStarted;
- (void)storiesRingLoadFinished;
- (void)storiesRingLoadFailed;
- (void)highlightsLoadStarted;
- (void)highlightsLoadFinishedWithItemsCount:(long long)count;
- (void)highlightsLoadFailed;
- (void)gridLoadStarted:(id)started;
- (void)gridLoadFinished:(id)finished numberOfItems:(long long)items cached:(BOOL)cached accountIsPrivate:(BOOL)private;
- (void)gridLoadFailed:(id)failed;
- (void)gridItemRequested:(id)requested numberOfVisibleCells:(long long)cells;
- (void)gridItemLoaded:(id)loaded fromCache:(BOOL)cache;
- (void)gridItemFailed:(id)failed;
- (void)dealloc;
- (void)profilePictureImageViewImageDidLoad:(id)load profileImage:(id)image;
- (void)profilePictureImageViewImageFailedToLoad:(id)load withURL:(id)url;
- (void)profilePictureImageView:(id)view willRequestImageWithURL:(id)url;
- (id)init;
@end

#endif /* _TtC26IGProfilePerformanceLogger26IGProfilePerformanceLogger_h */
