//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef Keyframes3Loader_h
#define Keyframes3Loader_h
@import Foundation;

#include "KFEntity.h"
#include "KFLoaderMetadata.h"
#include "KFLoaderProtocol-Protocol.h"
#include "KFWorld.h"

@class NSData, NSMutableDictionary, NSString;
@protocol {map<int, const kf3::facebook::keyframes::Layer *, std::less<int>, std::allocator<std::pair<const int, const kf3::facebook::keyframes::Layer *>>>="__tree_"{__tree<std::__value_type<int, const kf3::facebook::keyframes::Layer *>, std::__map_value_compare<int, std::__value_type<int, const kf3::facebook::keyframes::Layer *>, std::less<int>>, std::allocator<std::__value_type<int, const kf3::facebook::keyframes::Layer *>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, const kf3::facebook::keyframes::Layer *>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, const kf3::facebook::keyframes::Layer *>, std::less<int>>>="__value_"Q}}}, {vector<AlphaMatteDescriptor, std::allocator<AlphaMatteDescriptor>>="__begin_"^{AlphaMatteDescriptor}"__end_"^{AlphaMatteDescriptor}"__end_cap_"{__compressed_pair<AlphaMatteDescriptor *, std::allocator<AlphaMatteDescriptor>>="__value_"^{AlphaMatteDescriptor}}};

@interface Keyframes3Loader : NSObject<KFLoaderProtocol> {
  /* instance variables */
  NSData *_data;
  KFWorld *_world;
  KFEntity *_documentEntity;
  const struct Scene * _defaultScene;
  NSMutableDictionary *_sceneIDToSceneEntityMap;
  NSMutableDictionary *_sceneInstanceToLayerEntityMap;
  KFLoaderMetadata *_metadata;
  struct vector<AlphaMatteDescriptor, std::allocator<AlphaMatteDescriptor>> { struct AlphaMatteDescriptor *__begin_; struct AlphaMatteDescriptor *__end_; struct __compressed_pair<AlphaMatteDescriptor *, std::allocator<AlphaMatteDescriptor>> { struct AlphaMatteDescriptor *__value_; } __end_cap_; } _alphaMatteSources;
  struct map<int, const kf3::facebook::keyframes::Layer *, std::less<int>, std::allocator<std::pair<const int, const kf3::facebook::keyframes::Layer *>>> { struct __tree<std::__value_type<int, const kf3::facebook::keyframes::Layer *>, std::__map_value_compare<int, std::__value_type<int, const kf3::facebook::keyframes::Layer *>, std::less<int>>, std::allocator<std::__value_type<int, const kf3::facebook::keyframes::Layer *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, const kf3::facebook::keyframes::Layer *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, const kf3::facebook::keyframes::Layer *>, std::less<int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _alphaMatteDestinations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithData:(id)data metadata:(id)metadata;
- (id)decodeWithError:(out id *)error;
- (BOOL)decodeSceneInstance:(unsigned short)instance sceneInstanceEntity:(out id *)entity error:(out id *)error;
- (id)_decodeData:(out id *)data;
- (BOOL)_decodeDocument:(const struct Document *)document intoWorld:(id)world outError:(out id *)error;
- (BOOL)_decodeVariables:(const struct Document *)variables intoWorld:(id)world outError:(out id *)error;
- (BOOL)_decodeManifests:(const struct Document *)manifests intoWorld:(id)world outError:(out id *)error;
- (BOOL)_decodeAssets:(const struct Document *)assets intoWorld:(id)world outError:(out id *)error;
- (BOOL)_decodeScenes:(const struct Document *)scenes intoWorld:(id)world outError:(out id *)error;
- (BOOL)_decodeLayersFromScene:(const struct Scene *)scene intoWorld:(id)world document:(const struct Document *)document sceneInstanceEntity:(out id *)entity outError:(out id *)error;
- (BOOL)_decodeLayer:(const struct Layer *)layer withinScene:(const struct Scene *)scene sceneInstanceEntity:(id)entity intoWorld:(id)world document:(const struct Document *)document previousSiblingLayer:(const struct Layer *)layer previousSiblingLayerEntity:(id)entity outEntity:(out id *)entity outError:(out id *)error;
- (BOOL)_decodeAlphaMattesIntoWorld:(id)world outError:(out id *)error;
@end

#endif /* Keyframes3Loader_h */