//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NativeAnimatedModuleSpec_Protocol_h
#define NativeAnimatedModuleSpec_Protocol_h
@import Foundation;

@protocol NativeAnimatedModuleSpec <RCTBridgeModule, RCTTurboModule>
/* instance methods */
- (void)startOperationBatch;
- (void)finishOperationBatch;
- (void)createAnimatedNode:(double)node config:(id)config;
- (void)updateAnimatedNodeConfig:(double)config config:(id)config;
- (void)getValue:(double)value saveValueCallback:(id /* block */)callback;
- (void)startListeningToAnimatedNodeValue:(double)value;
- (void)stopListeningToAnimatedNodeValue:(double)value;
- (void)connectAnimatedNodes:(double)nodes childTag:(double)tag;
- (void)disconnectAnimatedNodes:(double)nodes childTag:(double)tag;
- (void)startAnimatingNode:(double)node nodeTag:(double)tag config:(id)config endCallback:(id /* block */)callback;
- (void)stopAnimation:(double)animation;
- (void)setAnimatedNodeValue:(double)value value:(double)value;
- (void)setAnimatedNodeOffset:(double)offset offset:(double)offset;
- (void)flattenAnimatedNodeOffset:(double)offset;
- (void)extractAnimatedNodeOffset:(double)offset;
- (void)connectAnimatedNodeToView:(double)view viewTag:(double)tag;
- (void)disconnectAnimatedNodeFromView:(double)view viewTag:(double)tag;
- (void)restoreDefaultValues:(double)values;
- (void)dropAnimatedNode:(double)node;
- (void)addAnimatedEventToView:(double)view eventName:(id)name eventMapping:(struct EventMapping *)mapping;
- (void)removeAnimatedEventFromView:(double)view eventName:(id)name animatedNodeTag:(double)tag;
- (void)addListener:(id)listener;
- (void)removeListeners:(double)listeners;
- (void)queueAndExecuteBatchedOperations:(id)operations;
@end

#endif /* NativeAnimatedModuleSpec_Protocol_h */