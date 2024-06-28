//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCollectionViewLayoutAttributesModifierAttachToViewPort_h
#define IGCollectionViewLayoutAttributesModifierAttachToViewPort_h
@import Foundation;

#include "IGCollectionViewLayoutAttributesModifier-Protocol.h"

@class NSString;
@protocol IGAttachToViewPortOffsetProvider, IGCollectionViewLayoutAttributesModifierDelegate;

@interface IGCollectionViewLayoutAttributesModifierAttachToViewPort : NSObject<IGCollectionViewLayoutAttributesModifier> {
  /* instance variables */
  unsigned long long _viewPortEdge;
  unsigned long long _edge;
  double _offset;
  BOOL _isActive;
  NSObject<IGAttachToViewPortOffsetProvider> *_viewPortOffsetProvider;
}

@property (weak, nonatomic) NSObject<IGCollectionViewLayoutAttributesModifierDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)top;
+ (id)bottom;

/* instance methods */
- (id)initWithViewPortEdge:(unsigned long long)edge edge:(unsigned long long)edge offset:(double)offset viewPortOffsetProvider:(id)provider;
- (void)modifyAttributes:(id)attributes withContext:(id)context;
- (id)indexPathDependenciesWithCollectionView:(id)view;
@end

#endif /* IGCollectionViewLayoutAttributesModifierAttachToViewPort_h */
