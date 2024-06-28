//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC12IGURLHelpers13IGURLMetadata_h
#define _TtC12IGURLHelpers13IGURLMetadata_h
@import Foundation;

@class NSString;

@interface _TtC12IGURLHelpers13IGURLMetadata : NSObject // (Swift)

@property (nonatomic, readonly) NSString *sanitizedURI;
@property (nonatomic, readonly) NSString *scheme;
@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *query;

/* class methods */
+ (id)generate:(id)generate;

/* instance methods */
- (id)init;
@end

#endif /* _TtC12IGURLHelpers13IGURLMetadata_h */