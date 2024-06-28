//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAccountRecoveryTriageTableController_h
#define IGAccountRecoveryTriageTableController_h
@import Foundation;

#include "IGAccountRecoveryTriageContext.h"
#include "IGAccountRecoveryTriageTableViewDelegate-Protocol.h"

@class IGTableLayoutSpec, NSString;
@protocol IGAccountRecoveryTriageTableControllerDelegate;

@interface IGAccountRecoveryTriageTableController : NSObject<IGAccountRecoveryTriageTableViewDelegate> {
  /* instance variables */
  IGAccountRecoveryTriageContext *_context;
  IGTableLayoutSpec *_tableLayoutSpec;
  long long _selectedRow;
}

@property (weak, nonatomic) NSObject<IGAccountRecoveryTriageTableControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context;
- (double)heightForAccountRecoveryTriageTableView:(id)view;
- (long long)accountRecoveryTypeForTableView:(id)view;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
@end

#endif /* IGAccountRecoveryTriageTableController_h */