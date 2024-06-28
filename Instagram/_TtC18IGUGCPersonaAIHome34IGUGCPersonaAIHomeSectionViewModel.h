//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18IGUGCPersonaAIHome34IGUGCPersonaAIHomeSectionViewModel_h
#define _TtC18IGUGCPersonaAIHome34IGUGCPersonaAIHomeSectionViewModel_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "IGListDiffable-Protocol.h"

@interface _TtC18IGUGCPersonaAIHome34IGUGCPersonaAIHomeSectionViewModel : _TtCs12_SwiftObject<IGListDiffable> { // (Swift)
  /* instance variables */
   sectionId;
   headerModel;
   agents;
   displayType;
   sectionType;
   showFilters;
   showCreationEntrypoint;
   creationModel;
   identifier;
}

/* instance methods */
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* _TtC18IGUGCPersonaAIHome34IGUGCPersonaAIHomeSectionViewModel_h */