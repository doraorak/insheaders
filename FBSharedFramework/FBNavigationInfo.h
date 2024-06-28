//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBNavigationInfo_h
#define FBNavigationInfo_h
@import Foundation;

@class FBPopoverInfo, UIViewController;

@interface FBNavigationInfo : NSObject {
  /* instance variables */
  BOOL _updateStatusBarStyle;
  id /* block */ _whenClosed;
  id /* block */ _whenClosedWithStatus;
}

@property (readonly, nonatomic) UIViewController *viewController;
@property (readonly, nonatomic) unsigned long long method;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) FBPopoverInfo *popoverInfo;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) double timestamp;

/* class methods */
+ (id)infoWithViewController:(id)controller completion:(id /* block */)completion whenClosed:(id /* block */)closed;
+ (id)infoWithViewController:(id)controller method:(unsigned long long)method options:(unsigned long long)options;
+ (id)infoWithViewController:(id)controller method:(unsigned long long)method options:(unsigned long long)options completion:(id /* block */)completion whenClosed:(id /* block */)closed;
+ (id)infoWithViewController:(id)controller method:(unsigned long long)method options:(unsigned long long)options popoverInfo:(id)info completion:(id /* block */)completion whenClosed:(id /* block */)closed;

/* instance methods */
- (id)init;
- (id)description;
@end

#endif /* FBNavigationInfo_h */
