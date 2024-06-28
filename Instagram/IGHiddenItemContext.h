//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHiddenItemContext_h
#define IGHiddenItemContext_h
@import Foundation;

#include "IGHiddenReasonListCellHeaderType.h"

@class IGUserSession, NSArray, NSString;

@interface IGHiddenItemContext : NSObject {
  /* instance variables */
  NSArray *_hiddenReasonList;
  id _hiddenItem;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, copy, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) BOOL wrappingIsEnabled;
@property (readonly, nonatomic) IGHiddenReasonListCellHeaderType *headerType;

/* instance methods */
- (id)initWithHiddenReasonList:(id)list hiddenItem:(id)item hiddenItemType:(unsigned long long)type wrappingIsEnabled:(BOOL)enabled userSession:(id)session analyticsModule:(id)module;
@end

#endif /* IGHiddenItemContext_h */
