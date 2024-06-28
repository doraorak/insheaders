//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialMidCardPreviewType_h
#define IGSundialMidCardPreviewType_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGSundialCompositionSharedProtocol-Protocol.h"

@class NSArray;

@interface IGSundialMidCardPreviewType : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSArray *_hscroll_ctaInfos;
  NSArray *_hscroll_videoClickedInfos;
  NSObject<IGSundialCompositionSharedProtocol> *_composition_composition;
}

/* class methods */
+ (id)compositionWithComposition:(id)composition;
+ (id)hscrollWithCtaInfos:(id)infos videoClickedInfos:(id)infos;
+ (id)media;

/* instance methods */
@end

#endif /* IGSundialMidCardPreviewType_h */