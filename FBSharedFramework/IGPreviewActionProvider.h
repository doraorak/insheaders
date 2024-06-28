//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPreviewActionProvider_h
#define IGPreviewActionProvider_h
@import Foundation;

@interface IGPreviewActionProvider : NSObject
/* class methods */
+ (id)actionWithTitle_DEPRECATED:(id)deprecated image:(id)image style:(long long)style handler:(id /* block */)handler;
+ (id)actionWithType:(long long)type title:(id)title image:(id)image style:(long long)style handler:(id /* block */)handler;
+ (id)actionWithAdType:(long long)type title:(id)title image:(id)image style:(long long)style handler:(id /* block */)handler;
+ (id)actionWithUserType:(long long)type title:(id)title image:(id)image style:(long long)style handler:(id /* block */)handler;
@end

#endif /* IGPreviewActionProvider_h */
