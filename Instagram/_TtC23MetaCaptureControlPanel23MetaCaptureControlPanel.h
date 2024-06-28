//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC23MetaCaptureControlPanel23MetaCaptureControlPanel_h
#define _TtC23MetaCaptureControlPanel23MetaCaptureControlPanel_h
@import Foundation;

@interface _TtC23MetaCaptureControlPanel23MetaCaptureControlPanel : NSObject { // (Swift)
  /* instance variables */
   levers;
   leversByPullTime;
   cooldownToRelease;
   cooldownToPull;
   memoryWarningTracker;
   systemPressureLevel;
   frameDropTracker;
}

/* instance methods */
- (id)debugInformation;
- (void)frameDropped;
- (void)frameNotDropped;
- (void)systemPressureChangedWithSystemPressureLevel:(id)level;
- (void)memoryWarningOccurredWithDate:(id)date;
- (void)pullOrReleaseLeversIfNeededWithDate:(id)date;
- (id)init;
@end

#endif /* _TtC23MetaCaptureControlPanel23MetaCaptureControlPanel_h */
