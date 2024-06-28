//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGReactRootViewConfiguration_h
#define IGReactRootViewConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class NSDictionary, NSString;

@interface IGReactRootViewConfiguration : NSObject<NSCopying, NSObject>

@property (readonly, copy, nonatomic) NSString *moduleName;
@property (readonly, copy, nonatomic) NSDictionary *initialProperties;
@property (readonly, nonatomic) BOOL loadingViewHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithModuleName:(id)name initialProperties:(id)properties loadingViewHidden:(BOOL)hidden;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGReactRootViewConfiguration_h */
