//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAdsProductCorrectnessReelsViewpoint_h
#define IGAdsProductCorrectnessReelsViewpoint_h
@import Foundation;

#include "IGAdsProductCorrectnessDataManager.h"
#include "IGAdsProductCorrectnessViewpoint-Protocol.h"

@class FBViewpointAction, IGMedia, IGUserSession, NSString, UIView;

@interface IGAdsProductCorrectnessReelsViewpoint : NSObject<IGAdsProductCorrectnessViewpoint> {
  /* instance variables */
  IGMedia *_media;
  UIView *_view;
  NSString *_module;
  IGUserSession *_userSession;
  IGAdsProductCorrectnessDataManager *_dataManager;
  FBViewpointAction *_viewpointAction;
}

/* instance methods */
- (id)initWithUserSession:(id)session media:(id)media view:(id)view module:(id)module;
- (id)viewpointAction;
- (void)updateRenderingInfo;
- (void)updateRenderingInfoV2;
- (BOOL)shouldExcludeFromTraversal:(id)traversal;
- (void)exitViewpoint;
@end

#endif /* IGAdsProductCorrectnessReelsViewpoint_h */
