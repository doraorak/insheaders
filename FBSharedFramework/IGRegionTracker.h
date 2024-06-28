//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRegionTracker_h
#define IGRegionTracker_h
@import Foundation;

@protocol {map<int, METARegion, std::less<int>, std::allocator<std::pair<const int, METARegion>>>="__tree_"{__tree<std::__value_type<int, METARegion>, std::__map_value_compare<int, std::__value_type<int, METARegion>, std::less<int>>, std::allocator<std::__value_type<int, METARegion>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, METARegion>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, METARegion>, std::less<int>>>="__value_"Q}}};

@interface IGRegionTracker : NSObject {
  /* instance variables */
  struct map<int, METARegion, std::less<int>, std::allocator<std::pair<const int, METARegion>>> { struct __tree<std::__value_type<int, METARegion>, std::__map_value_compare<int, std::__value_type<int, METARegion>, std::less<int>>, std::allocator<std::__value_type<int, METARegion>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, METARegion>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, METARegion>, std::less<int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _cachedRegions;
}

/* instance methods */
@end

#endif /* IGRegionTracker_h */
