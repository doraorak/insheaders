//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGActionableConfirmationToastConfig_h
#define IGActionableConfirmationToastConfig_h
@import Foundation;

#include "IGActionableConfirmationToastConfigType-Protocol.h"
#include "IGActionableConfirmationToastPresentationContext.h"
#include "IGActionableConfirmationToastViewModel.h"

@class NSString;

@interface IGActionableConfirmationToastConfig : NSObject<IGActionableConfirmationToastConfigType> {
  /* instance variables */
  id /* block */ _tapActionBlock;
  id /* block */ _tapToastBlock;
  id /* block */ _presentedHandler;
  id /* block */ _dismissedHandler;
}

@property (readonly, nonatomic) IGActionableConfirmationToastViewModel *viewModel;
@property (readonly, nonatomic) IGActionableConfirmationToastPresentationContext *presentationContext;
@property (readonly, nonatomic) BOOL isAnimated;
@property (readonly, nonatomic) double animationDuration;
@property (readonly, nonatomic) unsigned long long uploadStatus;
@property (readonly, nonatomic) unsigned long long origin;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long toastType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewModel:(id)model presentationContext:(id)context isAnimated:(BOOL)animated animationDuration:(double)duration tapActionBlock:(id /* block */)block tapToastBlock:(id /* block */)block presentedHandler:(id /* block */)handler dismissedHandler:(id /* block */)handler uploadStatus:(unsigned long long)status toastType:(unsigned long long)type origin:(unsigned long long)origin;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGActionableConfirmationToastConfig_h */