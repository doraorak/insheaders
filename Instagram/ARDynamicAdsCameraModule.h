//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ARDynamicAdsCameraModule_h
#define ARDynamicAdsCameraModule_h
@import Foundation;

#include "ARBaseCameraModule.h"
#include "ARAdModel.h"
#include "ARAdsLink.h"
#include "ARAdsProductModel.h"
#include "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol ARAdsFetcherProtocol, ARDynamicAdsPresenterProtocol;

@interface ARDynamicAdsCameraModule : ARBaseCameraModule<NSObject> {
  /* instance variables */
  ARAdsLink *_link;
  ARAdModel *_model;
  NSArray *_cameraTrayItems;
  ARAdsProductModel *_selectedProduct;
  NSObject<ARDynamicAdsPresenterProtocol> *_presenter;
  NSObject<ARAdsFetcherProtocol> *_adInfoFetcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLink:(id)link presenter:(id)presenter config:(id)config logger:(id)logger adInfoFetcher:(id)fetcher cameraCaptureModule:(id)module arAdsLogger:(id)logger;
- (void)onViewDidLoad;
- (void)loadData;
- (void)nativeUIConfigureCameraTrayWithItems:(id)items;
- (void)nativeUISelectCameraTrayIndex:(unsigned long long)index;
- (void)nativeUIShowCameraTray;
- (void)nativeUIHideCameraTray;
- (void)onDidTapCTAButton:(id)ctabutton;
- (void)cameraTrayDidSelectItemAtIndex:(long long)index;
- (void)cameraTrayDidTapItemAtIndex:(long long)index;
- (void)platformEventsServiceForEffectDescriptor:(id)descriptor didReceiveEventWithData:(id)data;
@end

#endif /* ARDynamicAdsCameraModule_h */