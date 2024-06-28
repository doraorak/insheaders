//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTabControlSegmentIcon_h
#define IGTabControlSegmentIcon_h
@import Foundation;

#include "IGTabControlSegment-Protocol.h"

@class NSString, UIImage;

@interface IGTabControlSegmentIcon : NSObject<IGTabControlSegment> {
  /* instance variables */
  UIImage *_icon;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIcon:(id)icon accessibilityLabel:(id)label;
- (id)title;
- (id)fallbackIcon;
@end

#endif /* IGTabControlSegmentIcon_h */
