//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGWatchTimeDebugOverlayView_h
#define IGWatchTimeDebugOverlayView_h
@import Foundation;

#include "UIView.h"
#include "IGScopedListener-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIScrollView, UITableView, UIView;

@interface IGWatchTimeDebugOverlayView : UIView<UITableViewDataSource, UITableViewDelegate, IGScopedListener> {
  /* instance variables */
  UIView *_backgroundView;
  UIScrollView *_containerScrollView;
  UITableView *_watchTimeEventsTableView;
  UITableView *_clockTimeTableView;
  UITableView *_mediaConsumedTableView;
  NSString *_videoPk;
  NSArray *_watchTimeEvents;
  NSArray *_clockTimeMetrics;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (void)didLogClockTime:(id)time;
- (void)didLogWatchTimeEvent:(id)event;
@end

#endif /* IGWatchTimeDebugOverlayView_h */
