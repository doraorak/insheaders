//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtCV12IGWonderwall26IGWonderwallTextEditorView11Coordinator_h
#define _TtCV12IGWonderwall26IGWonderwallTextEditorView11Coordinator_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@interface _TtCV12IGWonderwall26IGWonderwallTextEditorView11Coordinator : NSObject<UITextViewDelegate> { // (Swift)
  /* instance variables */
   parent;
}

/* instance methods */
- (void)textViewDidChange:(id)change;
- (BOOL)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (id)init;
@end

#endif /* _TtCV12IGWonderwall26IGWonderwallTextEditorView11Coordinator_h */
