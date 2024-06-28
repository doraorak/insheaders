//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLiveRTCRoomHostSession_h
#define IGLiveRTCRoomHostSession_h
@import Foundation;

#include "FBVideoBroadcastRTCSession-Protocol.h"
#include "FBVideoBroadcastSessionDelegate-Protocol.h"
#include "FBVideoBroadcastSessionLiveWithDelegate-Protocol.h"
#include "FBVideoRecordingResultDataSource-Protocol.h"
#include "IGRTCKragleCall.h"
#include "IGRTCKragleVideoViewManager.h"
#include "IGSubscriptionToken-Protocol.h"

@class FBTimer, IGAudioSessionClient, NSDate, NSSet, NSString;
@protocol FBVideoBroadcastSessionConnectionSetupDelegate, IGLiveRTCEngine;

@interface IGLiveRTCRoomHostSession : NSObject<FBVideoBroadcastRTCSession> {
  /* instance variables */
  NSObject<IGLiveRTCEngine> *_rtcEngine;
  NSString *_broadcastId;
  struct CGSize { double width; double height; } _rtmpResolution;
  BOOL _productIntendedAudioState;
  IGRTCKragleCall *_call;
  NSObject<IGSubscriptionToken> *_callModelPipeSubscription;
  NSObject<IGSubscriptionToken> *_callStatsPipeSubscription;
  IGRTCKragleVideoViewManager *_videoViewManager;
  NSDate *_callStartTime;
  NSDate *_callConnectedTime;
  FBTimer *_startLiveSwapTimer;
  IGAudioSessionClient *_audioClient;
}

