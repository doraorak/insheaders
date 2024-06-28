//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTaggingHeaderContainerView_h
#define IGTaggingHeaderContainerView_h
@import Foundation;

#include "UIView.h"
#include "IGTagPeopleAddCollaboratorHeaderView.h"
#include "IGVideoTaggingAddItemHeaderView.h"
#include "IGVideoTaggingTagInfoHeaderView.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGTaggingHeaderContainerViewDelegate;

@interface IGTaggingHeaderContainerView : UIView<NSObject> {
  /* instance variables */
  IGTagPeopleAddCollaboratorHeaderView *_tagPeopleAddCollaboratorHeaderView;
  IGVideoTaggingTagInfoHeaderView *_tagInfoHeaderView;
  IGVideoTaggingAddItemHeaderView *_addItemHeaderView;
  unsigned long long _headerViewType;
  BOOL _hasInvitedCoauthor;
}

@property (weak, nonatomic) NSObject<IGTaggingHeaderContainerViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame mediaType:(long long)type;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)configureWithViewModel:(id)model;
- (void)_configureTagInfoViewForHeaderViewTagInfoType:(long long)type tagLimit:(long long)limit hidden:(BOOL)hidden;
- (void)_configureHeaderViewType:(unsigned long long)type taggingViewType:(unsigned long long)type hasInvitedCoauthor:(BOOL)coauthor tagLimit:(long long)limit;
- (void)tagPeopleAddCollaboratorHeaderViewDidTapTagPeople:(id)people;
- (void)tagPeopleAddCollaboratorHeaderViewDidTapAddCollaborator:(id)collaborator;
- (void)addItemHeaderViewDidStartAddingTag:(id)tag;
@end

#endif /* IGTaggingHeaderContainerView_h */
