//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef NSDictionary_EXIF_h
#define NSDictionary_EXIF_h
@import Foundation;

@interface NSDictionary (EXIF)
/* instance methods */
- (id)ig_uploadMetadata;
- (id)_locationInfo;
- (id)_copyright;
- (id)ig_captureMetadata;
- (id)ig_isoValues;
- (long long)ig_imageOrientation;
- (double)ig_pixelHeight;
- (double)ig_pixelWidth;
- (struct CGSize { double x0; double x1; })ig_imageSize;
- (id)ig_location;
- (id)ig_userComment;
- (id)ig_software;
- (double)ig_deviceAngle;
- (id)ig_AREffectID;
- (id)ig_AREffectProductID;
- (id)ig_AREffectMerchantID;
- (long long)ig_cameraPosition;
- (id)ig_lensModel;
- (id)ig_lensMake;
- (long long)ig_flashState;
- (id)ig_dateTimeOriginal;
- (id)ig_dateTimeDigitized;
- (id)ig_sceneCaptureType;
- (id)ig_sceneType;
- (void)_setValueFromExifKey:(const struct __CFString *)key asValueForKey:(id)key inDictionary:(id)dictionary;
- (void)_setValueFromIptcKey:(const struct __CFString *)key asValueForKey:(id)key inDictionary:(id)dictionary;
@end

#endif /* NSDictionary_EXIF_h */