//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGGenericSurveyQuestionListSectionController_h
#define IGGenericSurveyQuestionListSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGGenericSurveyAlertAssistant.h"
#include "IGGenericSurveyAnswerListCollectionDataSource.h"
#include "IGGenericSurveyAnswerListCollectionSectionController.h"
#include "IGGenericSurveyQuestionTitleListSectionController.h"
#include "IGGenericSurveyQuestionTitlesDataSource.h"
#include "IGGenericSurveyResult.h"
#include "IGGenericSurveyTapCTAContext.h"
#include "IGKeyboardObserverHideDelegate-Protocol.h"
#include "IGKeyboardObserverShowDelegate-Protocol.h"
#include "IGListAdapterDataSource-Protocol.h"
#include "IGListDisplayDelegate-Protocol.h"

@class IGGenericSurveyQuestionList, IGKeyboardObserver, IGListAdapter, NSArray, NSMutableDictionary, NSString, UICollectionView;
@protocol IGGenericSurveyQuestionListSectionControllerDelegate;

@interface IGGenericSurveyQuestionListSectionController : IGListSectionController<IGKeyboardObserverHideDelegate, IGKeyboardObserverShowDelegate, IGListAdapterDataSource, IGListDisplayDelegate> {
  /* instance variables */
  IGListAdapter *_listAdapter;
  UICollectionView *_collectionView;
  unsigned long long _surveyType;
  IGGenericSurveyQuestionList *_questionList;
  NSArray *_items;
  long long _currentIndex;
  long long _maxSeenIndex;
  long long _tapCTAFirstMaxSeenIndex;
  IGGenericSurveyQuestionTitlesDataSource *_questionTitlesDataSource;
  IGGenericSurveyAnswerListCollectionDataSource *_answerListCollectionDataSource;
  IGGenericSurveyQuestionTitleListSectionController *_questionTitleListSectionController;
  IGGenericSurveyAnswerListCollectionSectionController *_answerListCollectionSectionController;
  IGKeyboardObserver *_keyboardObserver;
  IGGenericSurveyAlertAssistant *_alertAssistant;
  NSMutableDictionary *_results;
  IGGenericSurveyTapCTAContext *_tapCTAContext;
  IGGenericSurveyResult *_currentResult;
}

@property (weak, nonatomic) NSObject<IGGenericSurveyQuestionListSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAlertAssistant:(id)assistant tapCTAContext:(id)ctacontext surveyType:(unsigned long long)type;
- (void)dealloc;
- (void)didUpdateToObject:(id)object;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (id)objectsForListAdapter:(id)adapter;
- (id)listAdapter:(id)adapter sectionControllerForObject:(id)object;
- (id)emptyViewForListAdapter:(id)adapter;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)genericSurveyQuestionTitleListSectionControllerDidTapOnForwardButton:(id)button;
- (void)genericSurveyQuestionTitleListSectionControllerDidTapOnBackButton:(id)button;
- (void)genericSurveyAnswerListCollectionSectionController:(id)controller didCompleteWithAnswers:(id)answers;
- (BOOL)genericSurveyAnswerListCollectionSectionControllerIsSubmitButtonEnabled:(id)enabled;
- (void)keyboardObserver:(id)observer keyboardWillShowWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidShow:(id)show;
- (void)keyboardObserver:(id)observer keyboardWillHideWithBeginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame endFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame duration:(double)duration curve:(long long)curve;
- (void)keyboardObserverKeyboardDidHide:(id)hide;
- (void)genericSurveyTapCTAContextDidReceiveTappingEvent;
- (void)_keyboardWillShow:(BOOL)show;
@end

#endif /* IGGenericSurveyQuestionListSectionController_h */
