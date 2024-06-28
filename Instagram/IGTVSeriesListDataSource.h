//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVSeriesListDataSource_h
#define IGTVSeriesListDataSource_h
@import Foundation;

#include "IGScopedListener-Protocol.h"

@class IGUser, IGUserSession, NSArray, NSMutableDictionary, NSString;
@protocol IGTVSeriesListDataSourceDelegate;

@interface IGTVSeriesListDataSource : NSObject<IGScopedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGUser *_user;
  NSMutableDictionary *_seriesChannelsByPK;
  NSArray *_seriesChannels;
}

@property (weak, nonatomic) NSObject<IGTVSeriesListDataSourceDelegate> *delegate;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL hasFetchedOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session user:(id)user;
- (void)fetch;
- (void)channelDataSourceWillUpdate:(id)update;
- (void)channelDataSourceDidUpdate:(id)update fromAction:(long long)action error:(id)error;
- (void)didDeleteSeriesWithId:(id)id;
- (void)willDeleteSeriesWithId:(id)id;
- (void)failedToDeleteSeriesWithId:(id)id;
@end

#endif /* IGTVSeriesListDataSource_h */