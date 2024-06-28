//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedPhotoViewDelegate_Protocol_h
#define IGFeedPhotoViewDelegate_Protocol_h
@import Foundation;

@protocol IGFeedPhotoViewDelegate <NSObject>
/* instance methods */
- (void)feedPhotoView:(id)view didUpdateLoadingState:(id)state;
- (void)feedPhotoView:(id)view didUpdateLoadingState:(id)state;
- (void)feedPhotoView:(id)view didLoadImage:(id)image loadSource:(id)source networkRequestSummary:(id)summary;
- (void)feedPhotoView:(id)view didLoadImage:(id)image loadSource:(id)source networkRequestSummary:(id)summary;
- (void)feedPhotoViewDidFailLoad:(id)load error:(id)error networkRequestSummary:(id)summary;
- (void)feedPhotoDidDoubleTapToLike:(id)like locationInfo:(id)info;
- (void)feedPhotoDidDoubleTapToLike:(id)like locationInfo:(id)info;
- (void)feedPhotoViewDidTap:(id)tap tapPosition:(struct CGPoint { double x0; double x1; })position gestureRecognizer:(id)recognizer isCTATargetExtensionOnTargetView:(BOOL)view;
- (BOOL)feedPhotoView:(id)view gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (BOOL)feedPhotoView:(id)view gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (void)feedPhotoView:(id)view didShowTagsWithReason:(unsigned long long)reason;
- (void)feedPhotoView:(id)view didShowTagsWithReason:(unsigned long long)reason;
- (void)feedPhotoView:(id)view didHideTagsWithReason:(unsigned long long)reason;
- (void)feedPhotoView:(id)view didHideTagsWithReason:(unsigned long long)reason;
- (void)feedPhotoView:(id)view willChangeMediaIndicatorToHidden:(BOOL)hidden withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)feedPhotoViewDidTapOverlayIndicator:(id)indicator;
- (void)feedPhotoViewDidTapAudioIndicator:(id)indicator;
- (void)feedPhotoViewDidTapInterestPivot:(id)pivot loggingDetail:(id)detail;
- (void)feedPhotoViewDidTapLinkedHighlightIndicator:(id)indicator;
- (void)feedPhotoViewDidTapAddToPostIndicator:(id)indicator;
- (void)feedPhotoViewDidTapAddToPostIndicator:(id)indicator;
- (void)feedPhotoViewDidTapLikeIndicator:(id)indicator isLiked:(BOOL)liked tapSource:(id)source containerModule:(id)module;
- (void)feedPhotoView:(id)view didTapContentNote:(id)note presentationContext:(id)context;
- (void)feedPhotoView:(id)view didTapContentNotesOverflowPreviewWithSeenNoteID:(id)id;
- (void)feedPhotoView:(id)view didToggleContentNotesIsMinimized:(BOOL)minimized;
- (void)feedPhotoViewDidTapAddNoteMimicryButton:(id)button;
- (void)feedPhotoView:(id)view didTapContentNoteContextMenuWithAction:(long long)action contentNote:(id)note;
- (void)feedPhotoView:(id)view didTapContentNoteContextMenuWithAction:(long long)action contentNote:(id)note;
- (void)feedPhotoViewDidTapMediaAttributionLikeButton:(id)button isLiked:(BOOL)liked tapSource:(id)source containerModule:(id)module;
- (void)feedPhotoViewShowProfilePageWithUserUrl:(id)url;
- (void)feedPhotoViewShowProfilePageWithUserUrl:(id)url;
- (void)feedPhotoView:(id)view didTapFloatingSocialContext:(id)context bubblePosition:(long long)position;
- (void)feedPhotoView:(id)view didLongPressFloatingSocialContextWithAction:(unsigned long long)action floatingSocialContext:(id)context bubblePosition:(long long)position;
- (void)feedPhotoView:(id)view didLongPressFloatingSocialContextWithAction:(unsigned long long)action floatingSocialContext:(id)context bubblePosition:(long long)position;
- (void)feedPhotoView:(id)view didRegisterSocialContextViewImpressionWithModel:(id)model bubblePosition:(long long)position;
- (void)feedPhotoView:(id)view didRegisterSocialContextViewImpressionWithModel:(id)model bubblePosition:(long long)position;
- (void)feedPhotoView:(id)view didDragToDismissSocialContext:(id)context overlayViewModel:(id)model;
@end

#endif /* IGFeedPhotoViewDelegate_Protocol_h */
