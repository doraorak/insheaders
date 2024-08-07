//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAutomatedImageTrackerListener_Protocol_h
#define IGAutomatedImageTrackerListener_Protocol_h
@import Foundation;

@protocol IGAutomatedImageTrackerListener <IGScopedListener>
/* instance methods */
- (void)imageDidStartTrackingWithImageURL:(id)url forModule:(id)module inView:(id)view;
- (void)imageDidComeOnScreenWithImageURL:(id)url forModule:(id)module inView:(id)view;
- (void)imageDidGoOffScreenWithImageURL:(id)url forModule:(id)module inView:(id)view;
- (void)imageDidLoadFromSource:(unsigned long long)source imageURL:(id)url forModule:(id)module inView:(id)view;
- (void)imageDidLoadAndComeOnScreenFromSource:(unsigned long long)source imageURL:(id)url forModule:(id)module inView:(id)view;
- (void)didFailToLoadImageWithError:(id)error imageURL:(id)url forModule:(id)module inView:(id)view;
@end

#endif /* IGAutomatedImageTrackerListener_Protocol_h */
