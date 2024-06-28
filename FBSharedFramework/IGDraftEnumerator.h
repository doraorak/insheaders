//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDraftEnumerator_h
#define IGDraftEnumerator_h
@import Foundation;

#include "NSEnumerator.h"
#include "NSKeyedUnarchiverDelegate-Protocol.h"

@class NSEnumerator, NSFileManager, NSOrderedSet, NSURL;

@interface IGDraftEnumerator : NSEnumerator {
  /* instance variables */
  NSURL *_previewsBaseURL;
  NSFileManager *_fileManager;
  NSObject<NSKeyedUnarchiverDelegate> *_cacheConsolidator;
  id /* block */ _draftFilterBlock;
  NSOrderedSet *_sortedPreviewFileURLs;
  NSEnumerator *_fileURLEnumerator;
}

/* instance methods */
- (id)initWithPreviewsBaseURL:(id)url fileManager:(id)manager cacheConsolidator:(id)consolidator filter:(id /* block */)filter;
- (id)nextObject;
- (id)allObjects;
- (void)reset;
@end

#endif /* IGDraftEnumerator_h */