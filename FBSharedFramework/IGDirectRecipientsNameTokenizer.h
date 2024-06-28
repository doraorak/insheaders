//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectRecipientsNameTokenizer_h
#define IGDirectRecipientsNameTokenizer_h
@import Foundation;

@class NSDictionary, NSMutableDictionary;

@interface IGDirectRecipientsNameTokenizer : NSObject {
  /* instance variables */
  NSMutableDictionary *_recipientTokensMap;
  NSMutableDictionary *_recipientByPrimaryUserPkMap;
  NSDictionary *_recipientRankingScoresMap;
}

/* instance methods */
- (id)init;
@end

#endif /* IGDirectRecipientsNameTokenizer_h */
