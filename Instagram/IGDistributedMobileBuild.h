//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDistributedMobileBuild_h
#define IGDistributedMobileBuild_h
@import Foundation;

@class NSString, NSURL;

@interface IGDistributedMobileBuild : NSObject

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) long long buildNumber;
@property (copy, nonatomic) NSString *versionName;
@property (nonatomic) double buildTime;
@property (retain, nonatomic) NSURL *itmsURL;

/* instance methods */
- (id)initWithApplicationIdentifier:(id)identifier buildNumber:(long long)number versionName:(id)name buildTime:(double)time itmsURL:(id)url;
@end

#endif /* IGDistributedMobileBuild_h */