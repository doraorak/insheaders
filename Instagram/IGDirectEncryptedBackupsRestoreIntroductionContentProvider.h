//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectEncryptedBackupsRestoreIntroductionContentProvider_h
#define IGDirectEncryptedBackupsRestoreIntroductionContentProvider_h
@import Foundation;

@interface IGDirectEncryptedBackupsRestoreIntroductionContentProvider : NSObject {
  /* instance variables */
  long long _type;
}

/* class methods */
+ (id)contentProviderWithType:(long long)type;

/* instance methods */
- (id)initWithAvailableRestoreMethods:(long long)methods;
- (id)header;
- (id)title;
- (id)bulletItemViewModels;
- (id)primaryButtonTitle;
- (id)secondaryButtonTitle;
- (struct IGDirectEncryptedBackupsRestoreMoreOptionsContextMenuModel { id x0; id x1; id x2; id x3; })moreOptionsContextMenuModel;
- (struct IGDirectEncryptedBackupsRestoreIntroductionExitDialogueModel { id x0; id x1; id x2; id x3; id x4; })exitDialogueModel;
- (id)_bulletItemsFromTitle:(id)title icon:(unsigned long long)icon;
- (id)_bulletItemTitles;
- (unsigned long long)_assetAtIndex:(int)index;
@end

#endif /* IGDirectEncryptedBackupsRestoreIntroductionContentProvider_h */