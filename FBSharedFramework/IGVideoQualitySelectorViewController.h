//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGVideoQualitySelectorViewController_h
#define IGVideoQualitySelectorViewController_h
@import Foundation;

#include "IGGroupedTableViewController.h"
#include "IGMedia.h"
#include "IGUserSession.h"

@class NSArray;

@interface IGVideoQualitySelectorViewController : IGGroupedTableViewController {
  /* instance variables */
  NSArray *_qualities;
  IGUserSession *_userSession;
  IGMedia *_media;
}

/* instance methods */
- (id)initWithUserSession:(id)session media:(id)media;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)analyticsModule;
@end

#endif /* IGVideoQualitySelectorViewController_h */
