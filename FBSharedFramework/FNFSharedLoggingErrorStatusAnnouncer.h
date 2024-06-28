//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFSharedLoggingErrorStatusAnnouncer_h
#define FNFSharedLoggingErrorStatusAnnouncer_h
@import Foundation;

#include "FNFVideoLoggingErrorStateListener-Protocol.h"

@interface FNFSharedLoggingErrorStatusAnnouncer : NSObject

@property (weak, nonatomic) NSObject<FNFVideoLoggingErrorStateListener> *listener;

/* instance methods */
- (void)addErrorEvent:(struct TmediaplaybackerrormetadataType { id x0; id x1; id x2; id x3; id x4; id x5; struct optional<StructuredLogger::MediaplaybackerrortypeEnum> { union { char x0; int x1; } x0; BOOL x1; } x6; id x7; id x8; })event;
- (void)triggerRetryAttemptForError:(id)error errorType:(id)type;
- (void)playbackFailedWithError:(id)error;
@end

#endif /* FNFSharedLoggingErrorStatusAnnouncer_h */
