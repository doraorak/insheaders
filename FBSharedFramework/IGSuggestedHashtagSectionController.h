//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSuggestedHashtagSectionController_h
#define IGSuggestedHashtagSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGHashtagModel.h"

@class NSString;
@protocol IGSuggestedHashtagSectionControllerDelegate;

@interface IGSuggestedHashtagSectionController : IGListSectionController {
  /* instance variables */
  BOOL _supportChallengesInResults;
  BOOL _useBrandRefreshFontUsingGlobalScripts;
}

@property (weak, nonatomic) NSObject<IGSuggestedHashtagSectionControllerDelegate> *delegate;
@property (readonly, nonatomic) NSString *hashtag;
@property (readonly, nonatomic) IGHashtagModel *hashtagModel;

/* instance methods */
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
@end

#endif /* IGSuggestedHashtagSectionController_h */
