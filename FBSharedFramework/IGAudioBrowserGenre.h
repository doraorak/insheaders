//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioBrowserGenre_h
#define IGAudioBrowserGenre_h
@import Foundation;

#include "IGAudioBrowserListCellModel-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface IGAudioBrowserGenre : NSObject<IGAudioBrowserListCellModel, NSCopying>

@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *albumArtURL;
@property (readonly, nonatomic) long long embeddedAudioType;

/* instance methods */
- (id)initWithPk:(id)pk name:(id)name albumArtURL:(id)url embeddedAudioType:(long long)type;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGAudioBrowserGenre_h */
