//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBSDKGraphRequestBody_h
#define FBSDKGraphRequestBody_h
@import Foundation;

@class NSMutableData, NSMutableDictionary, NSString;

@interface FBSDKGraphRequestBody : NSObject

@property (retain, nonatomic) NSMutableData *data;
@property (retain, nonatomic) NSMutableDictionary *json;
@property (retain, nonatomic) NSString *stringBoundary;
@property (nonatomic) BOOL requiresMultipartDataFormat;

/* instance methods */
- (id)init;
- (id)mimeContentType;
- (void)appendUTF8:(id)utf8;
- (void)appendWithKey:(id)key formValue:(id)value;
- (void)appendWithKey:(id)key imageValue:(id)value;
- (void)appendWithKey:(id)key dataValue:(id)value;
- (void)appendWithKey:(id)key dataAttachmentValue:(id)value;
- (void)_appendWithKey:(id)key filename:(id)filename contentType:(id)type contentBlock:(id /* block */)block;
- (id)compressedData;
@end

#endif /* FBSDKGraphRequestBody_h */