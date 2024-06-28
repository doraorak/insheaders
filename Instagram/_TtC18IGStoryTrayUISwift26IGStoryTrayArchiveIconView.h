//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18IGStoryTrayUISwift26IGStoryTrayArchiveIconView_h
#define _TtC18IGStoryTrayUISwift26IGStoryTrayArchiveIconView_h
@import Foundation;

#include "IGBaseView.h"
#include "_TtP18IGStoryTrayUISwift29IGStoryTrayHeaderIconProtocol_-Protocol.h"
#include "_TtP18IGStoryTrayUISwift37IGStoryTrayHeaderIconProtocolDelegate_-Protocol.h"

@interface _TtC18IGStoryTrayUISwift26IGStoryTrayArchiveIconView : IGBaseView<_TtP18IGStoryTrayUISwift29IGStoryTrayHeaderIconProtocol_> { // (Swift)
  /* instance variables */
   contentView;
   clockContainerLayer;
   handsLayer;
   circleBorderLayer;
   circleProgressLayer;
   hasQueuedPopAnimation;
}

@property (nonatomic, weak) NSObject<_TtP18IGStoryTrayUISwift37IGStoryTrayHeaderIconProtocolDelegate_> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _TtC18IGStoryTrayUISwift26IGStoryTrayArchiveIconView_h */
