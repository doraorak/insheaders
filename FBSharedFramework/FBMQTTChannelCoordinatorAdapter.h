//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMQTTChannelCoordinatorAdapter_h
#define FBMQTTChannelCoordinatorAdapter_h
@import Foundation;

#include "FBMQTTBypassClientContainer.h"
#include "FBMQTTChannelCoordinating-Protocol.h"
#include "FBMQTTChannelEndpointCapabilities.h"
#include "FBMQTTClientCapabilities.h"
#include "FBMQTTClientConfiguration.h"
#include "FBMQTTConfigurations.h"
#include "FBMQTTConnectionConfiguration.h"
#include "FBMQTTCredentials.h"
#include "FBMQTTExperiments.h"
#include "FBMQTTNetworkStatusChangedListening-Protocol.h"
#include "FBMQTTNetworkStatusMonitor.h"
#include "IGMQTTBypassDependencies.h"
#include "JSONDecoder.h"

@class FBUserSession, NSDictionary, NSMapTable, NSMutableArray, NSString;
@protocol FBMQTTAnalyticsLogger, OS_dispatch_queue, {atomic<FBMQTTChannelCoordinatorState>="__a_"{__cxx_atomic_impl<FBMQTTChannelCoordinatorState, std::__cxx_atomic_base_impl<FBMQTTChannelCoordinatorState>>="__a_value"Aq}}, {shared_ptr<folly::SequencedExecutor>="__ptr_"^{SequencedExecutor}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<mqtt::connection::IMQTTProtocolConnection>="__ptr_"^{IMQTTProtocolConnection}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<mqtt::connection::MQTTConnection>="__ptr_"^{MQTTConnection}"__cntrl_"^{__shared_weak_count}};

