//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioEditorStoryHeaderView_h
#define IGAudioEditorStoryHeaderView_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGAudioEditorTrackDetailsButton.h"
#include "IGTapButton.h"

@class NSString;

@interface IGAudioEditorStoryHeaderView : IGPassthroughView {
  /* instance variables */
  IGTapButton *_deleteButton;
}

@property (retain, nonatomic) IGAudioEditorTrackDetailsButton *songDetailsButton;
@property (readonly, nonatomic) IGTapButton *cancelButton;
@property (readonly, nonatomic) IGTapButton *doneButton;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *songTitle;
@property (nonatomic) BOOL isExplicit;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGAudioEditorStoryHeaderView_h */
