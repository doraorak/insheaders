//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FileUploadAttachment_h
#define FileUploadAttachment_h
@import Foundation;

@class NSData, NSString;

@interface FileUploadAttachment : NSObject {
  /* instance variables */
  NSString *_filename;
  NSString *_name;
  NSString *_contentType;
  NSData *_contents;
}

/* instance methods */
- (id)initWithFilename:(id)filename name:(id)name contentType:(id)type contents:(id)contents;
- (id)filename;
- (id)name;
- (id)contentType;
- (id)contents;
@end

#endif /* FileUploadAttachment_h */