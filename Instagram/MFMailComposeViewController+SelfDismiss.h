//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef MFMailComposeViewController_SelfDismiss_h
#define MFMailComposeViewController_SelfDismiss_h
@import Foundation;

@interface MFMailComposeViewController (SelfDismiss) <MFMailComposeViewControllerDelegate>
/* instance methods */
- (void)mailComposeController:(id)controller didFinishWithResult:(long long)result error:(id)error;
@end

#endif /* MFMailComposeViewController_SelfDismiss_h */