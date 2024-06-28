//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSignalsExample_h
#define IGSignalsExample_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol IGSignalsModelDelegate;

@interface IGSignalsExample : NSObject<NSCoding, NSCopying> {
  /* instance variables */
  struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } __m_; } _predictionsMutex;
  NSMutableDictionary *_predictions;
  NSObject<IGSignalsModelDelegate> *_modelDelegate;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double version;
@property (readonly, nonatomic) NSArray *features;

/* class methods */
+ (id)fromExample:(id)example;

/* instance methods */
- (id)initWithIdentifier:(id)identifier features:(id)features schemaVersion:(double)version;
- (void)save;
- (void)labelWithFeatures:(id)features predictionErrorReporting:(id /* block */)reporting;
- (id)predictionBuilder;
- (void)requestPrediction:(id /* block */)prediction;
- (void)requestPredictionWithPredictor:(id)predictor predictionBlock:(id /* block */)block;
- (void)recordPredicton:(id)predicton shouldStore:(BOOL)store;
- (void)_logPrediction:(id)prediction annotationsBlock:(id /* block */)block;
- (id)_safeAccessPredictions;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGSignalsExample_h */
