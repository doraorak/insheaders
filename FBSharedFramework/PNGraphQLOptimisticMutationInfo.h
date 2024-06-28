//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef PNGraphQLOptimisticMutationInfo_h
#define PNGraphQLOptimisticMutationInfo_h
@import Foundation;

@protocol {unique_ptr<pando::graphql::OptimisticMutationInfo, std::default_delete<pando::graphql::OptimisticMutationInfo>>="__ptr_"{__compressed_pair<pando::graphql::OptimisticMutationInfo *, std::default_delete<pando::graphql::OptimisticMutationInfo>>="__value_"^{OptimisticMutationInfo}}};

@interface PNGraphQLOptimisticMutationInfo : NSObject {
  /* instance variables */
  struct unique_ptr<pando::graphql::OptimisticMutationInfo, std::default_delete<pando::graphql::OptimisticMutationInfo>> { struct __compressed_pair<pando::graphql::OptimisticMutationInfo *, std::default_delete<pando::graphql::OptimisticMutationInfo>> { struct OptimisticMutationInfo *__value_; } __ptr_; } _optimisticMutationInfo;
}

/* instance methods */
- (id)initWithOptimisticBuilder:(id)builder;
- (id)initWithOptimisticBuilders:(id)builders;
- (id)initWithRootKey:(struct NodeKey { unsigned short x0; long long x1; })key applyOperation:(void *)operation;
- (struct unique_ptr<pando::graphql::OptimisticMutationInfo, std::default_delete<pando::graphql::OptimisticMutationInfo>> { struct __compressed_pair<pando::graphql::OptimisticMutationInfo *, std::default_delete<pando::graphql::OptimisticMutationInfo>> { struct OptimisticMutationInfo * x0; } x0; })moveOptimisticMutationInfo;
@end

#endif /* PNGraphQLOptimisticMutationInfo_h */