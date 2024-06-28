//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectLinkMessageCell_h
#define IGDirectLinkMessageCell_h
@import Foundation;

#include "IGDirectMessageCell.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGDirectLinkContentView.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface IGDirectLinkMessageCell : IGDirectMessageCell<NSObject> {
  /* instance variables */
  struct CGSize { double width; double height; } _linkContentSize;
  IGDirectLinkContentView *_linkContentView;
}

@property (weak, nonatomic) NSObject<IGCoreTextLinkHandler> *linkHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)needsDoubleTapGesture;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory launcherSet:(id)set;
- (struct CGSize { double x0; double x1; })messageContentSize;
- (BOOL)shouldHandleTouch:(id)touch gestureRecognizer:(id)recognizer;
- (void)linkContentViewDidDoubleTap:(id)tap;
@end

#endif /* IGDirectLinkMessageCell_h */
