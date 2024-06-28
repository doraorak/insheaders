//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedPhotoPreviewController_h
#define IGFeedPhotoPreviewController_h
@import Foundation;

#include "IGFeedMediaPreviewContext.h"
#include "IGPostItemProtocol-Protocol.h"
#include "NSObject-Protocol.h"

@class IGImageView, NSString, UIView;

@interface IGFeedPhotoPreviewController : NSObject<NSObject> {
  /* instance variables */
  IGImageView *_imageView;
  NSObject<IGPostItemProtocol> *_photoPostItem;
  IGFeedMediaPreviewContext *_previewContext;
  NSString *_module;
}

@property (readonly, nonatomic) UIView *mediaView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)canPreviewFeedItem:(id)item;
+ (id)previewControllerWithMedia:(id)media previewContext:(id)context module:(id)module userSession:(id)session loggingExtras:(id)extras;

/* instance methods */
- (id)initWithPhotoPostItem:(id)item previewContext:(id)context module:(id)module;
@end

#endif /* IGFeedPhotoPreviewController_h */