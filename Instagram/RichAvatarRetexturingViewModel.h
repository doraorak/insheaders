//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef RichAvatarRetexturingViewModel_h
#define RichAvatarRetexturingViewModel_h
@import Foundation;

#include "AERetexturingPlatformEventsController.h"
#include "AvatarRetexturingStateListenerAnnouncer.h"
#include "FBRichMediaViewerAREffectProvider.h"
#include "RichAvatarViewEffectDescriptor-Protocol.h"

@class FBARPlatformEventsDataProviderConfiguration, UIView;
@protocol FBRMVCaptureManagerInterface;

@interface RichAvatarRetexturingViewModel : NSObject {
  /* instance variables */
  FBRichMediaViewerAREffectProvider *_arEffectProvider;
  NSObject<FBRMVCaptureManagerInterface> *_cameraCapture;
  NSObject<RichAvatarViewEffectDescriptor> *_effectDescriptor;
  long long _cameraPosition;
  FBARPlatformEventsDataProviderConfiguration *_platformEventsConfig;
}

@property (readonly, nonatomic) UIView *renderingView;
@property (readonly, nonatomic) AvatarRetexturingStateListenerAnnouncer *stateAnnouncer;
@property (readonly, nonatomic) AERetexturingPlatformEventsController *platformEventsController;

/* instance methods */
- (id)initWithArEffectProvider:(id)provider effectDescriptor:(id)descriptor;
- (void)startRenderingWithFrameSize:(struct CGSize { double x0; double x1; })size backgroundColorFor3DView:(id)dview completion:(id /* block */)completion;
@end

#endif /* RichAvatarRetexturingViewModel_h */
