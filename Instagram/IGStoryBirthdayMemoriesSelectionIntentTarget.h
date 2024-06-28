//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryBirthdayMemoriesSelectionIntentTarget_h
#define IGStoryBirthdayMemoriesSelectionIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"

@class IGStoryMultiEditCompositionThumbnailTray, NSOrderedSet, NSString;
@protocol IGStoryBirthdayMemoriesSelectionViewControllerDelegate;

@interface IGStoryBirthdayMemoriesSelectionIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSOrderedSet *selectedItems;
@property (readonly, nonatomic) IGStoryMultiEditCompositionThumbnailTray *thumbnailTray;
@property (readonly, nonatomic) NSObject<IGStoryBirthdayMemoriesSelectionViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSelectedItems:(id)items thumbnailTray:(id)tray delegate:(id)delegate;
@end

#endif /* IGStoryBirthdayMemoriesSelectionIntentTarget_h */
