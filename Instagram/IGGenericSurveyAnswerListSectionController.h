//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGenericSurveyAnswerListSectionController_h
#define IGGenericSurveyAnswerListSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGGenericSurveyAlertAssistant.h"
#include "IGGenericSurveyAnswerContext.h"
#include "IGGenericSurveyTapCTAContext.h"
#include "NSObject-Protocol.h"

@class NSArray, NSSet, NSString;
@protocol IGGenericSurveyAnswerListSectionControllerDelegate;

@interface IGGenericSurveyAnswerListSectionController : IGListSectionController<NSObject> {
  /* instance variables */
  NSObject<IGGenericSurveyAnswerListSectionControllerDelegate> *_delegate;
  IGGenericSurveyAlertAssistant *_alertAssistant;
  IGGenericSurveyAnswerContext *_context;
  NSArray *_cellTypeList;
  NSSet *_selectionSet;
  NSString *_textResponse;
  IGGenericSurveyTapCTAContext *_tapCTAContext;
  unsigned long long _surveyType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_surveyCellTypeClassMap;

/* instance methods */
- (id)initWithDelegate:(id)delegate alertAssistant:(id)assistant surveyType:(unsigned long long)type tapCTAContext:(id)ctacontext;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)genericSurveyAnswerListCell:(id)cell didChangeSelection:(id)selection;
- (void)genericSurveyTextViewDidEndEditing:(id)editing;
- (BOOL)genericSurveyTextView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)genericSurveyButtonCellDidTap;
- (void)_dismissKeyboard;
@end

#endif /* IGGenericSurveyAnswerListSectionController_h */