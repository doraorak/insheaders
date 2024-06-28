//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGRTCCallIntent_h
#define IGRTCCallIntent_h
@import Foundation;

@class IGVideoCallKey, NSArray, NSDictionary, NSString;

@interface IGRTCCallIntent : NSObject

@property (readonly, nonatomic) long long trigger;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) IGVideoCallKey *key;
@property (readonly, nonatomic) NSString *threadId;
@property (readonly, nonatomic) NSString *threadDisplayName;
@property (readonly, nonatomic) NSArray *threadUsers;
@property (readonly, nonatomic) NSString *openThreadId;
@property (readonly, nonatomic) NSString *armadilloThreadId;
@property (readonly, nonatomic) NSString *occamadilloThreadId;
@property (readonly, nonatomic) long long xmaType;
@property (readonly, nonatomic) BOOL isShhMode;
@property (readonly, nonatomic) BOOL isE2eeMandated;
@property (readonly, nonatomic) BOOL isCutoverThread;
@property (readonly, nonatomic) BOOL isRTCCallOngoing;
@property (readonly, nonatomic) NSDictionary *productParams;

/* instance methods */
- (id)initWithTrigger:(long long)trigger type:(long long)type key:(id)key threadId:(id)id threadDisplayName:(id)name threadUsers:(id)users openThreadId:(id)id armadilloThreadId:(id)id occamadilloThreadId:(id)id xmaType:(long long)type isShhMode:(BOOL)mode isE2eeMandated:(BOOL)mandated isCutoverThread:(BOOL)thread isRTCCallOngoing:(BOOL)ongoing productParams:(id)params;
@end

#endif /* IGRTCCallIntent_h */
