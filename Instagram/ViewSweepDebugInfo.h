//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ViewSweepDebugInfo_h
#define ViewSweepDebugInfo_h
@import Foundation;

@class NSDate, NSString;

@interface ViewSweepDebugInfo : NSObject

@property (readonly, nonatomic) NSString *analyticsModule;
@property (readonly, nonatomic) NSString *surfaceName;
@property (readonly, nonatomic) NSString *viewId;
@property (readonly, nonatomic) BOOL isSponsored;
@property (readonly, nonatomic) BOOL isAdMode;
@property (readonly, nonatomic) BOOL isOrganicMode;
@property (readonly, nonatomic) NSDate *scanTimestamp;
@property (readonly, nonatomic) unsigned long long visiblePercentage;

/* instance methods */
- (id)initWithAnalyticsModule:(id)module surfaceName:(id)name viewId:(id)id isSponsored:(BOOL)sponsored isAdMode:(BOOL)mode isOrganicMode:(BOOL)mode scanTimestamp:(id)timestamp visiblePercentage:(unsigned long long)percentage;
- (id)description;
@end

#endif /* ViewSweepDebugInfo_h */
