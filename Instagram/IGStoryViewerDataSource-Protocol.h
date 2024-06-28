//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryViewerDataSource_Protocol_h
#define IGStoryViewerDataSource_Protocol_h
@import Foundation;

@protocol IGStoryViewerDataSource <IGListAdapterDataSource>

@property (retain, nonatomic) NSArray *modelItems_DO_NOT_USE;
@property (retain, nonatomic) IGStoryViewerDataStore *dataStore;

/* instance methods */
- (void)setupViewerDataSourceWithUserSession:(id)session modelItems:(id)items enteringViewerViewModel:(id)model consumedMediaTracker:(id)tracker storyLoggingContext:(id)context entryPoint:(long long)point configuration:(id)configuration defaultAudioStateProvider:(id)provider analyticsModule:(id)module sectionControllerDelegate:(id)delegate storyOverviewController:(id)controller dataSourceDelegate:(id)delegate adInsertionMediaViewTracker:(id)tracker sponsoredSupportConfiguration:(id)configuration trayUserIds:(id)ids deleteAdActivityAdDelegate:(id)delegate;
@end

#endif /* IGStoryViewerDataSource_Protocol_h */