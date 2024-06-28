//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectInboxSearchAIAgentsPillsContainerCell_h
#define IGDirectInboxSearchAIAgentsPillsContainerCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "IGDSSegmentedPillBarViewDelegate-Protocol.h"
#include "IGDSSegmentedPillCloudViewDelegate-Protocol.h"
#include "IGDirectInboxSearchAIAgentsPillsSectionViewModel.h"

@class IGDSSegmentedPillBarView, IGDSSegmentedPillCloudView, IGUserSession, NSArray, NSString;

@interface IGDirectInboxSearchAIAgentsPillsContainerCell : UICollectionViewCell<IGDSSegmentedPillBarViewDelegate, IGDSSegmentedPillCloudViewDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
  IGDSSegmentedPillBarView *_pillBarView;
  IGDirectInboxSearchAIAgentsPillsSectionViewModel *_sectionViewModel;
  NSArray *_suggestedPrompts;
  BOOL _cloudViewEnabled;
  IGDSSegmentedPillCloudView *_pillCloudView;
  NSArray *_promptsForCloudView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)layoutSubviews;
- (void)_splitAndSetupSegmentedPillCloudViewWithPrompts;
- (BOOL)segmentedPillBar:(id)bar pillAtIndex:(unsigned long long)index didUpdateImpressionStateWithContext:(id)context;
- (void)segmentedPillBar:(id)bar didTapPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didLongPressPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar willDeselectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didDeselectPillAtIndex:(unsigned long long)index;
- (BOOL)segmentedPillBar:(id)bar shouldSelectPillAtIndex:(unsigned long long)index;
- (BOOL)segmentedPillBar:(id)bar shouldDeselectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar willSelectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillBar:(id)bar didSelectPillAtIndex:(unsigned long long)index;
- (void)segmentedPillCloud:(id)cloud didTapPillAtRowIndex:(unsigned long long)index pillIndex:(unsigned long long)index;
- (BOOL)segmentedPillCloud:(id)cloud didReceiveImpressionForPillAtRowIndex:(unsigned long long)index pillIndex:(unsigned long long)index context:(id)context;
@end

#endif /* IGDirectInboxSearchAIAgentsPillsContainerCell_h */
