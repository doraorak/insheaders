//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAnimatedMediaViewModel_h
#define IGDirectAnimatedMediaViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGGiphyImageModel.h"
#include "IGImageSpecifier.h"
#include "IGListDiffable-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString, NSURL, UIColor;
@protocol IGDirectInstamadilloMediaResolving;

@interface IGDirectAnimatedMediaViewModel : FBValueObject<IGListDiffable, NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) long long format;
@property (readonly, copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) BOOL isSticker;
@property (readonly, copy, nonatomic) IGGiphyImageModel *imageModel;
@property (readonly, nonatomic) NSObject<IGDirectInstamadilloMediaResolving> *animatedImageResolver;
@property (readonly, copy, nonatomic) IGImageSpecifier *previewImageSpecifier;
@property (readonly, copy, nonatomic) NSString *creatorUsername;

/* instance methods */
- (id)initWithPk:(id)pk url:(id)url width:(double)width height:(double)height format:(long long)format backgroundColor:(id)color isSticker:(BOOL)sticker imageModel:(id)model animatedImageResolver:(id)resolver previewImageSpecifier:(id)specifier creatorUsername:(id)username;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGDirectAnimatedMediaViewModel_h */