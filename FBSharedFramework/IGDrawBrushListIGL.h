//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDrawBrushListIGL_h
#define IGDrawBrushListIGL_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSMutableDictionary, NSString;

@interface IGDrawBrushListIGL : NSObject<NSObject> {
  /* instance variables */
  NSMutableDictionary *_map;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCanvasRenderer:(id)renderer classes:(id)classes;
- (id)brushForBrushName:(id)name;
- (void)setBrushBlendMode:(unsigned long long)mode forBrushName:(id)name;
@end

#endif /* IGDrawBrushListIGL_h */
