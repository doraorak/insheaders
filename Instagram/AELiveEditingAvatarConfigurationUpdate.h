//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef AELiveEditingAvatarConfigurationUpdate_h
#define AELiveEditingAvatarConfigurationUpdate_h
@import Foundation;

@class NSDictionary, NSSet, NSString;

@interface AELiveEditingAvatarConfigurationUpdate : NSObject {
  /* instance variables */
  NSString *_configString;
  NSDictionary *_platformEventsData;
  NSSet *_updatedRamps;
  NSDictionary *_updatedWeights;
}

@property (readonly, nonatomic) unsigned long long updateType;

/* instance methods */
- (id)initWithUpdateModel:(id)model featureLevel:(long long)level;
- (BOOL)isValid;
@end

#endif /* AELiveEditingAvatarConfigurationUpdate_h */