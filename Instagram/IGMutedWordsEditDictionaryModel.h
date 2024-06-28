//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMutedWordsEditDictionaryModel_h
#define IGMutedWordsEditDictionaryModel_h
@import Foundation;

#include "IGMutedWordsEditDictionaryLogger.h"
#include "NSObject-Protocol.h"

@class IGMessageFilterLogger, IGUserSession, NSMutableArray, NSMutableSet, NSOrderedSet, NSString;
@protocol IGMessageFilterClientProtocol, IGMessageFilterCustomDictionaryProtocol, IGMutedWordsEditDictionaryModelDelegate;

@interface IGMutedWordsEditDictionaryModel : NSObject<NSObject> {
  /* instance variables */
  BOOL _loaded;
  NSMutableArray *_pending;
  NSOrderedSet *_stored;
  NSMutableSet *_unblocked;
  NSObject<IGMessageFilterClientProtocol> *_client;
  NSObject<IGMessageFilterCustomDictionaryProtocol> *_dictionary;
}

@property (weak, nonatomic) NSObject<IGMutedWordsEditDictionaryModelDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL containsStoredPatterns;
@property (readonly, nonatomic) BOOL fullyLoaded;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly, nonatomic) BOOL updateFilterOnCommit;
@property (readonly, nonatomic) long long rowCount;
@property (readonly, nonatomic) IGMessageFilterLogger *messageFilterLogger;
@property (readonly, nonatomic) IGMutedWordsEditDictionaryLogger *mutedWordsLogger;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly, nonatomic) long long type;

/* instance methods */
- (id)initWithUserSession:(id)session type:(long long)type;
- (void)dealloc;
- (void)shouldUpdateFilterOnCommit:(BOOL)commit;
- (void)loadPatterns;
- (void)fetchCommaSeparatedRepresentationWithCompletion:(id /* block */)completion;
- (id)patternAtIndex:(long long)index;
- (void)addPatterns:(id)patterns;
- (void)deletePatternAtIndex:(long long)index;
- (void)updatePatternAtIndex:(long long)index withPattern:(id)pattern;
- (void)commitUpdate;
- (void)preload;
- (void)clientDidUpdateCustomDictionary:(id)dictionary;
@end

#endif /* IGMutedWordsEditDictionaryModel_h */
