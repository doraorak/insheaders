//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGReportingInterstitialPageViewController_h
#define IGReportingInterstitialPageViewController_h
@import Foundation;

#include "IGViewController.h"
#include "IGImageViewDelegate-Protocol.h"
#include "IGReportingInterstitialPageViewModel.h"

@class IGBottomButtonsView, IGCoreTextView, IGImageView, NSString, UILabel;

@interface IGReportingInterstitialPageViewController : IGViewController<IGImageViewDelegate> {
  /* instance variables */
  IGReportingInterstitialPageViewModel *_viewModel;
  IGImageView *_imageView;
  UILabel *_subtitleLabel;
  IGCoreTextView *_paragraphTextView;
  IGBottomButtonsView *_buttonsView;
}

@property (nonatomic) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session viewModel:(id)model performanceListener:(id)listener;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)imageView:(id)view didLoadImageFromSource:(unsigned long long)source networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateLoadingState:(id)state;
- (void)imageView:(id)view didFailToLoadImageWithError:(id)error networkRequestSummary:(id)summary;
- (void)imageView:(id)view didUpdateDownloadProgress:(double)progress;
- (void)imageView:(id)view willRequestImageWithURL:(id)url;
@end

#endif /* IGReportingInterstitialPageViewController_h */
