//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSavedMediaCollectionsThumbnailModel_h
#define IGSavedMediaCollectionsThumbnailModel_h
@import Foundation;

#include "IGSavedMediaSectionControllerFactory-Protocol.h"

@class IGSavedMediaCollection, IGUserSession, NSString;
@protocol IGSavedMediaCollectionsThumbnailSectionControllerDelegate;

@interface IGSavedMediaCollectionsThumbnailModel : NSObject<IGSavedMediaSectionControllerFactory> {
  /* instance variables */
  IGSavedMediaCollection *_collection;
  unsigned long long _collectionIndex;
  NSString *_module;
  IGUserSession *_userSession;
  unsigned long long _viewControllerType;
  NSObject<IGSavedMediaCollectionsThumbnailSectionControllerDelegate> *_delegate;
}

/* instance methods */
- (id)initWithCollection:(id)collection collectionIndex:(unsigned long long)index selectionDelegate:(id)delegate module:(id)module userSession:(id)session viewControllerType:(unsigned long long)type;
- (id)sectionController;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGSavedMediaCollectionsThumbnailModel_h */
