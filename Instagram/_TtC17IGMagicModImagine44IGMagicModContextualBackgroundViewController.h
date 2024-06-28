//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC17IGMagicModImagine44IGMagicModContextualBackgroundViewController_h
#define _TtC17IGMagicModImagine44IGMagicModContextualBackgroundViewController_h
@import Foundation;

#include "_$s18IGMagicModSharedUI0aB32ToolSingleMediaPreviewControllerCN.h"

@interface _TtC17IGMagicModImagine44IGMagicModContextualBackgroundViewController : _$s18IGMagicModSharedUI0aB32ToolSingleMediaPreviewControllerCN { // (Swift)
  /* instance variables */
   state;
   $__lazy_storage_$_contextualBackgroundGenerator;
}

/* instance methods */
- (void)viewDidLoad;
- (void)magicModHeaderViewDidTapNextButton:(id)button;
- (void)assetsPreviewFooterViewDidClickRetry:(id)retry;
- (id)initWithUserSession:(id)session editingAssets:(id)assets edits:(id)edits mediaCompositionSize:(struct CGSize { double x0; double x1; })size mediaTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform entrypoint:(long long)entrypoint analyticsModule:(id)module;
@end

#endif /* _TtC17IGMagicModImagine44IGMagicModContextualBackgroundViewController_h */
