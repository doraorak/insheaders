//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCenterLayout_h
#define IGCenterLayout_h
@import Foundation;

#include "IGLayoutElement-Protocol.h"

@class NSString;

@interface IGCenterLayout : NSObject<IGLayoutElement>

@property (readonly, nonatomic) NSObject<IGLayoutElement> *child;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutFrame;
@property (nonatomic) BOOL hiddenFromLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithChild:(id)child;
- (struct CGSize { double x0; double x1; })layoutSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubelements;
- (float)contentHuggingPriorityForAxis:(long long)axis;
- (float)contentCompressionResistancePriorityForAxis:(long long)axis;
- (id)subelements;
@end

#endif /* IGCenterLayout_h */