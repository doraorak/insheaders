//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC28IGXpostingUpsellPresentation20BottomSheetPresenter_IGXpostingUpsellPresentation1_h
#define _TtC28IGXpostingUpsellPresentation20BottomSheetPresenter_IGXpostingUpsellPresentation1_h
@import Foundation;

@interface _TtC28IGXpostingUpsellPresentation20BottomSheetPresenter (IGXpostingUpsellPresentation1) <IGPartialModalSheetListener>
/* instance methods */
- (void)partialModalSheet:(id)sheet willChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didChangeState:(unsigned long long)state;
- (void)partialModalSheet:(id)sheet didUpdateOffset:(double)offset presentationProgress:(double)progress;
- (void)partialModalSheetDidDismiss:(id)dismiss;
@end

#endif /* _TtC28IGXpostingUpsellPresentation20BottomSheetPresenter_IGXpostingUpsellPresentation1_h */
