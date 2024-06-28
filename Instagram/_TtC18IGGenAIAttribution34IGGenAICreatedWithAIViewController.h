//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18IGGenAIAttribution34IGGenAICreatedWithAIViewController_h
#define _TtC18IGGenAIAttribution34IGGenAICreatedWithAIViewController_h
@import Foundation;

#include "IGViewController.h"

@interface _TtC18IGGenAIAttribution34IGGenAICreatedWithAIViewController : IGViewController { // (Swift)
  /* instance variables */
   analyticsModule;
   userSession;
   tableView;
   $__lazy_storage_$_imageView;
   $__lazy_storage_$_subtitleLabel;
   $__lazy_storage_$_stackLayout;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

/* instance methods */
- (id)initWithStoryPreview:(id)preview analyticsModule:(id)module userSession:(id)session;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersNavigationBarHidden;
- (id)initWithAnalyticsModule:(id)module performanceListener:(id)listener;
@end

#endif /* _TtC18IGGenAIAttribution34IGGenAICreatedWithAIViewController_h */