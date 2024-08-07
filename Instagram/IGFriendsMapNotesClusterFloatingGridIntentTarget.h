//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFriendsMapNotesClusterFloatingGridIntentTarget_h
#define IGFriendsMapNotesClusterFloatingGridIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "_TtP21IGFriendsMapProtocols34IGFriendsMapPresentingViewDelegate_-Protocol.h"
#include "_TtP23IGFriendsMapAnnotations34IGFriendsMapAnnotationViewDelegate_-Protocol.h"

@class NSArray, NSString;

@interface IGFriendsMapNotesClusterFloatingGridIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) NSArray *annotations;
@property (readonly, nonatomic) NSObject<_TtP23IGFriendsMapAnnotations34IGFriendsMapAnnotationViewDelegate_> *annotationViewDelegate;
@property (readonly, nonatomic) NSObject<_TtP21IGFriendsMapProtocols34IGFriendsMapPresentingViewDelegate_> *presentingViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnnotations:(id)annotations annotationViewDelegate:(id)delegate presentingViewDelegate:(id)delegate;
@end

#endif /* IGFriendsMapNotesClusterFloatingGridIntentTarget_h */
