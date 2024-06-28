//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MAISKStoreProductViewController_Legacy_h
#define MAISKStoreProductViewController_Legacy_h
@import Foundation;

#include "SKStoreProductViewController.h"
#include "MAIAnalytics.h"
#include "MAIAppStoreLoadStatus.h"
#include "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSString;
@protocol MAISKStoreProductViewControllerDelegate_Legacy;

@interface MAISKStoreProductViewController_Legacy : SKStoreProductViewController<SKStoreProductViewControllerDelegate> {
  /* instance variables */
  BOOL _isPreloadingEnabled;
  double _loadStartTime;
  MAIAnalytics *_analytics;
}

@property (readonly, nonatomic) unsigned long long orientationMask;
@property (readonly, nonatomic) MAIAppStoreLoadStatus *loadStatus;
@property (readonly, copy, nonatomic) NSString *iTunesIdentifier;
@property (readonly, copy, nonatomic) NSString *productPageID;
@property (readonly, copy, nonatomic) NSString *sessionID;
@property (readonly, copy, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) BOOL didProductViewControllerFinish;
@property (readonly, nonatomic) unsigned long long presentingSurface;
@property (weak, nonatomic) NSObject<MAISKStoreProductViewControllerDelegate_Legacy> *maiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithAnalyticsModule:(id)module presentingSurface:(unsigned long long)surface;
- (id)initWithOrientationMask:(unsigned long long)mask analyticsModule:(id)module presentingSurface:(unsigned long long)surface;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)prefersStatusBarHidden;
- (void)loadProductWithParameters:(id)parameters completionBlock:(id /* block */)block;
- (void)setPreloadingEnabledFlag:(BOOL)flag;
- (void)productViewControllerDidFinish:(id)finish;
- (void)_handleProductDidFinish:(id)finish;
- (id)_presentingSurfaceName;
@end

#endif /* MAISKStoreProductViewController_Legacy_h */