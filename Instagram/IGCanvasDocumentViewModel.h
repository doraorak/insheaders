//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCanvasDocumentViewModel_h
#define IGCanvasDocumentViewModel_h
@import Foundation;

#include "IGCanvasDocument.h"
#include "IGCanvasFooterViewModel.h"
#include "IGCanvasHeaderViewModel.h"
#include "IGCanvasSwipeUpViewModel.h"

@class NSArray;

@interface IGCanvasDocumentViewModel : NSObject {
  /* instance variables */
  IGCanvasHeaderViewModel *_headerViewModel;
  IGCanvasFooterViewModel *_footerViewModel;
  IGCanvasSwipeUpViewModel *_swipeUpViewModel;
  BOOL _audioDetected;
}

@property (readonly, copy, nonatomic) NSArray *viewModels;
@property (readonly, nonatomic) IGCanvasDocument *document;

/* instance methods */
- (id)initWithDocument:(id)document module:(id)module;
- (id)headerViewModel;
- (id)footerViewModel;
@end

#endif /* IGCanvasDocumentViewModel_h */
