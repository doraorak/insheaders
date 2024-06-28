//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFDashChunkEmsg_h
#define FNFDashChunkEmsg_h
@import Foundation;

@class NSString;

@interface FNFDashChunkEmsg : NSObject

@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *schemeId;
@property (readonly, nonatomic) double emsgId;
@property (readonly, nonatomic) unsigned char messageType;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;

/* instance methods */
- (id)initWithMessge:(id)messge messageType:(unsigned char)type schemeId:(id)id emsgId:(double)id startTime:(double)time endTime:(double)time;
- (id)description;
@end

#endif /* FNFDashChunkEmsg_h */