@interface FBMQTTChannelCoordinatorAdapter : NSObject<FBMQTTNetworkStatusChangedListening, FBMQTTChannelCoordinating> {
  /* instance variables */
  FBMQTTExperiments *_experiments;
  FBMQTTClientCapabilities *_clientCapabilities;
  FBMQTTChannelEndpointCapabilities *_endpointCapabilities;
  FBMQTTNetworkStatusMonitor *_networkStatusMonitor;
  JSONDecoder *_jsonDecoder;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_jsonEncodingQueue;
  NSObject<OS_dispatch_queue> *_jsonDecodingQueue;
  struct shared_ptr<mqtt::connection::MQTTConnection> { struct MQTTConnection *__ptr_; struct __shared_weak_count *__cntrl_; } _mqttConnection;
  struct atomic<FBMQTTChannelCoordinatorState> { struct __cxx_atomic_impl<FBMQTTChannelCoordinatorState, std::__cxx_atomic_base_impl<FBMQTTChannelCoordinatorState>> { atomic  __a_value; long long x0; } __a_; } _state;
  struct shared_ptr<folly::SequencedExecutor> { struct SequencedExecutor *__ptr_; struct __shared_weak_count *__cntrl_; } _bypassExecutor;
  FBMQTTBypassClientContainer *_mqttBypassConnectionWrapper;
  struct shared_ptr<mqtt::connection::IMQTTProtocolConnection> { struct IMQTTProtocolConnection *__ptr_; struct __shared_weak_count *__cntrl_; } _mqttBypassConnection;
  FBUserSession *_userSession;
  IGMQTTBypassDependencies *_igMqttBypassDependencies;
  BOOL _isMCPEnabled;
  FBMQTTConfigurations *_config;
  FBMQTTClientConfiguration *_clientConfig;
  FBMQTTConnectionConfiguration *_connectionConfig;
  id /* block */ _showOnlineInForegroundBlock;
  id /* block */ _credentialsAvailableBlock;
  id /* block */ _credentialsFetcherBlock;
  id /* block */ _userAgentFormaterBlock;
  NSDictionary *_appSpecificInfo;
  NSObject<FBMQTTAnalyticsLogger> *_analyticsLogger;
  NSMapTable *_listenerToTokenMap;
  FBMQTTCredentials *_userCredentials;
  NSString *_userAgent;
  NSMutableArray *_preStartListeners;
  NSMutableArray *_preStartPublishers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTopicSubscribeAnnouncer:(id)announcer reachabilityListener:(id)listener experiments:(id)experiments queue:(id)queue analyticsShimLogger:(id)logger userSession:(id)session igMqttBypassDependencies:(id)dependencies isMCPEnabled:(BOOL)mcpenabled;
- (long long)networkStatus;
- (id)mqttSessionIdForAnalytics;
- (id)config;
- (id)clientConfig;
- (id)connectionConfig;
- (unsigned long long)clientCapabilities;
- (id)endpointCapabilities;
- (id)debugInfo;
- (void)configureWithClientConfig:(id)config customConnectionConfiguration:(id)configuration clientCapabilities:(unsigned long long)capabilities endpointCapabilities:(unsigned long long)capabilities appSpecificInfo:(id)info showOnLineOnForegroundBlock:(id /* block */)block credentialsAvailableBlock:(id /* block */)block credentialsFetcherBlock:(id /* block */)block userAgentFormatterBlock:(id /* block */)block analyticsLogger:(id)logger;
- (void)start;
- (void)stop;
- (void)updateRegionPreference:(id)preference;
- (void)setAssetIDs:(id)ids;
- (void)resetConnectionConfig:(id)config;
- (void)credentialsDidBecomeAvailable;
- (void)sendMQTTKeepAlive;
- (void)publishApplicationState:(BOOL)state clientRequestId:(id)id;
- (void)setInBackground:(BOOL)background clientRequestId:(id)id;
- (void)setInBackground:(BOOL)background clientRequestId:(id)id shouldPublishState:(BOOL)state;
- (long long)state;
- (BOOL)isConnected;
- (BOOL)isReachable;
- (BOOL)isStarted;
- (void)addListener:(id)listener;
- (void)addListeners:(id)listeners;
- (void)removeListener:(id)listener;
- (void)removeListeners:(id)listeners;
- (void)addPublisher:(id)publisher;
- (void)removePublisher:(id)publisher;
- (void)networkStatusChangedFrom:(long long)from to:(long long)to;
- (void)_registerMCIHandlersIfNeeded;
- (void)_createMqttBypassConnection:(struct MQTTConnectionConfig { int x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x1; struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x1; } x0; BOOL x1; } x2; unsigned short x3; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x4; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x5; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x6; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x7; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x8; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x9; int x10; struct TransportSettings { BOOL x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x1; } x11; BOOL x12; BOOL x13; BOOL x14; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x15; int x16; long long x17; struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x1; } x0; BOOL x1; } x18; struct optional<std::unordered_map<std::string, std::string>> { union { char x0; struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::string>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { void * * x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>>> { float x0; } x3; } x0; } x1; } x0; BOOL x1; } x19; struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x1; } x0; BOOL x1; } x20; struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x1; } x0; BOOL x1; } x21; struct function<bool ()> { struct __value_func<bool ()> { struct type { unsigned char x0[24] } x0; void * x1; } x0; } x22; struct function<void (const mqtt::connection::MQTTChannelStateInfo &)> { struct __value_func<void (const mqtt::connection::MQTTChannelStateInfo &)> { struct type { unsigned char x0[24] } x0; void * x1; } x0; } x23; struct MQTTConnectionPersonalizationConfig { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; BOOL x18; BOOL x19; BOOL x20; long long x21; long long x22; long long x23; } x24; struct MQTTConnectionKeepAliveConfig { int x0; int x1; int x2; int x3; BOOL x4; double x5; double x6; } x25; struct MQTTConnectionSchedulingConfig { unsigned int x0; int x1; double x2; double x3; unsigned int x4; int x5; long long x6; BOOL x7; BOOL x8; BOOL x9; BOOL x10; int x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; } x26; struct function<void (std::unique_ptr<folly::IOBuf>)> { struct __value_func<void (std::unique_ptr<folly::IOBuf>)> { struct type { unsigned char x0[24] } x0; void * x1; } x0; } x27; struct function<void (int)> { struct __value_func<void (int)> { struct type { unsigned char x0[24] } x0; void * x1; } x0; } x28; struct function<void (std::string, std::unique_ptr<folly::IOBuf>, const mqtt::connection::MQTTReceiveStats &)> { struct __value_func<void (std::string, std::unique_ptr<folly::IOBuf>, const mqtt::connection::MQTTReceiveStats &)> { struct type { unsigned char x0[24] } x0; void * x1; } x0; } x29; struct optional<const void *> { union { char x0; void * x1; } x0; BOOL x1; } x30; BOOL x31; BOOL x32; struct optional<std::unordered_map<std::string, long>> { union { char x0; struct unordered_map<std::string, long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, long>>> { struct __hash_table<std::__hash_value_type<std::string, long>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, long>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, long>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, long>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, long>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, long>, void *> *> *>>> { void * * x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, long>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, long>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, long>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, long>, void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, long>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, long>, std::equal_to<std::string>, std::hash<std::string>>> { float x0; } x3; } x0; } x1; } x0; BOOL x1; } x33; BOOL x34; BOOL x35; int x36; })connection;
@end

#endif /* FBMQTTChannelCoordinatorAdapter_h */
