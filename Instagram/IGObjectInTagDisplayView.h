//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGObjectInTagDisplayView_h
#define IGObjectInTagDisplayView_h
@import Foundation;

#include "UIView.h"
#include "IGObjectInTagDisplayDelegate-Protocol.h"
#include "NSObject-Protocol.h"

@class IGTag, IGUser, IGUserSession, NSArray, NSString;

@interface IGObjectInTagDisplayView : UIView<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _tagGroupsMutex;
  IGTag *_dynamicPositionTag;
  NSArray *_tagGroups;
}

@property (retain, nonatomic) IGUser *currentUser;
@property (retain, nonatomic) NSString *module;
@property (weak, nonatomic) NSObject<IGObjectInTagDisplayDelegate> *delegate;
@property (nonatomic) BOOL enableAutomatedLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_onTagsChanged:(id)changed;
- (BOOL)tagViewCanBeSelected:(id)selected;
- (void)tagViewWasSelected:(id)selected;
- (void)tagViewWasRemoved:(id)removed;
- (void)tagViewWillMove:(id)move;
- (void)tagViewDidMove:(id)move;
- (void)tagViewDidEndMove:(id)move;
@end

#endif /* IGObjectInTagDisplayView_h */
