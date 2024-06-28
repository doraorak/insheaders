//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC23IGToThreadsCrossposting28IGTHCrossPostingDataProvider_h
#define _TtC23IGToThreadsCrossposting28IGTHCrossPostingDataProvider_h
@import Foundation;

@class NSString;

@interface _TtC23IGToThreadsCrossposting28IGTHCrossPostingDataProvider : NSObject { // (Swift)
  /* instance variables */
   kCrossPostingSettingServiceName;
   kCrossPostingSettingAutoPostEnabledKey;
   pandoGraphQLService;
   linkedBarcelonaProfileQueryResponse;
}

@property (nonatomic, readonly) NSString *accountName;
@property (nonatomic, readonly) NSString *destinationId;
@property (nonatomic, readonly) NSString *accountPrivacy;
@property (nonatomic, readonly) NSString *profilePicURLString;
@property (nonatomic, readonly) BOOL isAutoCrossPostingEnabled;

/* instance methods */
- (id)initWithPandoGraphQLService:(id)qlservice;
- (void)fetchCrossPostingInfo;
- (void)fetchCrossPostingSettings:(id /* block */)settings;
- (void)updateAutoCrossPostingSettingWithIsEnabled:(BOOL)enabled completion:(id /* block */)completion;
- (id)init;
@end

#endif /* _TtC23IGToThreadsCrossposting28IGTHCrossPostingDataProvider_h */