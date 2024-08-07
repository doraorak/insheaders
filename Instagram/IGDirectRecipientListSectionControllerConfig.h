//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientListSectionControllerConfig_h
#define IGDirectRecipientListSectionControllerConfig_h
@import Foundation;

#include "IGImageTitleSectionControllerDelegate-Protocol.h"
#include "IGPostItemProtocol-Protocol.h"
#include "IGSearchBarDelegate-Protocol.h"
#include "IGTextViewSectionControllerDelegate-Protocol.h"

@class IGMedia, IGShareToStoryValue, IGUserSession, NSString, UIViewController;
@protocol IGContentNotesShareSheetRecipientListListSectionControllerDelegate, IGDirectSearchInformModuleSectionControllerDelegate, IGDirectSupershareV3AddToSpotlightSectionControllerDelegate, IGDirectSupershareV3ContentNotesAddCellSectionControllerDelegate, IGDirectSupershareV3CreateGroupSectionControllerDelegate, IGSearchBarRightAccessoryButtonDelegate, IGStoryItemType><IGUnitItemInformationProviding, UIViewController<IGDirectRecipientListViewControllerHandling;

@interface IGDirectRecipientListSectionControllerConfig : NSObject

@property (readonly, nonatomic) UIViewController<IGDirectRecipientListViewControllerHandling> *recipientListVC;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) UIViewController *hostingViewController;
@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) IGShareToStoryValue *reshareToStoryValue;
@property (readonly, nonatomic) NSString *entryPoint;
@property (readonly, nonatomic) NSObject<IGPostItemProtocol> *selectedPost;
@property (readonly, nonatomic) IGMedia *media;
@property (readonly, nonatomic) NSObject<IGStoryItemType><IGUnitItemInformationProviding> *currentStoryItem;
@property (readonly, nonatomic) BOOL isGridViewEligible;
@property (readonly, nonatomic) NSObject<IGSearchBarRightAccessoryButtonDelegate> *searchBarRightAccesoryButtonDelegate;
@property (readonly, nonatomic) NSObject<IGSearchBarDelegate> *searchBarDelegate;
@property (readonly, nonatomic) NSObject<IGImageTitleSectionControllerDelegate> *imageTitleSectionControllerDelegate;
@property (readonly, nonatomic) NSObject<IGDirectSearchInformModuleSectionControllerDelegate> *directSearchInformModuleSectionControllerDelegate;
@property (readonly, nonatomic) NSObject<IGTextViewSectionControllerDelegate> *textViewSectionControllerDelegate;
@property (readonly, nonatomic) NSObject<IGDirectSupershareV3ContentNotesAddCellSectionControllerDelegate> *contentNotesAddCellSectionControllerDelegate;
@property (readonly, nonatomic) NSObject<IGDirectSupershareV3AddToSpotlightSectionControllerDelegate> *addToSpotlightCellSectionControllerDelegate;
@property (readonly, nonatomic) NSObject<IGContentNotesShareSheetRecipientListListSectionControllerDelegate> *contentNotesShareSheetRecipientListListSectionControllerDelegate;
@property (readonly, nonatomic) NSObject<IGDirectSupershareV3CreateGroupSectionControllerDelegate> *broadcastRowSectionControllerDelegate;

/* instance methods */
- (id)initWithRecipientListVC:(id)vc userSession:(id)session hostingViewController:(id)controller analyticsModule:(id)module reshareToStoryValue:(id)value entryPoint:(id)point selectedPost:(id)post media:(id)media currentStoryItem:(id)item isGridViewEligible:(BOOL)eligible searchBarRightAccesoryButtonDelegate:(id)delegate searchBarDelegate:(id)delegate imageTitleSectionControllerDelegate:(id)delegate directSearchInformModuleSectionControllerDelegate:(id)delegate textViewSectionControllerDelegate:(id)delegate contentNotesAddCellSectionControllerDelegate:(id)delegate addToSpotlightCellSectionControllerDelegate:(id)delegate contentNotesShareSheetRecipientListListSectionControllerDelegate:(id)delegate broadcastRowSectionControllerDelegate:(id)delegate;
@end

#endif /* IGDirectRecipientListSectionControllerConfig_h */
