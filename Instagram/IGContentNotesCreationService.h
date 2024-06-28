//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGContentNotesCreationService_h
#define IGContentNotesCreationService_h
@import Foundation;

#include "IGDirectNotesCreationService-Protocol.h"

@class IGContentNotesDefaultLoggingInfo, IGUserSession, NSString;

@interface IGContentNotesCreationService : NSObject<IGDirectNotesCreationService> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_mediaID;
  long long _eventSource;
  IGContentNotesDefaultLoggingInfo *_defaultLoggingInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session mediaID:(id)id eventSource:(long long)source defaultLoggingInfo:(id)info;
- (void)createNote:(id)note completion:(id /* block */)completion;
@end

#endif /* IGContentNotesCreationService_h */
