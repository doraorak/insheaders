//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLocationPickerDelegate_Protocol_h
#define IGLocationPickerDelegate_Protocol_h
@import Foundation;

@protocol IGLocationPickerDelegate <NSObject>
/* instance methods */
- (void)locationPickerViewController:(id)controller didFinish:(BOOL)finish withLocation:(id)location;
- (void)locationPickerViewController:(id)controller didFinish:(BOOL)finish withCustomLocation:(id)location;
- (void)locationPickerViewControllerDidTapRemoveLocation:(id)location;
@end

#endif /* IGLocationPickerDelegate_Protocol_h */
