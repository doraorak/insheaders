//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSerializable_Protocol_h
#define IGSerializable_Protocol_h
@import Foundation;

@protocol IGSerializable <NSObject>
/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;
/* instance methods */
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
@end

#endif /* IGSerializable_Protocol_h */