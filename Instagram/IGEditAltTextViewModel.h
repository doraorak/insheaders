//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGEditAltTextViewModel_h
#define IGEditAltTextViewModel_h
@import Foundation;

@class IGMediaMetadata, NSString, NSURL;

@interface IGEditAltTextViewModel : NSObject

@property (readonly, copy, nonatomic) NSString *mediaId;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) IGMediaMetadata *mediaMetadata;
@property (copy, nonatomic) NSString *accessibilityCaption;

/* instance methods */
- (id)initWithMediaId:(id)id imageURL:(id)url imageSize:(struct CGSize { double x0; double x1; })size accessibilityCaption:(id)caption;
- (id)initWithMetadata:(id)metadata;
- (id)snapshot;
@end

#endif /* IGEditAltTextViewModel_h */