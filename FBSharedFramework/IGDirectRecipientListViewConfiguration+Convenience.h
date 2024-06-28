//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientListViewConfiguration_Convenience_h
#define IGDirectRecipientListViewConfiguration_Convenience_h
@import Foundation;

@interface IGDirectRecipientListViewConfiguration (Convenience)
/* class methods */
+ (id)savedCollectionReshareConfigurationWithLauncherProvider:(id)provider showPrivateMediaInCollectionWarning:(BOOL)warning;
+ (id)commentReshareConfigurationWithLauncherProvider:(id)provider comment:(id)comment allowReshareToStory:(BOOL)story showSecureThreads:(BOOL)threads;
+ (id)friendStoryConfigurationWithLauncherProvider:(id)provider;
+ (id)schoolInviteConfigurationWithLauncherSet:(id)set;
@end

#endif /* IGDirectRecipientListViewConfiguration_Convenience_h */
