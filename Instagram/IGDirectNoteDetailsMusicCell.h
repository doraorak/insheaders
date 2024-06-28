//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectNoteDetailsMusicCell_h
#define IGDirectNoteDetailsMusicCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDirectInboxMusicNotesView.h"

@interface IGDirectNoteDetailsMusicCell : UICollectionViewCell {
  /* instance variables */
  IGDirectInboxMusicNotesView *_musicView;
}

/* instance methods */
- (void)configureWithViewModel:(id)model userSession:(id)session;
- (void)layoutSubviews;
@end

#endif /* IGDirectNoteDetailsMusicCell_h */
