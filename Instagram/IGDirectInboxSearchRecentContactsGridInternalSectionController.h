//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxSearchRecentContactsGridInternalSectionController_h
#define IGDirectInboxSearchRecentContactsGridInternalSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"

@class IGPresenceManager, IGUserSession;

@interface IGDirectInboxSearchRecentContactsGridInternalSectionController : IGListGenericSectionController {
  /* instance variables */
  IGUserSession *_userSession;
  unsigned long long _maxNumberOfContacts;
  IGPresenceManager *_presenceManager;
  double _cellWidth;
  double _cellHeight;
}

/* instance methods */
- (id)initWithUserSession:(id)session presenceManager:(id)manager cellWidth:(double)width cellHeight:(double)height maxNumberOfContacts:(unsigned long long)contacts;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (double)minimumLineSpacing;
- (id)cellForItemAtIndex:(long long)index;
@end

#endif /* IGDirectInboxSearchRecentContactsGridInternalSectionController_h */