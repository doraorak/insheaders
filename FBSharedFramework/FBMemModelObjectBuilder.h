//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMemModelObjectBuilder_h
#define FBMemModelObjectBuilder_h
@import Foundation;

#include "FBMemModelObject.h"

@protocol {unique_ptr<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder, std::default_delete<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder>>="__ptr_"{__compressed_pair<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder *, std::default_delete<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder>>="__value_"^{ProxyPandoTreeBuilder}}}, {unique_ptr<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper, std::default_delete<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper>>="__ptr_"{__compressed_pair<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper *, std::default_delete<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper>>="__value_"^{TreeBuilderWrapper}}};

@interface FBMemModelObjectBuilder : NSObject {
  /* instance variables */
  struct unique_ptr<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper, std::default_delete<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper>> { struct __compressed_pair<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper *, std::default_delete<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper>> { struct TreeBuilderWrapper *__value_; } __ptr_; } _impl;
  struct unique_ptr<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder, std::default_delete<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder>> { struct __compressed_pair<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder *, std::default_delete<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder>> { struct ProxyPandoTreeBuilder *__value_; } __ptr_; } _pandoImpl;
  FBMemModelObject *_vendedResult;
}

/* class methods */
+ (BOOL)resolveInstanceMethod:(SEL)method;

/* instance methods */
- (id)init;
- (id)initWithImpl:(struct unique_ptr<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper, std::default_delete<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper>> { struct __compressed_pair<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper *, std::default_delete<facebook::mobile::FBMemModel::detail::TreeBuilderWrapper>> { struct TreeBuilderWrapper * x0; } x0; })impl;
- (id)initWithPandoImpl:(struct unique_ptr<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder, std::default_delete<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder>> { struct __compressed_pair<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder *, std::default_delete<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder>> { struct ProxyPandoTreeBuilder * x0; } x0; })impl;
- (void)setPrimaryKeyValue:(id)value;
- (void)setValue:(id)value forAlias:(struct Range<const char *> { char * x0; char * x1; })alias field:(struct Range<const char *> { char * x0; char * x1; })field;
- (id)getResult;
- (const void *)pandoTreeBuilder;
- (struct unique_ptr<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder, std::default_delete<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder>> { struct __compressed_pair<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder *, std::default_delete<facebook::mobile::FBMemModel::detail::ProxyPandoTreeBuilder>> { struct ProxyPandoTreeBuilder * x0; } x0; })movePandoTreeBuilder;
- (struct unique_ptr<facebook::mobile::graphstore::TreeBuilder, std::default_delete<facebook::mobile::graphstore::TreeBuilder>> { struct __compressed_pair<facebook::mobile::graphstore::TreeBuilder *, std::default_delete<facebook::mobile::graphstore::TreeBuilder>> { struct TreeBuilder * x0; } x0; })treeBuilder;
@end

#endif /* FBMemModelObjectBuilder_h */
