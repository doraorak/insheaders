//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGProductItemTagGroup_h
#define IGProductItemTagGroup_h
@import Foundation;

#include "IGTagGroup.h"

@interface IGProductItemTagGroup : IGTagGroup
/* instance methods */
- (Class)tagClass;
- (BOOL)updateWithContainerDict:(id)dict objectStores:(id)stores;
- (BOOL)updateWithContainerDict:(id)dict propsGenerator:(id /* block */)generator objectStores:(id)stores;
- (BOOL)updateWithDictionary:(id)dictionary propsGenerator:(id /* block */)generator objectStores:(id)stores;
@end

#endif /* IGProductItemTagGroup_h */