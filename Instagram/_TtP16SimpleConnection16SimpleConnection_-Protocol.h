//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtP16SimpleConnection16SimpleConnection__Protocol_h
#define _TtP16SimpleConnection16SimpleConnection__Protocol_h
@import Foundation;

@protocol _TtP16SimpleConnection16SimpleConnection_ <NSObject>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) STLInputStream *inputStream;
@property (nonatomic, readonly) STLOutputStream *outputStream;
@property (nonatomic, retain) NSObject<_TtP16SimpleConnection24SimpleConnectionDelegate_> *delegate;

/* instance methods */
- (void)open;
- (void)close;
@end

#endif /* _TtP16SimpleConnection16SimpleConnection__Protocol_h */
