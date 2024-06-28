//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuickCamOutputPhotoAsset_h
#define IGQuickCamOutputPhotoAsset_h
@import Foundation;

@class NSArray, NSDictionary, NSString, UIImage;

@interface IGQuickCamOutputPhotoAsset : NSObject {
  /* instance variables */
  NSArray *_extraAudioClips;
}

@property (retain, nonatomic) UIImage *originalImage;
@property (retain, nonatomic) UIImage *fullSizeImageWithEdits;
@property (retain, nonatomic) UIImage *croppedImageWithEdits;
@property (nonatomic) struct CGSize { double x0; double x1; } originalMediaSize;
@property (nonatomic) long long assetSource;
@property (copy, nonatomic) NSString *sourceApplication;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSString *assetFileName;
@property (nonatomic) long long devicePosition;

/* instance methods */
@end

#endif /* IGQuickCamOutputPhotoAsset_h */