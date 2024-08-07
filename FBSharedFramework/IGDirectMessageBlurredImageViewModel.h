//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMessageBlurredImageViewModel_h
#define IGDirectMessageBlurredImageViewModel_h
@import Foundation;

#include "IGDirectAttachmentIntervention.h"
#include "IGImageSpecifier.h"
#include "NSCopying-Protocol.h"

@class NSAttributedString, NSString, NSURL, UIImage;

@interface IGDirectMessageBlurredImageViewModel : NSObject<NSCopying>

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSURL *blurredImageURL;
@property (readonly, nonatomic) IGDirectAttachmentIntervention *intervention;
@property (readonly, nonatomic) IGImageSpecifier *blurredImageSpecifier;
@property (readonly, nonatomic) double labelPadding;
@property (readonly, nonatomic) double fontSize;
@property (readonly, nonatomic) BOOL canTapToReveal;
@property (readonly, nonatomic) NSAttributedString *labelString;
@property (readonly, nonatomic) UIImage *overlayIcon;
@property (readonly, nonatomic) unsigned long long gatingType;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long contentType;
@property (readonly, copy, nonatomic) NSString *module;
@property (readonly, nonatomic) BOOL loadingAnimation;
@property (readonly, nonatomic) double loadingAnimationSize;
@property (readonly, nonatomic) int surface;

/* class methods */
+ (id)_sensitiveContentLabelPreviewAttributedTextWithContentType:(long long)type fontSize:(double)size canTapToReveal:(BOOL)reveal;

/* instance methods */
- (id)initWithBlurredImageURL:(id)url blurredImageSpecifier:(id)specifier intervention:(id)intervention surface:(int)surface labelPadding:(double)padding fontSize:(double)size canTapToReveal:(BOOL)reveal labelAttributedString:(id)string overlayIcon:(id)icon gatingType:(unsigned long long)type type:(long long)type contentType:(long long)type module:(id)module loadingAnimation:(BOOL)animation loadingAnimationSize:(double)size;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IGDirectMessageBlurredImageViewModel_h */
