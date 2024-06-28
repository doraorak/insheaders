//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectPostMessageBubbleViewModel_h
#define IGDirectPostMessageBubbleViewModel_h
@import Foundation;

#include "FBValueObject.h"
#include "IGDirectTextMessageBubbleViewModel.h"
#include "IGSponsoredInfoProviding-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class IGDirectMessageBlurredImageViewModel, IGDirectMessageBubbleLayoutSpec, IGDirectMessageBubbleStyle, IGDirectMessageCellViewModel, IGImageURL, IGMedia, NSString;

@interface IGDirectPostMessageBubbleViewModel : FBValueObject<NSCopying, NSCoding>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly, copy, nonatomic) IGMedia *media;
@property (readonly, nonatomic) NSObject<IGSponsoredInfoProviding> *sponsoredInfoProvider;
@property (readonly, copy, nonatomic) IGImageURL *imageURL;
@property (readonly, copy, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel;
@property (readonly, copy, nonatomic) IGDirectMessageBubbleStyle *bubbleStyle;
@property (readonly, copy, nonatomic) IGDirectMessageBubbleLayoutSpec *bubbleLayoutSpec;
@property (readonly, copy, nonatomic) IGDirectTextMessageBubbleViewModel *captionTextModel;
@property (readonly, copy, nonatomic) IGDirectMessageBubbleStyle *captionBubbleStyle;
@property (readonly, copy, nonatomic) IGDirectMessageBlurredImageViewModel *blurredImageViewModel;
@property (readonly, copy, nonatomic) NSString *sentPostItemPk;
@property (readonly, nonatomic) long long tagIndicator;
@property (readonly, nonatomic) BOOL displaysChevron;
@property (readonly, nonatomic) BOOL enableImageFallbackURL;

/* instance methods */
- (id)initWithContentSize:(struct CGSize { double x0; double x1; })size media:(id)media sponsoredInfoProvider:(id)provider imageURL:(id)url messageCellViewModel:(id)model bubbleStyle:(id)style bubbleLayoutSpec:(id)spec captionTextModel:(id)model captionBubbleStyle:(id)style blurredImageViewModel:(id)model sentPostItemPk:(id)pk tagIndicator:(long long)indicator displaysChevron:(BOOL)chevron enableImageFallbackURL:(BOOL)url;
@end

#endif /* IGDirectPostMessageBubbleViewModel_h */
