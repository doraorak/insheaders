//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBrowserTitleBarViewModel_h
#define IGBrowserTitleBarViewModel_h
@import Foundation;

@class NSArray, UIColor;

@interface IGBrowserTitleBarViewModel : NSObject

@property (readonly, nonatomic) NSArray *leftButtonTypes;
@property (readonly, nonatomic) NSArray *rightButtonTypes;
@property (readonly, nonatomic) UIColor *titleBarBackgroundColor;
@property (readonly, nonatomic) unsigned long long emphasisType;
@property (readonly, nonatomic) NSArray *progressBarGradientColors;
@property (readonly, nonatomic) BOOL isLeftJustified;
@property (readonly, nonatomic) BOOL isProminentLoadingBarEnabled;
@property (readonly, nonatomic) BOOL isProminentLockIconEnabled;
@property (readonly, nonatomic) BOOL isTitleRotationEnabled;

/* instance methods */
- (id)initWithLeftButtonTypes:(id)types rightButtonTypes:(id)types titleBarBackgroundColor:(id)color emphasisType:(unsigned long long)type progressBarGradientColors:(id)colors isLeftJustified:(BOOL)justified isProminentLoadingBarEnabled:(BOOL)enabled isProminentLockIconEnabled:(BOOL)enabled isTitleRotationEnabled:(BOOL)enabled;
@end

#endif /* IGBrowserTitleBarViewModel_h */
