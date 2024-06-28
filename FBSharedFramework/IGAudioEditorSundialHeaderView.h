//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioEditorSundialHeaderView_h
#define IGAudioEditorSundialHeaderView_h
@import Foundation;

#include "IGPassthroughView.h"
#include "IGAudioEditorTrackDetailsButton.h"
#include "IGStackLayout.h"
#include "IGStoryColorPaletteWheel.h"
#include "IGStoryTextEmphasisToggleButton.h"
#include "IGTapButton.h"

@class NSString;

@interface IGAudioEditorSundialHeaderView : IGPassthroughView {
  /* instance variables */
  long long _style;
  IGStackLayout *_centerControlsStack;
  BOOL _hideCTALabel;
  IGTapButton *_deleteButton;
  IGAudioEditorTrackDetailsButton *_storySongDetailsButton;
}

@property (readonly, nonatomic) IGTapButton *cancelButton;
@property (readonly, nonatomic) IGStoryColorPaletteWheel *colorPaletteToggleButton;
@property (readonly, nonatomic) IGStoryTextEmphasisToggleButton *textEmphasisToggleButton;
@property (readonly, nonatomic) IGTapButton *doneButton;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *songTitle;
@property (nonatomic) BOOL isExplicit;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)initWithStyle:(long long)style userSession:(id)session;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* IGAudioEditorSundialHeaderView_h */