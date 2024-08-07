//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBBloksImagePickerDelegate_h
#define FBBloksImagePickerDelegate_h
@import Foundation;

#include "UIImagePickerControllerDelegate-Protocol.h"
#include "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface FBBloksImagePickerDelegate : NSObject<UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
  /* instance variables */
  id /* block */ _onSelect;
  id /* block */ _onFailure;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initOnSelectLocal:(id /* block */)local onFailure:(id /* block */)failure;
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)cancel;
@end

#endif /* FBBloksImagePickerDelegate_h */
