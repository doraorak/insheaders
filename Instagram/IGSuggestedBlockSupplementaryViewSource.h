//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSuggestedBlockSupplementaryViewSource_h
#define IGSuggestedBlockSupplementaryViewSource_h
@import Foundation;

#include "IGAttributedStringTextViewDelegate-Protocol.h"
#include "IGListSupplementaryViewSource-Protocol.h"
#include "_TtC32IGBlockingListIntentHandlerSwift35IGAttributedBlockListHeaderViewCell.h"

@class BKContext, IGListSectionController, IGUserSession, NSString;
@protocol IGListCollectionContext;

@interface IGSuggestedBlockSupplementaryViewSource : NSObject<IGAttributedStringTextViewDelegate, IGListSupplementaryViewSource> {
  /* instance variables */
  BKContext *_bkContext;
  _TtC32IGBlockingListIntentHandlerSwift35IGAttributedBlockListHeaderViewCell *_cell;
  NSString *_linkString;
}

@property (readonly, weak, nonatomic) IGListSectionController *sectionController;
@property (readonly, weak, nonatomic) NSObject<IGListCollectionContext> *collectionContext;
@property (readonly, weak, nonatomic) IGUserSession *userSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSectionController:(id)controller collectionContext:(id)context userSession:(id)session bkContext:(id)context;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)kind atIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)kind atIndex:(long long)index;
- (void)attributedStringTextView:(id)view didTapLink:(id)link;
@end

#endif /* IGSuggestedBlockSupplementaryViewSource_h */
