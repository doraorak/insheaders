//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryTextEntryViewControllerDelegate_Protocol_h
#define IGStoryTextEntryViewControllerDelegate_Protocol_h
@import Foundation;

@protocol IGStoryTextEntryViewControllerDelegate <NSObject>
/* instance methods */
- (void)textEntryViewController:(id)controller willFinishEditingTextWrapperView:(id)view withDismissalSource:(long long)source;
- (void)textEntryViewController:(id)controller willFinishEditingTextWrapperView:(id)view withDismissalSource:(long long)source;
- (void)textEntryViewController:(id)controller didFinishEditingTextWrapperView:(id)view withDismissalSource:(long long)source;
- (void)textEntryViewController:(id)controller didFinishEditingTextWrapperView:(id)view withDismissalSource:(long long)source;
- (void)textEntryViewController:(id)controller didFinishSelectingColorFromSource:(long long)source;
- (void)textEntryViewController:(id)controller didFinishSelectingColorFromSource:(long long)source;
- (void)textEntryViewController:(id)controller didBeginEditingTextWrapperView:(id)view;
- (void)textEntryViewController:(id)controller didBeginEditingTextWrapperView:(id)view;
- (void)textEntryViewControllerDidChangeTextEffect:(id)effect emphasisType:(long long)type isAppliedOnFullCaption:(BOOL)caption;
- (void)textEntryViewControllerDidAddAnimationSticker:(id)sticker animatedStickerView:(id)view isInEditingMode:(BOOL)mode creationEntryPoint:(long long)point;
- (void)textEntryViewControllerDidChangeTextAnimation:(id)animation textFormatName:(id)name;
- (void)textEntryViewControllerColorPickerFormatPickerButtonDidToggle:(id)toggle formatPickerSelected:(BOOL)selected;
- (void)textEntryViewControllerDidSelectTextAlignment:(id)alignment alignmentString:(id)string;
- (void)textEntryViewControllerDidSelectTextFormat:(id)format formatString:(id)string;
- (void)textEntryControlsDidToggleToTextFormat:(id)format;
- (void)textEntryControlsDidToggleToTextFormat:(id)format;
- (void)textEntryControlsDidSelectNewGroupMentionEntrypoint:(id)entrypoint preselectedUsers:(id)users;
- (void)textEntryControlsDidSelectGroupMention:(id)mention selectedGroupMentionSticker:(id)sticker;
- (BOOL)textEntryControlsShouldShowGroupMentionStickerSuggestions:(id)suggestions;
- (void)textEntryControlsDidTapTextToSpeechButtonWith:(id)with;
- (void)textEntryControlsDidTapTextToSpeechButtonWith:(id)with;
- (void)textEntryViewController:(id)controller didUpdateFontSize:(double)size;
- (void)textEntryViewController:(id)controller didUpdateTextColor:(id)color;
- (void)textEntryViewControllerDidUpdateLinkedMentions:(id)mentions mentionedUsers:(id)users;
@end

#endif /* IGStoryTextEntryViewControllerDelegate_Protocol_h */
