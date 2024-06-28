//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MBIMailboxSDKVideoSource_h
#define MBIMailboxSDKVideoSource_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@interface MBIMailboxSDKVideoSource : NSObject<NSCoding, NSCopying> {
  /* instance variables */
  struct __MCFRuntimeBaseData { unsigned char x[4] _cfinfo; unsigned int _rc; } _reserved;
  struct __MCFString * _videoFilePath;
  struct __MCFData * _videoData;
}

/* class methods */
+ (id)mailboxSDKVideoSourceWithVideoFilePath:(id)path videoData:(id)data;

/* instance methods */
- (id)videoFilePath;
- (id)videoData;
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

#endif /* MBIMailboxSDKVideoSource_h */