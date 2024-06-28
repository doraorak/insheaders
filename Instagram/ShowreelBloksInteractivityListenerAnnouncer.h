//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ShowreelBloksInteractivityListenerAnnouncer_h
#define ShowreelBloksInteractivityListenerAnnouncer_h
@import Foundation;

#include "FBAnnouncerBase.h"
#include "ShowreelBloksInteractivityListener-Protocol.h"

@class NSString;

@interface ShowreelBloksInteractivityListenerAnnouncer : FBAnnouncerBase<ShowreelBloksInteractivityListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)showreelBloksControllerDidTapViewAtPoint:(struct CGPoint { double x0; double x1; })point type:(id)type value:(id)value gestureRecognizer:(id)recognizer;
- (void)showreelBloksControllerDidDoubleTapViewAtPoint:(struct CGPoint { double x0; double x1; })point type:(id)type value:(id)value gestureRecognizer:(id)recognizer;
- (void)showreelBloksControllerDidLongPressViewAtPoint:(struct CGPoint { double x0; double x1; })point type:(id)type value:(id)value state:(id)state gestureRecognizer:(id)recognizer;
@end

#endif /* ShowreelBloksInteractivityListenerAnnouncer_h */
