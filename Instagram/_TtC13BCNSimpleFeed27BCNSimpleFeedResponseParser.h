//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC13BCNSimpleFeed27BCNSimpleFeedResponseParser_h
#define _TtC13BCNSimpleFeed27BCNSimpleFeedResponseParser_h
@import Foundation;

#include "IGNetworkParser-Protocol.h"

@interface _TtC13BCNSimpleFeed27BCNSimpleFeedResponseParser : NSObject<IGNetworkParser> { // (Swift)
  /* instance variables */
   objectStores;
}

/* instance methods */
- (id)parsedObjectFromResponse:(id)response;
- (id)init;
@end

#endif /* _TtC13BCNSimpleFeed27BCNSimpleFeedResponseParser_h */