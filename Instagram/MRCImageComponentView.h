//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MRCImageComponentView_h
#define MRCImageComponentView_h
@import Foundation;

#include "FBWebImageView.h"
#include "FBWebImageViewListener-Protocol.h"
#include "MRCImagePlaceholderView.h"
#include "MRCImageProgressRing.h"

@class NSString, UIView;
@protocol MRCImageSpecifierProtocol;

@interface MRCImageComponentView : FBWebImageView<FBWebImageViewListener> {
  /* instance variables */
  MRCImageProgressRing *_progressRing;
  MRCImagePlaceholderView *_imagePlaceholderView;
  UIView *_colorPlaceholderView;
}

@property (retain, nonatomic) NSObject<MRCImageSpecifierProtocol> *componentSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)traitCollectionDidChange:(id)change;
- (void)cancelDownload;
- (void)_configureColorPlaceholderView:(BOOL)view;
@end

#endif /* MRCImageComponentView_h */