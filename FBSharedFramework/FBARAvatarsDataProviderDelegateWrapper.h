//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARAvatarsDataProviderDelegateWrapper_h
#define FBARAvatarsDataProviderDelegateWrapper_h
@import Foundation;

#include "NSCopying-Protocol.h"

@protocol struct shared_ptr<msqrd::dataprovider::IAvatarsDataProviderDelegate> { struct IAvatarsDataProviderDelegate * x0; struct __shared_weak_count * x1; }, {shared_ptr<msqrd::dataprovider::IAvatarsDataProviderDelegate>="__ptr_"^{IAvatarsDataProviderDelegate}"__cntrl_"^{__shared_weak_count}};

@interface FBARAvatarsDataProviderDelegateWrapper : NSObject<NSCopying>

@property (readonly, nonatomic) struct shared_ptr<msqrd::dataprovider::IAvatarsDataProviderDelegate> { struct IAvatarsDataProviderDelegate * x0; struct __shared_weak_count * x1; } delegate;

/* class methods */
+ (id)newWithDelegate:(struct shared_ptr<msqrd::dataprovider::IAvatarsDataProviderDelegate> { struct IAvatarsDataProviderDelegate * x0; struct __shared_weak_count * x1; })delegate;

/* instance methods */
- (id)initWithDelegate:(struct shared_ptr<msqrd::dataprovider::IAvatarsDataProviderDelegate> { struct IAvatarsDataProviderDelegate * x0; struct __shared_weak_count * x1; })delegate;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FBARAvatarsDataProviderDelegateWrapper_h */
