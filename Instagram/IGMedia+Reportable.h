//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMedia_Reportable_h
#define IGMedia_Reportable_h
@import Foundation;

@interface IGMedia (Reportable) <IGReportable>
/* instance methods */
- (id)reportableID;
- (unsigned long long)reportableObjectType;
- (id)loggingExtras;
@end

#endif /* IGMedia_Reportable_h */
