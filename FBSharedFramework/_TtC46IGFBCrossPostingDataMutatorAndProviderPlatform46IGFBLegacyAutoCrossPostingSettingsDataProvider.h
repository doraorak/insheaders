//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC46IGFBCrossPostingDataMutatorAndProviderPlatform46IGFBLegacyAutoCrossPostingSettingsDataProvider_h
#define _TtC46IGFBCrossPostingDataMutatorAndProviderPlatform46IGFBLegacyAutoCrossPostingSettingsDataProvider_h
@import Foundation;

#include "_TtP46IGFBCrossPostingDataMutatorAndProviderPlatform48IGFBAutoCrossPostingSettingsDataProviderProtocol_-Protocol.h"

@class NSString;

@interface _TtC46IGFBCrossPostingDataMutatorAndProviderPlatform46IGFBLegacyAutoCrossPostingSettingsDataProvider : NSObject<_TtP46IGFBCrossPostingDataMutatorAndProviderPlatform48IGFBAutoCrossPostingSettingsDataProviderProtocol_> { // (Swift)
  /* instance variables */
   networker;
   sessionUserDefaults;
   fbAutoCrossPostingSettingsDataCache;
}

@property (nonatomic, readonly) NSString *dataProviderIdentifier;
@property (nonatomic, readonly) BOOL feedAutoCrossPostingSettingOn;
@property (nonatomic, readonly) BOOL storyAutoCrossPostingSettingOn;
@property (nonatomic, readonly) BOOL reelsAutoCrossPostingSettingOn;
@property (nonatomic, readonly) BOOL closeFriendsAutoCrossPostingSettingOn;

/* instance methods */
- (id)initWithNetworker:(id)networker sessionUserDefaults:(id)defaults fbAutoCrossPostingSettingsDataCache:(id)cache;
- (void)refreshAutoCrossPostingSettingsWithSuccess:(id /* block */)success failure:(id /* block */)failure;
- (id)init;
@end

#endif /* _TtC46IGFBCrossPostingDataMutatorAndProviderPlatform46IGFBLegacyAutoCrossPostingSettingsDataProvider_h */