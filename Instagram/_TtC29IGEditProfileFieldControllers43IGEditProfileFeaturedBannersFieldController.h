//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC29IGEditProfileFieldControllers43IGEditProfileFeaturedBannersFieldController_h
#define _TtC29IGEditProfileFieldControllers43IGEditProfileFeaturedBannersFieldController_h
@import Foundation;

@class IGGroupedTableViewCell;

@interface _TtC29IGEditProfileFieldControllers43IGEditProfileFeaturedBannersFieldController : NSObject { // (Swift)
  /* instance variables */
   userSession;
   delegate;
   musicBannerDataModel;
   dataSource;
   $__lazy_storage_$_tableViewCell;
   $__lazy_storage_$_textField;
}

@property (nonatomic, retain) IGGroupedTableViewCell *tableViewCell;
@property (nonatomic, readonly) long long numFeaturedBanners;

/* instance methods */
- (id)initWithUserSession:(id)session delegate:(id)delegate;
- (void)configureTextViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame inset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (void)configureMusicOnProfileInfo:(id)info;
- (void)launchReorderControllerWithNavigationController:(id)controller;
- (id)init;
@end

#endif /* _TtC29IGEditProfileFieldControllers43IGEditProfileFeaturedBannersFieldController_h */
