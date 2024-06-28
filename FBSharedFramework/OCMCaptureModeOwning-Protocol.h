//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef OCMCaptureModeOwning_Protocol_h
#define OCMCaptureModeOwning_Protocol_h
@import Foundation;

@protocol OCMCaptureModeOwning <OCMComponentProtocol>

@optional
@property (readonly, nonatomic) BOOL supportsBackgroundProcessing;
@optional
@property (readonly, nonatomic) BOOL isRotationLocked;

/* instance methods */
- (id)captureMode;
@optional
/* instance methods */
- (id)previewProvider;
@end

#endif /* OCMCaptureModeOwning_Protocol_h */