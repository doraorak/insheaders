//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryTextEntryViewControllerConfiguration_h
#define IGStoryTextEntryViewControllerConfiguration_h
@import Foundation;

#include "IGTextEditorTextToSpeechConfiguration.h"
#include "IGUser.h"

@class NSArray, NSMutableDictionary, NSSet, NSString, UIColor;

@interface IGStoryTextEntryViewControllerConfiguration : NSObject

@property (readonly, nonatomic) BOOL dimmedBackgroundPreferred;
@property (readonly, nonatomic) BOOL eyedropperColorPickerEnabled;
@property (readonly, nonatomic) BOOL colorPickerEnabled;
@property (readonly, nonatomic) BOOL richTextFormatPickerEnabled;
@property (readonly, nonatomic) BOOL alwaysShowDoneButton;
@property (readonly, nonatomic) BOOL scaleTextViewsToFitOnEndEditing;
@property (readonly, nonatomic) BOOL neverDiscardTextViewOnDismiss;
@property (readonly, nonatomic) BOOL neverDiscardTextViewWithPlaceholderOnDismiss;
@property (readonly, nonatomic) BOOL disableMentionsAndHashtags;
@property (readonly, nonatomic) IGUser *cameraEffectCreator;
@property (readonly, copy, nonatomic) NSArray *textFormats;
@property (readonly, copy, nonatomic) NSSet *alreadyMentionedUsers;
@property (readonly, copy, nonatomic) UIColor *initialTextColor;
@property (readonly, nonatomic) NSMutableDictionary *fontSelectorViewItemDrawnImages;
@property (readonly, nonatomic) BOOL disableAnimatedText;
@property (readonly, nonatomic) BOOL canAddLocation;
@property (readonly, nonatomic) BOOL mentionLocationPickerEnabled;
@property (readonly, nonatomic) double edrMultiplier;
@property (readonly, nonatomic) BOOL enforceMinimumSize;
@property (readonly, nonatomic) IGTextEditorTextToSpeechConfiguration *textToSpeechConfiguration;
@property (retain, nonatomic) NSString *hashtagAndMentionsDisabledText;

/* class methods */
+ (id)postcaptureTextConfigurationForMentionedUsers:(id)users initialTextColor:(id)color userSession:(id)session fontSelectorViewItemDrawnImages:(id)images cameraEffectCreator:(id)creator disableAnimatedText:(BOOL)text canAddLocation:(BOOL)location mentionLocationPickerEnabled:(BOOL)enabled edrMultiplier:(double)multiplier enforceMinimumSize:(BOOL)size creationEntryPoint:(long long)point textToSpeechConfiguration:(id)configuration;
+ (id)postcaptureTextConfigurationDisabledMentionsAndHashtagsWithInitialTextColor:(id)color userSession:(id)session fontSelectorViewItemDrawnImages:(id)images cameraEffectCreator:(id)creator disableAnimatedText:(BOOL)text canAddLocation:(BOOL)location mentionLocationPickerEnabled:(BOOL)enabled edrMultiplier:(double)multiplier enforceMinimumSize:(BOOL)size creationEntryPoint:(long long)point textToSpeechConfiguration:(id)configuration;

/* instance methods */
- (id)initWithDimmedBackgroundPreferred:(BOOL)preferred eyedropperColorPickerEnabled:(BOOL)enabled colorPickerEnabled:(BOOL)enabled richTextFormatPickerEnabled:(BOOL)enabled alwaysShowDoneButton:(BOOL)button scaleTextViewsToFitOnEndEditing:(BOOL)editing neverDiscardTextViewOnDismiss:(BOOL)dismiss neverDiscardTextViewWithPlaceholderOnDismiss:(BOOL)dismiss disableMentionsAndHashtags:(BOOL)hashtags textFormats:(id)formats alreadyMentionedUsers:(id)users initialTextColor:(id)color fontSelectorViewItemDrawnImages:(id)images cameraEffectCreator:(id)creator disableAnimatedText:(BOOL)text canAddLocation:(BOOL)location mentionLocationPickerEnabled:(BOOL)enabled edrMultiplier:(double)multiplier enforceMinimumSize:(BOOL)size textToSpeechConfiguration:(id)configuration;
@end

#endif /* IGStoryTextEntryViewControllerConfiguration_h */
