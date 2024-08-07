//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC13ImagineEditor30MAIImagineCreateViewController_h
#define _TtC13ImagineEditor30MAIImagineCreateViewController_h
@import Foundation;

#include "UIViewController.h"
#include "_TtP18MAIImagineEditTask26MAIImagineEditTaskDelegate_-Protocol.h"

@interface _TtC13ImagineEditor30MAIImagineCreateViewController : UIViewController<_TtP18MAIImagineEditTask26MAIImagineEditTaskDelegate_> { // (Swift)
  /* instance variables */
   coordinator;
   context;
   task;
   flashQueueManager;
   networking;
   $__lazy_storage_$_editorView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)imagineEditTask:(id)task didFinishWithImageAt:(id)at;
- (void)imagineEditTaskDidCancel:(id)cancel;
- (id)initWithNibName:(id)name bundle:(id)bundle;
@end

#endif /* _TtC13ImagineEditor30MAIImagineCreateViewController_h */
