//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC14IGMConfigStore14IGMViperConfig_h
#define _TtC14IGMConfigStore14IGMViperConfig_h
@import Foundation;

@interface _TtC14IGMConfigStore14IGMViperConfig : NSObject { // (Swift)
  /* instance variables */
   initDate;
}

@property (nonatomic, readonly) BOOL isAdsEnabled;
@property (nonatomic, readonly) BOOL isOrganicEnabled;
@property (nonatomic, readonly) BOOL isAdsEnabledIsNonNull;
@property (nonatomic, readonly) BOOL isOrganicEnabledIsNonNull;

/* instance methods */
- (id)initWithIsAdsEnabled:(BOOL)enabled isOrganicEnabled:(BOOL)enabled isAdsEnabledIsNonNull:(BOOL)null isOrganicEnabledIsNonNull:(BOOL)null;
- (id)init;
@end

#endif /* _TtC14IGMConfigStore14IGMViperConfig_h */
