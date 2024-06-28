//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectGifCategoryFilterClient_h
#define IGDirectGifCategoryFilterClient_h
@import Foundation;

#include "IGDirectGifCategoryService.h"
#include "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;
@protocol IGContentFilterDictionaryProtocol, IGContentFilterManagerProtocol;

@interface IGDirectGifCategoryFilterClient : NSObject<NSObject> {
  /* instance variables */
  NSObject<IGContentFilterManagerProtocol> *_contentFilterManager;
  NSObject<IGContentFilterDictionaryProtocol> *_dictionary;
  IGDirectGifCategoryService *_gifCategoryService;
  NSArray *_pendingCategoryListUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *clientId;
@property (readonly, nonatomic) NSArray *locales;

/* instance methods */
- (id)initWithContentFilterManager:(id)manager gifCategoryService:(id)service;
- (void)dealloc;
- (void)onDictionaryReady:(id)ready;
- (id)findAllFilteredMatchesForInput:(id)input;
- (void)didUpdateCategoryMap:(id)map;
@end

#endif /* IGDirectGifCategoryFilterClient_h */
