//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioBrowserTrackCell_h
#define IGAudioBrowserTrackCell_h
@import Foundation;

#include "IGBouncyCollectionViewCell.h"
#include "IGAudioBrowserTrackCellContentView.h"
#include "IGAudioSaveButton.h"
#include "IGDirectionalPanGestureRecognizer.h"

@class NSString, NSURL;
@protocol IGStoryMusicBrowserSongCellDelegate;

@interface IGAudioBrowserTrackCell : IGBouncyCollectionViewCell {
  /* instance variables */
  IGAudioBrowserTrackCellContentView *_audioContentView;
  IGDirectionalPanGestureRecognizer *_panGesture;
  double _horizontalVelocity;
  BOOL _isLegallyRestricted;
  BOOL _bookmarkEnabled;
  BOOL _albumArtPlayPauseEnabled;
  NSString *_featuredText;
  double _expandedPercent;
  IGAudioSaveButton *_bookmarkButton;
}

@property (nonatomic) BOOL isEditing;
@property (weak, nonatomic) NSObject<IGStoryMusicBrowserSongCellDelegate> *delegate;
@property (retain, nonatomic) NSURL *albumArtURL;
@property (copy, nonatomic) NSString *songTitle;
@property (copy, nonatomic) NSString *artistName;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL isDisabled;
@property (readonly, nonatomic) BOOL isExpanded;
@property (nonatomic) long long theme;
@property (copy, nonatomic) NSString *audioClusterId;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *videoCountString;
@property (nonatomic) double durationInSeconds;
@property (nonatomic) double playbackProgress;
@property (nonatomic) BOOL bookmarked;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (BOOL)isPlaying;
- (void)_didTapPlayPauseButton:(id)button;
- (void)_didTapBookmarkButton:(id)button;
- (void)_didTapCameraButton:(id)button;
- (void)_didPan:(id)pan;
- (void)_cellBeganEditing:(id)editing;
@end

#endif /* IGAudioBrowserTrackCell_h */
