//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC23IGBarcelonaSecureAssets23IGBarcelonaSecureAssets_h
#define _TtC23IGBarcelonaSecureAssets23IGBarcelonaSecureAssets_h
@import Foundation;

@interface _TtC23IGBarcelonaSecureAssets23IGBarcelonaSecureAssets : NSObject { // (Swift)
  /* instance variables */
   $__lazy_storage_$_scale;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)decryptedAssetImageWithAsset:(long long)asset keyProvider:(id /* block */)provider;
- (void)fetchAssetImageWithAsset:(long long)asset keyProvider:(id /* block */)provider completion:(id /* block */)completion;
- (id)init;
@end

#endif /* _TtC23IGBarcelonaSecureAssets23IGBarcelonaSecureAssets_h */