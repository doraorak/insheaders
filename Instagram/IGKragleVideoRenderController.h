//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGKragleVideoRenderController_h
#define IGKragleVideoRenderController_h
@import Foundation;

@class IGThreadSafeDictionary;
@protocol IGKragleVideoRenderControllerDelegate;

@interface IGKragleVideoRenderController : NSObject {
  /* instance variables */
  struct __RSVideoRenderProxy * _videoRenderProxy;
  struct __RSVideoRenderApi * _videoRenderApi;
  IGThreadSafeDictionary *_userToVideoSize;
}

@property (weak, nonatomic) NSObject<IGKragleVideoRenderControllerDelegate> *delegate;

/* instance methods */
- (id)init;
- (void)dealloc;
@end

#endif /* IGKragleVideoRenderController_h */