//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTitleAndActionSectionControllerDelegate_Protocol_h
#define IGTitleAndActionSectionControllerDelegate_Protocol_h
@import Foundation;

@protocol IGTitleAndActionSectionControllerDelegate <NSObject>
/* instance methods */
- (void)titleAndActionSectionController:(id)controller didSelectActionForViewModel:(id)model;
@optional
/* instance methods */
- (unsigned long long)traitForTitleAndActionTextLabel:(id)label;
@end

#endif /* IGTitleAndActionSectionControllerDelegate_Protocol_h */
