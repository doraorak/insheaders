//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef PNPandoTree_GraphQLTree_h
#define PNPandoTree_GraphQLTree_h
@import Foundation;

@interface PNPandoTree (GraphQLTree) <PNGraphQLTree>
/* instance methods */
- (id)arrayField_UNTYPED:(id)untyped;
- (id)numberField:(id)field;
- (id)numberArrayField:(id)field;
- (BOOL)supportsQueryVariables;
- (BOOL)booleanVariable:(id)variable;
- (BOOL)hasBooleanVariable:(id)variable;
- (id)resolveField:(id)field;
- (id)updateBuilder;
- (id)copyBuilder;
@end

#endif /* PNPandoTree_GraphQLTree_h */
