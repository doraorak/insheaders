//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBPayTableViewModel_h
#define FBPayTableViewModel_h
@import Foundation;

#include "FBPayTableViewConfiguration.h"

@class NSArray, NSDictionary, UIBarButtonItem;
@protocol UITableViewController<FBPayUIBaseCoreTableViewControlling><FBPayUIBaseCoreTableViewLifeCycleDelegateProp;

@interface FBPayTableViewModel : NSObject

@property (weak, nonatomic) UITableViewController<FBPayUIBaseCoreTableViewControlling><FBPayUIBaseCoreTableViewLifeCycleDelegateProp> *viewController;
@property (readonly, nonatomic) FBPayTableViewConfiguration *configuration;
@property (readonly, nonatomic) NSDictionary *reuseIdentifierMap;
@property (retain, nonatomic) NSArray *sectionViewModels;
@property (readonly, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (copy, nonatomic) id /* block */ initialActionBlock;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)fetchTableViewData;
- (void)fetchMore;
- (BOOL)shouldFetchMore;
- (BOOL)reloadOnDisplay;
@end

#endif /* FBPayTableViewModel_h */