//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC29IGDirectAgentsViewControllers30IGDirectAgentsFiltersViewModel_h
#define _TtC29IGDirectAgentsViewControllers30IGDirectAgentsFiltersViewModel_h
@import Foundation;

#include "IGDSSegmentedPillBarViewModel-Protocol.h"

@class NSArray;

@interface _TtC29IGDirectAgentsViewControllers30IGDirectAgentsFiltersViewModel : NSObject<IGDSSegmentedPillBarViewModel> // (Swift)

@property (nonatomic, readonly) NSArray *pills;
@property (nonatomic, readonly) long long selectionMode;
@property (nonatomic, readonly) BOOL scrollEnabled;
@property (nonatomic, readonly) long long stackJustification;
@property (nonatomic, readonly) BOOL isLoading;
@property (nonatomic, readonly) BOOL expandPillsToFillWidth;
@property (nonatomic, readonly) BOOL disableScrollPillToBarLeftEdge;

/* instance methods */
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (id)init;
@end

#endif /* _TtC29IGDirectAgentsViewControllers30IGDirectAgentsFiltersViewModel_h */
