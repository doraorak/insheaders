//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FoATextKitLinkAttribute_h
#define FoATextKitLinkAttribute_h
@import Foundation;

@class NSString, NSURL;

@interface FoATextKitLinkAttribute : NSObject

@property (readonly, copy, nonatomic) NSURL *linkURL;
@property (readonly, copy, nonatomic) NSString *accessibilityLabel;
@property (readonly, nonatomic) unsigned long long accessibilityTraits;
@property (readonly, nonatomic) id linkHandler;

/* instance methods */
- (id)initWithURL:(id)url accessibilityLabel:(id)label accessibilityTraits:(unsigned long long)traits linkHandler:(id)handler;
@end

#endif /* FoATextKitLinkAttribute_h */