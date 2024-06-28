//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSURL_InstagramAPI_h
#define NSURL_InstagramAPI_h
@import Foundation;

@interface NSURL (InstagramAPI)
/* class methods */
+ (id)distilleryURLWithWebPath:(id)path;
+ (id)distilleryURLWithAPIPath:(id)apipath;
+ (id)distilleryURLWithAPIPath:(id)apipath apiVersion:(unsigned long long)version;
+ (id)distilleryURLWithAPI:(BOOL)api path:(id)path apiVersion:(unsigned long long)version;
@end

#endif /* NSURL_InstagramAPI_h */
