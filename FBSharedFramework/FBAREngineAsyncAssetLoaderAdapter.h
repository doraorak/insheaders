//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAREngineAsyncAssetLoaderAdapter_h
#define FBAREngineAsyncAssetLoaderAdapter_h
@import Foundation;

#include "FBAREffectLoggingInfo.h"
#include "FBAREffectModel.h"
#include "FBAREngineAsyncAssetLoading-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, NSURL;
@protocol FBARDeliveryFacade, FBAREngineLocalAsyncAssetSource, struct shared_ptr<msqrd::asset::IAsyncAssetLoader> { struct IAsyncAssetLoader * x0; struct __shared_weak_count * x1; }, {shared_ptr<arfx::delivery::IAsyncAssetFetcher>="__ptr_"^{IAsyncAssetFetcher}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<msqrd::asset::IAsyncAssetLoader>="__ptr_"^{IAsyncAssetLoader}"__cntrl_"^{__shared_weak_count}};

@interface FBAREngineAsyncAssetLoaderAdapter : NSObject<NSSecureCoding, FBAREngineAsyncAssetLoading> {
  /* instance variables */
  NSObject<FBARDeliveryFacade> *_arDeliveryFacade;
  FBAREffectLoggingInfo *_effectLoggingInfo;
  BOOL _useEffectURIForLocalAssetStorageBasePath;
  NSURL *_baseURL;
  struct shared_ptr<arfx::delivery::IAsyncAssetFetcher> { struct IAsyncAssetFetcher *__ptr_; struct __shared_weak_count *__cntrl_; } _asyncAssetFetcher;
  NSObject<FBAREngineLocalAsyncAssetSource> *_localAsyncAssetSource;
}

@property (readonly, nonatomic) FBAREffectModel *effectModel;
@property (readonly, nonatomic) struct shared_ptr<msqrd::asset::IAsyncAssetLoader> { struct IAsyncAssetLoader * x0; struct __shared_weak_count * x1; } asyncAssetLoader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithARDeliveryFacade:(id)facade effectModel:(id)model effectLoggingInfo:(id)info useEffectURIForLocalAssetStorageBasePath:(BOOL)path localAsyncAssetSource:(id)source;
- (struct path { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x0; })localAssetStorageBasePath;
- (struct shared_ptr<msqrd::asset::IAsyncAssetLoader> { struct IAsyncAssetLoader * x0; struct __shared_weak_count * x1; })createAsyncAssetLoaderWithBufferPool:(struct shared_ref<facebook::bufferpool::BufferPool> { struct shared_ptr<facebook::bufferpool::BufferPool> { struct BufferPool * x0; struct __shared_weak_count * x1; } x0; })pool;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FBAREngineAsyncAssetLoaderAdapter_h */