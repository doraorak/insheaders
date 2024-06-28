//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDropDownContainerView_h
#define IGDropDownContainerView_h
@import Foundation;

#include "UIView.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView, UITapGestureRecognizer, UIView;
@protocol IGDropDownContainerViewDelegate;

@interface IGDropDownContainerView : UIView<UITableViewDataSource, UITableViewDelegate> {
  /* instance variables */
  UIView *_dimmableContentOverlay;
  UITableView *_dropDownView;
  NSArray *_items;
  UITapGestureRecognizer *_overlayTapRecognizer;
  double _yOffset;
  BOOL _dropDownVisible;
}

@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) NSObject<IGDropDownContainerViewDelegate> *delegate;
@property (nonatomic) unsigned long long selectedItemIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithItems:(id)items contentView:(id)view yOffset:(double)offset;
- (void)layoutSubviews;
- (void)_handleOverlayTap:(id)tap;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
@end

#endif /* IGDropDownContainerView_h */