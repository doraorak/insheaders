//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SharedClickIDUtils_h
#define SharedClickIDUtils_h
@import Foundation;

@class FbcParamConfig, NSArray;

@interface SharedClickIDUtils : NSObject

@property (retain, nonatomic) FbcParamConfig *defaultFbcParamConfig;
@property (retain, nonatomic) NSArray *defaultFbcParamConfigs;
@property (nonatomic) BOOL fromIG;

/* instance methods */
- (id)initWithFromIG:(BOOL)ig;
- (id)getSingleFbcParamValue:(id)value url:(id)url ebpPath:(id)path iabAdscontextParams:(id)params;
- (id)decodeMapFromString:(id)string;
- (id)getFbcParamsConfig:(id)config;
- (id)prepareFbcParams:(id)params url:(id)url iabAdsContextParams:(id)params;
- (id)createIabAdscontextParams:(id)params;
- (id)createFbcParamsValues:(id)values requestURL:(id)url iabAdsContext:(id)context enableParamSplit:(BOOL)split;
@end

#endif /* SharedClickIDUtils_h */