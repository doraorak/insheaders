//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFiloKeyTransformingLayer_h
#define IGFiloKeyTransformingLayer_h
@import Foundation;

#include "IGFiloLayer.h"
#include "IGFiloLayer.h"

@interface IGFiloKeyTransformingLayer : IGFiloLayer {
  /* instance variables */
  IGFiloLayer *_nextLayer;
  id /* block */ _keyTransformer;
  id /* block */ _allKeysGetter;
}

/* instance methods */
- (id)initWithIdentifier:(id)identifier nextLayer:(id)layer keyTransformer:(id /* block */)transformer allKeysGetter:(id /* block */)getter;
- (id)allKeysAttributedTo:(id)to;
- (BOOL)containsKey:(id)key attributedTo:(id)to;
- (id)receiveValueForKey:(id)key attributedTo:(id)to error:(id *)error;
- (void)sendValue:(id)value forKey:(id)key attributedTo:(id)to completion:(id /* block */)completion;
- (void)flushAttributedTo:(id)to completion:(id /* block */)completion;
@end

#endif /* IGFiloKeyTransformingLayer_h */