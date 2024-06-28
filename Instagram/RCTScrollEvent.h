//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RCTScrollEvent_h
#define RCTScrollEvent_h
@import Foundation;

#include "RCTEvent-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface RCTScrollEvent : NSObject<RCTEvent> {
  /* instance variables */
  struct CGPoint { double x; double y; } _scrollViewContentOffset;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _scrollViewContentInset;
  struct CGSize { double width; double height; } _scrollViewContentSize;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _scrollViewFrame;
  double _scrollViewZoomScale;
  NSDictionary *_userData;
}

@property (readonly, nonatomic) NSNumber *viewTag;
@property (readonly, copy, nonatomic) NSString *eventName;
@optional
@property (readonly, nonatomic) unsigned short coalescingKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)moduleDotMethod;

/* instance methods */
- (id)initWithEventName:(id)name reactTag:(id)tag scrollViewContentOffset:(struct CGPoint { double x0; double x1; })offset scrollViewContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset scrollViewContentSize:(struct CGSize { double x0; double x1; })size scrollViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame scrollViewZoomScale:(double)scale userData:(id)data coalescingKey:(unsigned short)key;
- (id)init;
- (id)body;
- (BOOL)canCoalesce;
- (id)coalesceWithEvent:(id)event;
- (id)arguments;
@end

#endif /* RCTScrollEvent_h */
