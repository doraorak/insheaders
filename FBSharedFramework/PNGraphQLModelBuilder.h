//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef PNGraphQLModelBuilder_h
#define PNGraphQLModelBuilder_h
@import Foundation;

#include "FBFragmentModelBuilderProtocol-Protocol.h"

@class NSString;
@protocol PNGraphQLTreeBuilder;

@interface PNGraphQLModelBuilder : NSObject<FBFragmentModelBuilderProtocol> {
  /* instance variables */
  NSObject<PNGraphQLTreeBuilder> *_treeBuilder;
  const struct PNGraphQLModelInfo * _modelInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTreeBuilder:(id)builder modelInfo:(const struct PNGraphQLModelInfo *)info;
- (id)treeBuilder;
- (id)getResult;
- (void)forwardInvocation:(id)invocation;
- (id)methodSignatureForSelector:(SEL)selector;
@end

#endif /* PNGraphQLModelBuilder_h */