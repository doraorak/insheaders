//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMediaPreloaderPhotoProgressDelegate_Protocol_h
#define IGMediaPreloaderPhotoProgressDelegate_Protocol_h
@import Foundation;

@protocol IGMediaPreloaderPhotoProgressDelegate <NSObject>
/* instance methods */
- (void)mediaPreloader:(id)preloader didLoadPhotoForItem:(id)item url:(id)url loadSource:(unsigned long long)source module:(id)module;
- (void)mediaPreloader:(id)preloader didLoadPhotoForItem:(id)item url:(id)url loadSource:(unsigned long long)source module:(id)module;
- (void)mediaPreloader:(id)preloader didFailPhotoForItem:(id)item url:(id)url module:(id)module;
- (void)mediaPreloader:(id)preloader didFailPhotoForItem:(id)item url:(id)url module:(id)module;
@end

#endif /* IGMediaPreloaderPhotoProgressDelegate_Protocol_h */
