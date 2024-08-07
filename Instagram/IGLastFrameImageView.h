//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLastFrameImageView_h
#define IGLastFrameImageView_h
@import Foundation;

#include "UIImageView.h"
#include "IGActivityIndicatingViewType-Protocol.h"

@class IGActivityIndicationState, NSString;

@interface IGLastFrameImageView : UIImageView<IGActivityIndicatingViewType> {
  /* instance variables */
  IGActivityIndicationState *_activityIndicationState;
}

@property (readonly, nonatomic) IGActivityIndicationState *ig_activityIndicationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
@end

#endif /* IGLastFrameImageView_h */
