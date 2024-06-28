//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KeyframesLayer_Interactivity_h
#define KeyframesLayer_Interactivity_h
@import Foundation;

@interface KeyframesLayer (Interactivity) <KFMutableProtocol>
/* instance methods */
- (void)_setInteractivityListener:(id)listener;
- (id)initWithDataController:(id)controller mutator:(id)mutator renderingMode:(long long)mode interactivity:(id)interactivity tapView:(id)view;
- (id)initWithDataController:(id)controller kf2Mutator:(id)mutator renderingMode:(long long)mode interactivity:(id)interactivity tapView:(id)view;
- (void)setInteractivityContext:(id)context;
- (id)interactivityContext;
- (void)didMutate;
@end

#endif /* KeyframesLayer_Interactivity_h */