//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBHTMLParser_h
#define FBHTMLParser_h
@import Foundation;

#include "WebPageMetadata.h"

@class NSData, NSMutableDictionary, NSURL;

@interface FBHTMLParser : NSObject {
  /* instance variables */
  WebPageMetadata *_metadata;
  NSData *_htmlData;
  NSURL *_sourceUrl;
  unsigned int _encoding;
  BOOL _authoritativeEncoding;
  NSMutableDictionary *_foundImageTypes;
  long long _titleMetaPreference;
  long long _snippetMetaPreference;
  BOOL _sanitized;
}

/* class methods */
+ (id)bestImageURLWithOldURL:(id)url newURL:(id)url;
+ (BOOL)imageURLSupported:(id)urlsupported;
+ (struct _xmlXPathObject *)nodeSetFromContext:(struct _xmlXPathContext *)context xpath:(const char *)xpath;
+ (void)metadataNameAndValueFromNode:(struct _xmlNode *)node name:(out id *)name value:(out id *)value;

/* instance methods */
- (id)initWithHTMLData:(id)htmldata fromURL:(id)url encoding:(unsigned int)encoding authoritativeEncoding:(BOOL)encoding;
- (void)sanitizeHTMLData;
- (void)parseWithCompletion:(id /* block */)completion;
- (void)extractTitleUsingSharedDocContext:(struct _xmlXPathContext *)context;
- (void)extractRelativeLinkUsingSharedDocContext:(struct _xmlXPathContext *)context actualURL:(id)url;
- (void)extractMetadataUsingSharedDocContext:(struct _xmlXPathContext *)context actualURL:(id)url;
- (void)processMetadataWithName:(id)name value:(id)value actualURL:(id)url;
@end

#endif /* FBHTMLParser_h */