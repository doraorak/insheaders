//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDynamicOverlayModel_h
#define IGDynamicOverlayModel_h
@import Foundation;

#include "METADynamicOverlayModel.h"
#include "METADynamicOverlayImageProvider.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;
@protocol {map<int, METARegion, std::less<int>, std::allocator<std::pair<const int, METARegion>>>="__tree_"{__tree<std::__value_type<int, METARegion>, std::__map_value_compare<int, std::__value_type<int, METARegion>, std::less<int>>, std::allocator<std::__value_type<int, METARegion>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, METARegion>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, METARegion>, std::less<int>>>="__value_"Q}}};

@interface IGDynamicOverlayModel : METADynamicOverlayModel<NSCopying, NSSecureCoding> {
  /* instance variables */
  struct map<int, METARegion, std::less<int>, std::allocator<std::pair<const int, METARegion>>> { struct __tree<std::__value_type<int, METARegion>, std::__map_value_compare<int, std::__value_type<int, METARegion>, std::less<int>>, std::allocator<std::__value_type<int, METARegion>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, METARegion>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, METARegion>, std::less<int>>> { unsigned long long __value_; } __pair3_; } __tree_; } _regionCache;
}

@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) METADynamicOverlayImageProvider *imageProvider;
@property (readonly, copy, nonatomic) NSString *identifierForAnalytics;
@property (readonly, nonatomic) BOOL supportsHDR;
@property (readonly, nonatomic) BOOL supportsPTV;

/* class methods */
+ (void)load;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFixedRegion:(struct METARegion { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; })region imageProvider:(id)provider identifierForAnalytics:(id)analytics;
- (id)initWithFixedRegion:(struct METARegion { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; })region imageProvider:(id)provider identifierForAnalytics:(id)analytics supportsPTV:(BOOL)ptv;
- (id)initWithRegionCache:(const void *)cache imageProvider:(id)provider identifierForAnalytics:(id)analytics;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)copyByApplyingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)cloneWithExportPath:(id)path completionGroup:(id)group;
- (id)asyncCloneWithExportPath:(id)path shouldExportRemoteAssets:(BOOL)assets;
- (id)asyncRefresh;
- (void)cloneTo:(id)to completion:(id /* block */)completion;
- (struct METARegion { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; })regionForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
@end

#endif /* IGDynamicOverlayModel_h */
