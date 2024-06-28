//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGalleryUpwardFrameSetter_h
#define IGGalleryUpwardFrameSetter_h
@import Foundation;

#include "IGGalleryAttributesStore.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol {vector<IGGallerySectionLayout, std::allocator<IGGallerySectionLayout>>="__begin_"^{IGGallerySectionLayout}"__end_"^{IGGallerySectionLayout}"__end_cap_"{__compressed_pair<IGGallerySectionLayout *, std::allocator<IGGallerySectionLayout>>="__value_"^{IGGallerySectionLayout}}};

@interface IGGalleryUpwardFrameSetter : NSObject<NSObject> {
  /* instance variables */
  IGGalleryAttributesStore *_attributesStore;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

@property (readonly, nonatomic) void * layoutStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds attributesStore:(id)store;
- (void)computeLayout;
@end

#endif /* IGGalleryUpwardFrameSetter_h */
