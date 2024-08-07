//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTVCardMetadataViewModel_h
#define IGTVCardMetadataViewModel_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "IGTVCardLiveVideoMetadataViewModel.h"
#include "IGTVCardVideoMetadataViewModel.h"

@interface IGTVCardMetadataViewModel : FBIvarBasedEqualityObject {
  /* instance variables */
  unsigned long long _subtype;
  IGTVCardVideoMetadataViewModel *_media_videoViewModel;
  IGTVCardLiveVideoMetadataViewModel *_broadcast_liveVideoViewModel;
}

/* class methods */
+ (id)broadcastWithLiveVideoViewModel:(id)model;
+ (id)mediaWithVideoViewModel:(id)model;

/* instance methods */
@end

#endif /* IGTVCardMetadataViewModel_h */
