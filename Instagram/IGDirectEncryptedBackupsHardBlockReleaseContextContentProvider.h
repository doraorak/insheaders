//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectEncryptedBackupsHardBlockReleaseContextContentProvider_h
#define IGDirectEncryptedBackupsHardBlockReleaseContextContentProvider_h
@import Foundation;

#include "IGDirectEncryptedBackupsHardBlockReleaseContextModel.h"

@interface IGDirectEncryptedBackupsHardBlockReleaseContextContentProvider : NSObject {
  /* instance variables */
  IGDirectEncryptedBackupsHardBlockReleaseContextModel *_model;
}

/* instance methods */
- (id)initWithModel:(id)model;
- (id)title;
- (id)bulletItemViewModels;
- (id)primaryButtonTitle;
- (id)secondaryButtonTitle;
- (id)_bulletItemViewModelForItem:(unsigned long long)item;
- (unsigned long long)_assetForBulletItem:(unsigned long long)item;
- (id)_descriptionForBulletItem:(unsigned long long)item;
@end

#endif /* IGDirectEncryptedBackupsHardBlockReleaseContextContentProvider_h */
