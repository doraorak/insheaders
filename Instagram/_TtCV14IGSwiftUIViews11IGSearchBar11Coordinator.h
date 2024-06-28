//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtCV14IGSwiftUIViews11IGSearchBar11Coordinator_h
#define _TtCV14IGSwiftUIViews11IGSearchBar11Coordinator_h
@import Foundation;

#include "UISearchBarDelegate-Protocol.h"

@interface _TtCV14IGSwiftUIViews11IGSearchBar11Coordinator : NSObject<UISearchBarDelegate> { // (Swift)
  /* instance variables */
   _text;
}

/* instance methods */
- (void)searchBar:(id)bar textDidChange:(id)change;
- (void)searchBarTextDidBeginEditing:(id)editing;
- (void)searchBarTextDidEndEditing:(id)editing;
- (void)searchBarCancelButtonClicked:(id)clicked;
- (id)init;
@end

#endif /* _TtCV14IGSwiftUIViews11IGSearchBar11Coordinator_h */
