//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryTrayBaseCell_Protocol_h
#define IGStoryTrayBaseCell_Protocol_h
@import Foundation;

@protocol IGStoryTrayBaseCell <NSObject>

@property (weak, nonatomic) NSObject<IGStoryTrayBaseCellDelegate> *baseCellDelegate;
@property (readonly, nonatomic) UIView<IGStoryTrayAvatarViewProtocol> *avatarView;

/* instance methods */
- (void)configureWithViewModel:(id)model ringViewSpecFactory:(id)factory;
- (void)setShowError:(BOOL)error;
- (void)setLoading:(BOOL)loading;
- (id)profilePictureView;
- (id)cellTitleLabel;
- (id)presentationAnimationFromView;
- (id)presentationAnimationToView;
- (BOOL)presentationAnimationNeedsCrossfade;
- (void)setShowPendingUpload:(BOOL)upload;
- (void)hideAnimatableUI:(BOOL)ui;
- (void)conformsToIGStoryTrayBaseCell;
@end

#endif /* IGStoryTrayBaseCell_Protocol_h */
