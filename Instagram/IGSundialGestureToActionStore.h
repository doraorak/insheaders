//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialGestureToActionStore_h
#define IGSundialGestureToActionStore_h
@import Foundation;

#include "IGSundialGestureToActionConstraints.h"

@class IGUserDefaults, NSMutableDictionary, NSString;

@interface IGSundialGestureToActionStore : NSObject {
  /* instance variables */
  IGUserDefaults *_userDefaults;
  NSString *_previousBrowserSessionID;
  BOOL _goodSwiperRelaxationEnabled;
  double _goodSwiperMinRate;
  unsigned long long _goodSwiperPastDays;
  unsigned long long _goodSwiperMinSwipes;
  unsigned long long _goodSwiperLatestSwipes;
  NSString *_cachedSwiperType;
  IGSundialGestureToActionConstraints *_adsConstraints;
  IGSundialGestureToActionConstraints *_organicConstraints;
  NSMutableDictionary *_constraintsMap;
  BOOL _shouldUseAdsConstraints;
  double _ruleBasedGCR;
  NSString *_cachedSwipeResult;
  BOOL _countryBasedRelaxationEnabled;
  BOOL _countryBasedRelaxationTargeted;
  BOOL _organicDynamicRelaxationEnabled;
}

/* instance methods */
- (id)initWithUserDefaults:(id)defaults goodSwiperRelaxationEnabled:(BOOL)enabled goodSwiperVersion:(long long)version goodSwiperMinRate:(double)rate goodSwiperPastDays:(unsigned long long)days goodSwiperMinSwipes:(unsigned long long)swipes goodSwiperLatestSwipes:(unsigned long long)swipes adsConstraints:(id)constraints organicConstraints:(id)constraints organicDynamicRelaxationEnabled:(BOOL)enabled countryBasedRelaxationEnabled:(BOOL)enabled countryBasedRelaxationTargeted:(BOOL)targeted;
- (void)cleanStaleData;
- (id)analyzeSwiperType;
- (void)setRelaxedConstraints:(id)constraints;
- (id)adsSwiperType;
- (double)ruleBasedGCR;
- (id)cachedSwipeResult;
- (void)resetSwipeHistory;
- (id)constraints;
@end

#endif /* IGSundialGestureToActionStore_h */