//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMLHandGestureModelOutput_h
#define IGMLHandGestureModelOutput_h
@import Foundation;

@protocol IGMLHandGestureListener;

@interface IGMLHandGestureModelOutput : NSObject {
  /* instance variables */
  NSObject<IGMLHandGestureListener> *_delegate;
  long long _handGesture;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _handBoundaryRatio;
}

/* instance methods */
- (id)initWithListener:(id)listener;
- (void)didReceiveOutputFromModel:(struct map<int, std::vector<float>, std::less<int>, std::allocator<std::pair<const int, std::vector<float>>>> { struct __tree<std::__value_type<int, std::vector<float>>, std::__map_value_compare<int, std::__value_type<int, std::vector<float>>, std::less<int>>, std::allocator<std::__value_type<int, std::vector<float>>>> { void * x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::vector<float>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::vector<float>>, std::less<int>>> { unsigned long long x0; } x2; } x0; })model sizes:(struct map<int, std::vector<int>, std::less<int>, std::allocator<std::pair<const int, std::vector<int>>>> { struct __tree<std::__value_type<int, std::vector<int>>, std::__map_value_compare<int, std::__value_type<int, std::vector<int>>, std::less<int>>, std::allocator<std::__value_type<int, std::vector<int>>>> { void * x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::vector<int>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::vector<int>>, std::less<int>>> { unsigned long long x0; } x2; } x0; })sizes input:(id)input;
@end

#endif /* IGMLHandGestureModelOutput_h */