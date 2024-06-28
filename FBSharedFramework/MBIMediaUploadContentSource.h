//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MBIMediaUploadContentSource_h
#define MBIMediaUploadContentSource_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface MBIMediaUploadContentSource : NSObject<NSCoding, NSCopying> {
  /* instance variables */
  struct __MCFRuntimeBaseData { unsigned char x[4] _cfinfo; unsigned int _rc; } _reserved;
  struct __MCFData * _uploadData;
  struct __MCFString * _filePath;
  struct __MCFString * _diskCacheKey;
}

/* class methods */
+ (id)mediaUploadContentSourceWithUploadData:(id)data filePath:(id)path diskCacheKey:(id)key;

/* instance methods */
- (id)uploadData;
- (id)filePath;
- (id)diskCacheKey;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)_cfTypeID;
- (id)description;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)dealloc;
@end

#endif /* MBIMediaUploadContentSource_h */