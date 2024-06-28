//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGuidesGridSectionController_h
#define IGGuidesGridSectionController_h
@import Foundation;

#include "IGListGenericSectionController.h"
#include "IGScopedListener-Protocol.h"

@class IGShoppingNavigationAnalyticsContext, IGUserSession, NSString;
@protocol IGGuidesGridSectionControllerDelegate;

@interface IGGuidesGridSectionController : IGListGenericSectionController<IGScopedListener> {
  /* instance variables */
  IGUserSession *_userSession;
  IGShoppingNavigationAnalyticsContext *_navigationInfo;
  NSString *_shoppingSessionId;
  BOOL _shouldShowUserAttribution;
  BOOL _useSmallerTopInset;
}

@property (weak, nonatomic) NSObject<IGGuidesGridSectionControllerDelegate> *delegate;
@property (nonatomic) long long selectionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)placeholderSpecForObject:(id)object withContext:(id)context;
+ (id)defaultPlaceholderSpecWithContext:(id)context;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module shouldShowUserAttribution:(BOOL)attribution useSmallerTopInset:(BOOL)inset priorModule:(id)module priorSubmodule:(id)submodule shoppingSessionId:(id)id;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didSelectItemAtIndex:(long long)index;
- (void)didPublishGuide:(id)guide;
- (void)didDeleteGuide:(id)guide;
- (void)didUpdateGuide:(id)guide;
- (void)didReportGuide:(id)guide;
@end

#endif /* IGGuidesGridSectionController_h */