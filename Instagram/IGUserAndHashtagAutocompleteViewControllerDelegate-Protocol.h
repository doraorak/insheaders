//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGUserAndHashtagAutocompleteViewControllerDelegate_Protocol_h
#define IGUserAndHashtagAutocompleteViewControllerDelegate_Protocol_h
@import Foundation;

@protocol IGUserAndHashtagAutocompleteViewControllerDelegate <NSObject>
/* instance methods */
- (void)userAndHashtagAutocompleteViewController:(id)controller didSelectResultAtIndex:(long long)index autocompleteText:(id)text allResults:(id)results autocompleteType:(long long)type;
- (void)userAndHashtagAutocompleteViewController:(id)controller didLoadResults:(long long)results;
- (void)userAndHashtagAutocompleteViewController:(id)controller didUpdateContentSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* IGUserAndHashtagAutocompleteViewControllerDelegate_Protocol_h */