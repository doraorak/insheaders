//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FXBlurScheduler_h
#define FXBlurScheduler_h
@import Foundation;

@class NSMutableArray;

@interface FXBlurScheduler : NSObject

@property (retain, nonatomic) NSMutableArray *views;
@property (nonatomic) unsigned long long viewIndex;
@property (nonatomic) unsigned long long updatesEnabled;
@property (nonatomic) BOOL blurEnabled;
@property (nonatomic) BOOL updating;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)setUpdatesEnabled;
- (void)setUpdatesDisabled;
- (void)addView:(id)view;
- (void)removeView:(id)view;
- (void)updateAsynchronously;
@end

#endif /* FXBlurScheduler_h */
