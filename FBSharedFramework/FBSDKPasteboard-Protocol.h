//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKPasteboard_Protocol_h
#define FBSDKPasteboard_Protocol_h
@import Foundation;

@protocol FBSDKPasteboard 

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL _isGeneralPasteboard;

/* instance methods */
- (id)dataForPasteboardType:(id)type;
- (void)setData:(id)data forPasteboardType:(id)type;
@end

#endif /* FBSDKPasteboard_Protocol_h */