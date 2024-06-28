//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSearchListKitDataSource_h
#define IGSearchListKitDataSource_h
@import Foundation;

#include "IGListAdapterDataSource-Protocol.h"

@class IGAudioPlayer, IGUserSession, NSString;
@protocol IGSearchHideHelperProtocol, IGSearchListKitDataSourceDelegate;

@interface IGSearchListKitDataSource : NSObject<IGListAdapterDataSource> {
  /* instance variables */
  IGUserSession *_userSession;
  NSObject<IGSearchListKitDataSourceDelegate> *_delegate;
  NSObject<IGSearchHideHelperProtocol> *_searchItemHidingHelper;
  IGAudioPlayer *_audioPlayer;
  NSString *_searchTypeString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate searchTypeString:(id)string audioPlayer:(id)player;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
@end

#endif /* IGSearchListKitDataSource_h */