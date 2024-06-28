//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef KeyframesView_h
#define KeyframesView_h
@import Foundation;

#include "UIView.h"

@protocol CALayer<KFLayerProtocol;

@interface KeyframesView : UIView

@property (retain, nonatomic) CALayer<KFLayerProtocol> *keyframesLayer;

/* instance methods */
- (id)initWithLayer:(id)layer;
- (void)layoutSubviews;
@end

#endif /* KeyframesView_h */
