//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRefinementModel_IGDiscoveryNavigationTrayItem_h
#define IGRefinementModel_IGDiscoveryNavigationTrayItem_h
@import Foundation;

@interface IGRefinementModel (IGDiscoveryNavigationTrayItem) <IGListDiffable>
/* instance methods */
- (id)navigationTrayIcon;
- (id)navigationTrayTitle;
- (BOOL)showsDropdownIndicator;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGRefinementModel_IGDiscoveryNavigationTrayItem_h */