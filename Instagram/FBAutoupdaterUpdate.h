//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAutoupdaterUpdate_h
#define FBAutoupdaterUpdate_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSDictionary, NSString, NSURL;

@interface FBAutoupdaterUpdate : NSObject<NSCoding, NSCopying>

@property (copy, nonatomic) NSString *installPath;
@property (retain, nonatomic) NSDate *installDate;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSURL *deltaUrl;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *manifest;
@property (copy, nonatomic) NSDictionary *sha256Checksums;
@property (copy, nonatomic) NSDictionary *uncompressedFilesizeMap;
@property (nonatomic) long long size;
@property (nonatomic) long long deltaSize;
@property (nonatomic) long long uncompressedSize;
@property (nonatomic) unsigned long long allowedNetworks;
@property (readonly, nonatomic) BOOL shouldBeDownloadedOnWifiOnly;
@property (copy, nonatomic) NSString *installFolderPrefix;
@property (copy, nonatomic) NSString *commit;
@property (copy, nonatomic) NSString *branch;
@property (copy, nonatomic) NSString *buildDate;
@property (copy, nonatomic) NSString *prodVersionName;
@property (copy, nonatomic) NSString *otaVersionName;
@property (copy, nonatomic) NSString *releaseID;

/* instance methods */
- (id)init;
- (id)initWithURL:(id)url;
- (id)initWithURL:(id)url version:(id)version;
- (id)initWithURL:(id)url version:(id)version size:(long long)size;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)deltaProcessorWithDelegate:(id)delegate;
- (id)installPathInHost:(id)host;
- (id)URLForActiveResource:(id)resource inHost:(id)host;
@end

#endif /* FBAutoupdaterUpdate_h */
