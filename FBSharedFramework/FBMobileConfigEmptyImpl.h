//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBMobileConfigEmptyImpl_h
#define FBMobileConfigEmptyImpl_h
@import Foundation;

#include "FBMobileConfigAPI-Protocol.h"

@class NSString;

@interface FBMobileConfigEmptyImpl : NSObject<FBMobileConfigAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (BOOL)getBool:(struct mc_bool_param_t { unsigned long long x0; })bool;
- (BOOL)getBool:(struct mc_bool_param_t { unsigned long long x0; })bool withDefault:(BOOL)default;
- (BOOL)getBool:(struct mc_bool_param_t { unsigned long long x0; })bool withOptions:(id)options;
- (BOOL)getBool:(struct mc_bool_param_t { unsigned long long x0; })bool withOptions:(id)options withDefault:(BOOL)default;
- (long long)getInt64:(struct mc_long_param_t { unsigned long long x0; })int64;
- (long long)getInt64:(struct mc_long_param_t { unsigned long long x0; })int64 withDefault:(long long)default;
- (long long)getInt64:(struct mc_long_param_t { unsigned long long x0; })int64 withOptions:(id)options;
- (long long)getInt64:(struct mc_long_param_t { unsigned long long x0; })int64 withOptions:(id)options withDefault:(long long)default;
- (id)getString:(struct mc_string_param_t { unsigned long long x0; })string;
- (id)getString:(struct mc_string_param_t { unsigned long long x0; })string withDefault:(id)default;
- (id)getString:(struct mc_string_param_t { unsigned long long x0; })string withOptions:(id)options;
- (id)getString:(struct mc_string_param_t { unsigned long long x0; })string withOptions:(id)options withDefault:(id)default;
- (double)getDouble:(struct mc_double_param_t { unsigned long long x0; })double;
- (double)getDouble:(struct mc_double_param_t { unsigned long long x0; })double withDefault:(double)default;
- (double)getDouble:(struct mc_double_param_t { unsigned long long x0; })double withOptions:(id)options;
- (double)getDouble:(struct mc_double_param_t { unsigned long long x0; })double withOptions:(id)options withDefault:(double)default;
- (id)getMapValueForParam:(struct mc_string_string_map_param_t { unsigned long long x0; })param withKey:(id)key;
- (id)getMapKeys:(struct mc_string_string_map_param_t { unsigned long long x0; })keys;
- (void)logExposureForConfigParameter:(unsigned long long)parameter;
- (void)logExposureForBoolParameter:(struct mc_bool_param_t { unsigned long long x0; })parameter;
- (void)logExposureForDoubleParameter:(struct mc_double_param_t { unsigned long long x0; })parameter;
- (void)logExposureForInt64Parameter:(struct mc_long_param_t { unsigned long long x0; })parameter;
- (void)logExposureForStringParameter:(struct mc_string_param_t { unsigned long long x0; })parameter;
- (id)getLoggingID:(unsigned long long)id;
- (BOOL)hasValidConfig;
- (int)getEpVersion:(unsigned int)version configKey:(unsigned int)key;
- (int)getUnitType;
- (id)contextForConfig:(unsigned int)config;
- (id)latestContextForConfig;
- (id)accessedConfigs;
- (BOOL)addChangeListener:(id /* block */)listener forConfig:(unsigned int)config;
- (BOOL)addGlobalChangeListener:(id /* block */)listener;
@end

#endif /* FBMobileConfigEmptyImpl_h */
