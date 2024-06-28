//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAutocompleteControllerDelegate_Protocol_h
#define IGAutocompleteControllerDelegate_Protocol_h
@import Foundation;

@protocol IGAutocompleteControllerDelegate <NSObject>
/* instance methods */
- (void)autocompleteController:(id)controller willShowContainerView:(id)view type:(long long)type;
- (void)autocompleteController:(id)controller willHideContainerView:(id)view;
- (void)autocompleteControllerDidAutocomplete:(id)autocomplete autocompleteText:(id)text resultUser:(id)user;
- (void)autocompleteController:(id)controller atIndex:(long long)index isUserSearch:(BOOL)search allResults:(id)results indexInNullState:(unsigned long long)state;
- (void)autocompleteController:(id)controller atIndex:(long long)index isUserSearch:(BOOL)search allResults:(id)results indexInNullState:(unsigned long long)state;
- (void)autocompleteControllerDidReload:(id)reload;
@end

#endif /* IGAutocompleteControllerDelegate_Protocol_h */