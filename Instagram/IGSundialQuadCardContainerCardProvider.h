//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialQuadCardContainerCardProvider_h
#define IGSundialQuadCardContainerCardProvider_h
@import Foundation;

#include "NSObject-Protocol.h"

@class IGUserSession, NSArray, NSMutableOrderedSet, NSString;
@protocol IGSundialQuadCardContainerViewCardProviderDelegate;

@interface IGSundialQuadCardContainerCardProvider : NSObject<NSObject> {
  /* instance variables */
  IGUserSession *_userSession;
  NSString *_analyticsModule;
  NSMutableOrderedSet *_suggestedUsers;
  NSMutableOrderedSet *_featuredUsers;
  NSArray *_allSuggestions;
  long long _indexOfNextCard;
}

@property (weak, nonatomic) NSObject<IGSundialQuadCardContainerViewCardProviderDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session analyticsModule:(id)module;
- (id)nextCardForQuadCardView:(id)view;
@end

#endif /* IGSundialQuadCardContainerCardProvider_h */