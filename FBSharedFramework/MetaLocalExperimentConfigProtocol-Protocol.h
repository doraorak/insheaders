//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MetaLocalExperimentConfigProtocol_Protocol_h
#define MetaLocalExperimentConfigProtocol_Protocol_h
@import Foundation;

@protocol MetaLocalExperimentConfigProtocol <NSObject>
/* instance methods */
- (id)experimentName;
- (id)saltString;
- (unsigned long long)totalSegments;
- (id)defaultControlGroupName;
- (id)expirationDate;
- (id)groups;
- (BOOL)shouldLogImmediately;
@end

#endif /* MetaLocalExperimentConfigProtocol_Protocol_h */
