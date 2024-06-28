//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectThreadShhModeMetadataBuilder_h
#define IGDirectThreadShhModeMetadataBuilder_h
@import Foundation;

@class NSString;

@interface IGDirectThreadShhModeMetadataBuilder : NSObject {
  /* instance variables */
  BOOL _isShhModeEnabled;
  BOOL _isShhReplayEnabled;
  BOOL _isArmadilloShadowThread;
  NSString *_toggleUserPk;
  long long _transportType;
}

/* class methods */
+ (id)directThreadShhModeMetadata;
+ (id)directThreadShhModeMetadataFromExistingDirectThreadShhModeMetadata:(id)metadata;

/* instance methods */
- (id)build;
- (id)withIsShhModeEnabled:(BOOL)enabled;
- (id)withIsShhReplayEnabled:(BOOL)enabled;
- (id)withIsArmadilloShadowThread:(BOOL)thread;
- (id)withToggleUserPk:(id)pk;
- (id)withTransportType:(long long)type;
@end

#endif /* IGDirectThreadShhModeMetadataBuilder_h */