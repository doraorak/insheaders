//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectVideoMessageViewModel_Initializers_h
#define IGDirectVideoMessageViewModel_Initializers_h
@import Foundation;

@interface IGDirectVideoMessageViewModel (Initializers)
/* instance methods */
- (id)initWithVideoMessage:(id)message messageCellViewModel:(id)model imageURL:(id)url cacheKey:(id)key isInteropThread:(BOOL)thread shouldBlurMedia:(BOOL)media shouldUseMaxCellWidth:(BOOL)width hasSensitiveMediaRevealed:(BOOL)revealed previewImageSpecifier:(id)specifier launcherSetProvider:(id)provider;
- (id)initWithVideo:(id)video previewPhoto:(id)photo previewImage:(id)image previewImageSize:(struct CGSize { double x0; double x1; })size messageMetadata:(id)metadata messageCellViewModel:(id)model imageURL:(id)url cacheKey:(id)key isInteropThread:(BOOL)thread supportsAggregatedMediaViewerLazy:(id)lazy shouldBlurMedia:(BOOL)media launcherSetProvider:(id)provider;
@end

#endif /* IGDirectVideoMessageViewModel_Initializers_h */