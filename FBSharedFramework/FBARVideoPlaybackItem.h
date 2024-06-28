//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARVideoPlaybackItem_h
#define FBARVideoPlaybackItem_h
@import Foundation;

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput;
@protocol struct shared_ptr<msqrd::dataprovider::IVideoDataProvider> { struct IVideoDataProvider * x0; struct __shared_weak_count * x1; }, {Optional<CGSize>="storage_"{StorageTriviallyDestructible=""(?="emptyState"c"value"{CGSize="width"d"height"d})"hasValue"B}}, {Optional<arfx::engine::renderer::Transform>="storage_"{StorageTriviallyDestructible=""(?="emptyState"c"value"{Transform="offset"{vec<2, float, glm::aligned_highp>=""(?=""{?="x"f"y"f}""{?="r"f"g"f}""{?="s"f"t"f}"data"{type="data"[2f]})}"matrix"{mat<2, 2, float, glm::aligned_highp>="value"[2{vec<2, float, glm::aligned_highp>=""(?=""{?="x"f"y"f}""{?="r"f"g"f}""{?="s"f"t"f}"data"{type="data"[2f]})}]}})"hasValue"B}}, {shared_ptr<msqrd::dataprovider::VideoDataProvider>="__ptr_"^{VideoDataProvider}"__cntrl_"^{__shared_weak_count}};

@interface FBARVideoPlaybackItem : NSObject {
  /* instance variables */
  AVAsset *_videoAsset;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _mutex;
  unsigned char _requestedState;
  AVPlayer *_player;
  AVPlayerItem *_playerItem;
  AVPlayerItemVideoOutput *_playerItemVideoOutput;
  struct Optional<arfx::engine::renderer::Transform> { struct StorageTriviallyDestructible { union { char emptyState; struct Transform { struct vec<2, float, glm::aligned_highp> { union { struct { float x; float y; } x0; struct { float r; float g; } x1; struct { float s; float t; } x2; struct type { float x[2] data; } data; } x0; } offset; struct mat<2, 2, float, glm::aligned_highp> { f]})} x[2{vec<2, float, glm::aligned_highp>=""(?=""{?="x"f"y"f}""{?="r"f"g"f}""{?="s"f"t"f}"data"{type="data"[2] value; } matrix; } value; } x0; BOOL hasValue; } storage_; } _preferredTransform;
  struct Optional<CGSize> { struct StorageTriviallyDestructible { union { char emptyState; struct CGSize { double width; double height; } value; } x0; BOOL hasValue; } storage_; } _textureSize;
  unsigned int _completeCount;
  BOOL _seeking;
  BOOL _newSeekBehavaior;
}

@property (nonatomic) BOOL looped;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentPosition;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) unsigned int loopCount;
@property (readonly, nonatomic) struct shared_ptr<msqrd::dataprovider::IVideoDataProvider> { struct IVideoDataProvider * x0; struct __shared_weak_count * x1; } engineDataProvider;

/* instance methods */
- (id)initWithVideoURL:(id)url domainAllowlist:(struct shared_ref<msqrd::service_utils::ARNetworkDomainWhitelist> { struct shared_ptr<msqrd::service_utils::ARNetworkDomainWhitelist> { struct ARNetworkDomainWhitelist * x0; struct __shared_weak_count * x1; } x0; })allowlist;
- (void)dealloc;
- (void)prepareToPlay;
- (void)tearDown;
- (void)resume;
- (void)pause;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_playerItemDidPlayToEndTime:(id)time;
- (BOOL)isLooped;
@end

#endif /* FBARVideoPlaybackItem_h */
