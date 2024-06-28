//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioTrendingListTrackCell_h
#define IGAudioTrendingListTrackCell_h
@import Foundation;

#include "IGBouncyCollectionViewCell.h"
#include "IGAudioAlbumArtPlayPauseButton.h"
#include "IGAudioBrowserArtistNameLabel.h"
#include "IGAudioExplicitLabel.h"
#include "IGAudioTrendingListTrackCellDelegate-Protocol.h"
#include "IGPillButton.h"
#include "IGTapButton.h"

@class NSString, NSURL, UILabel;

@interface IGAudioTrendingListTrackCell : IGBouncyCollectionViewCell {
  /* instance variables */
  UILabel *_trendingRankLabel;
  IGAudioAlbumArtPlayPauseButton *_albumArtPlayPauseButton;
  IGTapButton *_ctaButton;
  IGAudioExplicitLabel *_songTitleLabel;
  IGAudioBrowserArtistNameLabel *_artistAndVideoCountLabel;
  UILabel *_partialAttributionLabel;
  IGPillButton *_descriptionPill;
  unsigned long long _cellCTAType;
}

@property (weak, nonatomic) NSObject<IGAudioTrendingListTrackCellDelegate> *delegate;
@property (copy, nonatomic) NSString *trendingRankString;
@property (retain, nonatomic) NSURL *albumArtURL;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *videoCountString;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) BOOL isBookmarked;
@property (nonatomic) BOOL isTrending;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL loading;
@property (nonatomic) double playbackProgress;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (BOOL)isPlaying;
- (BOOL)isLoading;
- (void)_didTapCTAButton;
- (void)_didTapPlayPauseButton;
@end

#endif /* IGAudioTrendingListTrackCell_h */
