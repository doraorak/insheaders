//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef PapayaDoubleLoggingDataProvider_h
#define PapayaDoubleLoggingDataProvider_h
@import Foundation;

@interface PapayaDoubleLoggingDataProvider : NSObject
/* instance methods */
- (BOOL)isTrue;
- (id)getPlatform;
- (long long)getTimestampMs;
- (BOOL)getBooleanPropertyValue;
- (long long)getIntPropertyValue;
- (double)getFloatPropertyValue;
- (id)getStringProperty1Value;
- (id)getStringProperty2Value;
@end

#endif /* PapayaDoubleLoggingDataProvider_h */
