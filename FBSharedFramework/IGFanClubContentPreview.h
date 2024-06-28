//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFanClubContentPreview_h
#define IGFanClubContentPreview_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"

@class NSString;

@interface IGFanClubContentPreview : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  NSString *_media_graphQLId;
  NSString *_media_displayURLString;
  NSString *_media_instagramMediaId;
}

/* class methods */
+ (id)mediaWithGraphQLId:(id)qlid displayURLString:(id)urlstring instagramMediaId:(id)id;
+ (id)placeholder;

/* instance methods */
@end

#endif /* IGFanClubContentPreview_h */
