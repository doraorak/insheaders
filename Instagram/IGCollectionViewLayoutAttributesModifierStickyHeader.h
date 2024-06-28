//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCollectionViewLayoutAttributesModifierStickyHeader_h
#define IGCollectionViewLayoutAttributesModifierStickyHeader_h
@import Foundation;

#include "IGCollectionViewLayoutAttributesModifier-Protocol.h"
#include "IGCollectionViewLayoutAttributesModifierAttachToIndexPath.h"
#include "IGCollectionViewLayoutAttributesModifierAttachToViewPort.h"

@class NSString;
@protocol IGCollectionViewLayoutAttributesModifierDelegate;

@interface IGCollectionViewLayoutAttributesModifierStickyHeader : NSObject<IGCollectionViewLayoutAttributesModifier> {
  /* instance variables */
  IGCollectionViewLayoutAttributesModifierAttachToViewPort *_viewPortModifier;
  IGCollectionViewLayoutAttributesModifierAttachToIndexPath *_indexPathModifer;
}

@property (weak, nonatomic) NSObject<IGCollectionViewLayoutAttributesModifierDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNextStickyHeaderIndexPath:(id)path;
- (void)modifyAttributes:(id)attributes withContext:(id)context;
- (id)indexPathDependenciesWithCollectionView:(id)view;
@end

#endif /* IGCollectionViewLayoutAttributesModifierStickyHeader_h */