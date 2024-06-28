//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBAutoupdaterUpdateCheckConfig_h
#define FBAutoupdaterUpdateCheckConfig_h
@import Foundation;

@interface FBAutoupdaterUpdateCheckConfig : NSObject {
  /* instance variables */
  BOOL _useNewCheckMechanism;
  double _checkIntervalHours;
  double _minimumDownloadIntervalHours;
  double _maximumNonCellularDownloadIntervalHours;
  double _maximumNoUpdateSinceAppBuildTimeIntervalHours;
}

@end

#endif /* FBAutoupdaterUpdateCheckConfig_h */
