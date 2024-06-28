//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGShoppingReconsiderationDynamicUpdateProvider_h
#define IGShoppingReconsiderationDynamicUpdateProvider_h
@import Foundation;

@class IGStatefulNetworker, NSString;
@protocol IGShoppingReconsiderationDynamicUpdateProviderDelegate;

@interface IGShoppingReconsiderationDynamicUpdateProvider : NSObject {
  /* instance variables */
  IGStatefulNetworker *_networker;
  NSString *_primaryEndpoint;
  unsigned long long _surfaceType;
}

@property (weak, nonatomic) NSObject<IGShoppingReconsiderationDynamicUpdateProviderDelegate> *delegate;

/* instance methods */
- (id)initWithSource:(long long)source surfaceType:(unsigned long long)type objectStores:(id)stores networker:(id)networker;
@end

#endif /* IGShoppingReconsiderationDynamicUpdateProvider_h */