@property (weak) NSObject<FBVideoBroadcastSessionLiveWithDelegate> *liveWithDelegate;
@property (weak, nonatomic) NSObject<FBVideoRecordingResultDataSource> *recordingResultsDataSource;
@property (weak) NSObject<FBVideoBroadcastSessionDelegate> *delegate;
@property (weak) NSObject<FBVideoBroadcastSessionConnectionSetupDelegate> *connectionSetupDelegate;
@property (readonly, copy, nonatomic) NSSet *currentOrInvitedGuests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBroadcastId:(id)id initialAudioEnabled:(BOOL)enabled rtcEngine:(id)engine liveWithDelegate:(id)delegate useVideoCallAudioConfig:(BOOL)config;
- (id)liveWithSessionStartedTime;
- (id)liveWithSessionUserJoinedTime;
- (void)setRtmpResolutionToSendToCSOnSwap:(struct CGSize { double x0; double x1; })swap;
- (void)endRTCCallAndMigrateSession:(id /* block */)session;
- (struct FBVideoBroadcastRtmpSwapStats { double x0; double x1; double x2; double x3; double x4; double x5; double x6; })swapStats;
- (id)diskRecorder;
- (void)processAudio:(struct opaqueCMSampleBuffer *)audio;
- (void)processVideo:(struct opaqueCMSampleBuffer *)video;
- (void)processEventMessage:(unsigned long long)message payload:(id)payload;
- (void)processEventMessage:(unsigned long long)message duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration payload:(id)payload;
- (void)processEventMessage:(unsigned long long)message duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration delay:(struct { long long x0; int x1; unsigned int x2; long long x3; })delay payload:(id)payload;
- (void)connectAndImmediatelyAllowStreaming:(BOOL)streaming;
- (void)finallyFetchedBroadcastID:(id)id withRTCSessionConfig:(struct { struct DiskVideoRecorderConfig { int x0; struct duration<double, std::ratio<1>> { double x0; } x1; struct duration<double, std::ratio<1>> { double x0; } x2; struct VideoConfig { int x0; int x1; int x2; int x3; BOOL x4; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x5; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x6; BOOL x7; unsigned char x8; BOOL x9; } x3; struct AudioConfig { int x0; int x1; int x2; unsigned char x3; BOOL x4; BOOL x5; BOOL x6; } x4; BOOL x5; int x6; int x7; double x8; int x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; BOOL x14; BOOL x15; int x16; int x17; int x18; double x19; } x0; BOOL x1; BOOL x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; int x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; id x18; BOOL x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; })config rtmpConfig:(struct { id x0; id x1; id x2; id x3; struct shared_ptr<const std::vector<unsigned char>> { void * x0; struct __shared_weak_count * x1; } x4; struct shared_ptr<const std::vector<unsigned char>> { void * x0; struct __shared_weak_count * x1; } x5; struct AudioConfig { int x0; int x1; int x2; unsigned char x3; BOOL x4; BOOL x5; BOOL x6; } x6; struct VideoConfig { int x0; int x1; int x2; int x3; BOOL x4; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x5; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x6; BOOL x7; unsigned char x8; BOOL x9; } x7; struct { int x0; int x1; int x2; double x3; int x4; int x5; int x6; int x7; int x8; int x9; unsigned long long x10; double x11; int x12; double x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; int x22; id x23; double x24; long long x25; int x26; BOOL x27; int x28; BOOL x29; BOOL x30; int x31; int x32; long long x33; BOOL x34; BOOL x35; int x36; BOOL x37; struct ThroughputMonitorConfig { char x0; double x1; double x2; } x38; BOOL x39; BOOL x40; int x41; BOOL x42; BOOL x43; BOOL x44; int x45; BOOL x46; } x8; struct ThroughputMonitorConfig { char x0; double x1; double x2; } x9; struct AdaptiveBitrateConfig { BOOL x0; int x1; int x2; int x3; int x4; int x5; double x6; int x7; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x8; BOOL x9; double x10; double x11; double x12; int x13; int x14; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x15; BOOL x16; int x17; struct AdaptiveBitrateExperimentalParameters { int x0; float x1; } x18; struct AdaptiveBitrateBandwidthBasedParameters { int x0; int x1; int x2; int x3; int x4; } x19; } x10; struct DiskVideoRecorderConfig { int x0; struct duration<double, std::ratio<1>> { double x0; } x1; struct duration<double, std::ratio<1>> { double x0; } x2; struct VideoConfig { int x0; int x1; int x2; int x3; BOOL x4; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x5; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x6; BOOL x7; unsigned char x8; BOOL x9; } x3; struct AudioConfig { int x0; int x1; int x2; unsigned char x3; BOOL x4; BOOL x5; BOOL x6; } x4; BOOL x5; int x6; int x7; double x8; int x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; BOOL x14; BOOL x15; int x16; int x17; int x18; double x19; } x11; BOOL x12; struct FBVideoBroadcastSessionTimestampConfig { BOOL x0; BOOL x1; BOOL x2; } x13; struct LiveTraceConfig { BOOL x0; int x1; int x2; } x14; BOOL x15; BOOL x16; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x17; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x18; struct unordered_map<std::string, double, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, double>>> { struct __hash_table<std::__hash_value_type<std::string, double>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, double>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>> { void * * x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, double>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>>> { float x0; } x3; } x0; } x19; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x20; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x21; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x22; })config rtmpMessageChannel:(id)channel;
- (void)updateRtmpConfig:(struct { id x0; id x1; id x2; id x3; struct shared_ptr<const std::vector<unsigned char>> { void * x0; struct __shared_weak_count * x1; } x4; struct shared_ptr<const std::vector<unsigned char>> { void * x0; struct __shared_weak_count * x1; } x5; struct AudioConfig { int x0; int x1; int x2; unsigned char x3; BOOL x4; BOOL x5; BOOL x6; } x6; struct VideoConfig { int x0; int x1; int x2; int x3; BOOL x4; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x5; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x6; BOOL x7; unsigned char x8; BOOL x9; } x7; struct { int x0; int x1; int x2; double x3; int x4; int x5; int x6; int x7; int x8; int x9; unsigned long long x10; double x11; int x12; double x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18; BOOL x19; BOOL x20; BOOL x21; int x22; id x23; double x24; long long x25; int x26; BOOL x27; int x28; BOOL x29; BOOL x30; int x31; int x32; long long x33; BOOL x34; BOOL x35; int x36; BOOL x37; struct ThroughputMonitorConfig { char x0; double x1; double x2; } x38; BOOL x39; BOOL x40; int x41; BOOL x42; BOOL x43; BOOL x44; int x45; BOOL x46; } x8; struct ThroughputMonitorConfig { char x0; double x1; double x2; } x9; struct AdaptiveBitrateConfig { BOOL x0; int x1; int x2; int x3; int x4; int x5; double x6; int x7; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x8; BOOL x9; double x10; double x11; double x12; int x13; int x14; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x15; BOOL x16; int x17; struct AdaptiveBitrateExperimentalParameters { int x0; float x1; } x18; struct AdaptiveBitrateBandwidthBasedParameters { int x0; int x1; int x2; int x3; int x4; } x19; } x10; struct DiskVideoRecorderConfig { int x0; struct duration<double, std::ratio<1>> { double x0; } x1; struct duration<double, std::ratio<1>> { double x0; } x2; struct VideoConfig { int x0; int x1; int x2; int x3; BOOL x4; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x5; struct Optional<int> { struct StorageTriviallyDestructible { union { char x0; int x1; } x0; BOOL x1; } x0; } x6; BOOL x7; unsigned char x8; BOOL x9; } x3; struct AudioConfig { int x0; int x1; int x2; unsigned char x3; BOOL x4; BOOL x5; BOOL x6; } x4; BOOL x5; int x6; int x7; double x8; int x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; BOOL x14; BOOL x15; int x16; int x17; int x18; double x19; } x11; BOOL x12; struct FBVideoBroadcastSessionTimestampConfig { BOOL x0; BOOL x1; BOOL x2; } x13; struct LiveTraceConfig { BOOL x0; int x1; int x2; } x14; BOOL x15; BOOL x16; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x17; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x18; struct unordered_map<std::string, double, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, double>>> { struct __hash_table<std::__hash_value_type<std::string, double>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, double>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>> { void * * x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, double>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>>> { float x0; } x3; } x0; } x19; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x20; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x21; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x22; })config;
- (void)stop:(BOOL)stop;
- (void)setMicrophoneEnabled:(BOOL)enabled;
- (BOOL)isMicrophoneEnabled;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (void)stopDVRIfRunning;
- (void)swapVideoWidthAndHeightAfterOrientationChange;
- (void)setVideoSubscriptions:(id)subscriptions dominantStreamQuality:(unsigned long long)quality;
- (void)setFrameCropInfo:(struct { struct CGSize { double x0; double x1; } x0; BOOL x1; })info;
- (void)pause:(BOOL)pause;
- (void)resumeAndUpload:(BOOL)upload;
- (BOOL)isConnectedToServer;
- (BOOL)hasSentMediaDataToServer;
- (BOOL)supportOfflineStreaming;
- (long long)readyState;
- (struct FBVideoBroadcastSessionStats { struct unordered_map<std::string, double, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, double>>> { struct __hash_table<std::__hash_value_type<std::string, double>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, double>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>>> { void * * x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, double>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, double>, void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, double>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, double>, std::equal_to<std::string>, std::hash<std::string>>> { float x0; } x3; } x0; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { long long x0; int x1; unsigned int x2; long long x3; } x3; double x4; unsigned long long x5; unsigned long long x6; struct { long long x0; int x1; unsigned int x2; long long x3; } x7; struct { long long x0; int x1; unsigned int x2; long long x3; } x8; double x9; double x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; double x14; long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; BOOL x23; BOOL x24; unsigned int x25; unsigned int x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; })stats;
- (void)onInterruptionForReasonBackground:(BOOL)background;
- (void)onInterruptionEnded;
- (Class)videoEncoderClass;
- (void)setBaseTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })baseTimestamp;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })convertDeviceTimestampToStreamTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })timestamp;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastRecordedAudioTimestamp;
- (void)setDiskRecorder:(id)recorder;
- (void)switchToRTMPWithTimeout:(unsigned long long)timeout;
- (void)startProcessingDataAndStreamToServer;
- (void)softMuteUsers:(id)users;
- (void)startCall;
- (void)ringUsers:(id)users withLayout:(unsigned long long)layout;
- (void)addUsers:(id)users withLayout:(unsigned long long)layout;
- (void)removeGuest:(id)guest completion:(id /* block */)completion;
- (void)cancelInvitationForGuest:(id)guest completion:(id /* block */)completion;
- (void)join;
- (void)leave;
- (void)declineInvitation;
- (void)setAudioEnabled:(BOOL)enabled;
@end

#endif /* IGLiveRTCRoomHostSession_h */
