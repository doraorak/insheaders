//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC25IGDirectChannelsDirectory55IGDirectChannelsDirectorySectionHeaderSectionController_h
#define _TtC25IGDirectChannelsDirectory55IGDirectChannelsDirectorySectionHeaderSectionController_h
@import Foundation;

#include "IGListBindingSingleSectionController.h"

@interface _TtC25IGDirectChannelsDirectory55IGDirectChannelsDirectorySectionHeaderSectionController : IGListBindingSingleSectionController { // (Swift)
  /* instance variables */
   cellDelegate;
}

/* instance methods */
- (Class)cellClass;
- (void)configureCell:(id)cell withViewModel:(id)model;
- (struct CGSize { double x0; double x1; })sizeForViewModel:(id)model;
- (id)init;
@end

#endif /* _TtC25IGDirectChannelsDirectory55IGDirectChannelsDirectorySectionHeaderSectionController_h */
