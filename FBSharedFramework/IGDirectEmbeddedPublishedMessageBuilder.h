//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectEmbeddedPublishedMessageBuilder_h
#define IGDirectEmbeddedPublishedMessageBuilder_h
@import Foundation;

#include "IGDirectForwardMetadata.h"
#include "IGDirectPowerupsMetadata.h"
#include "IGDirectPublishedMessageContent.h"
#include "IGDirectPublishedMessageMetadata.h"

@class NSDictionary;

@interface IGDirectEmbeddedPublishedMessageBuilder : NSObject {
  /* instance variables */
  IGDirectPublishedMessageMetadata *_metadata;
  IGDirectPublishedMessageContent *_content;
  IGDirectForwardMetadata *_forwardMetadata;
  IGDirectPowerupsMetadata *_powerupsMetadata;
  NSDictionary *_mediaInterventions;
  BOOL _isInstamadillo;
  BOOL _isInstamadilloTTLC;
}

/* class methods */
+ (id)directEmbeddedPublishedMessageFromExistingDirectEmbeddedPublishedMessage:(id)message;

/* instance methods */
- (id)initWithMetadata:(id)metadata;
- (id)build;
- (id)withMetadata:(id)metadata;
- (id)withContent:(id)content;
- (id)withForwardMetadata:(id)metadata;
- (id)withPowerupsMetadata:(id)metadata;
- (id)withMediaInterventions:(id)interventions;
- (id)withIsInstamadillo:(BOOL)instamadillo;
- (id)withIsInstamadilloTTLC:(BOOL)ttlc;
@end

#endif /* IGDirectEmbeddedPublishedMessageBuilder_h */