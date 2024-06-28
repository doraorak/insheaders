//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMedia_IGSundialRemixHelpers_h
#define IGMedia_IGSundialRemixHelpers_h
@import Foundation;

@interface IGMedia (IGSundialRemixHelpers)
/* instance methods */
- (BOOL)isRemixableMediaItemWithLauncherSet:(id)set;
- (BOOL)isRemixableVideoItemWithLauncherSet:(id)set;
- (BOOL)isRemixablePhotoItemWithLauncherSet:(id)set;
- (BOOL)isRemixableCarouselItemWithLauncherSet:(id)set;
- (BOOL)isSourceMediaOfRemixRemixableWithLauncherSet:(id)set;
@end

#endif /* IGMedia_IGSundialRemixHelpers_h */
