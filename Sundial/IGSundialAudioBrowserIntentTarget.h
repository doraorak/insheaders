//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGSundialAudioBrowserIntentTarget_h
#define IGSundialAudioBrowserIntentTarget_h
@import Foundation;

#include "FBIntentTarget-Protocol.h"
#include "IGAsyncTask.h"
#include "IGAudioBrowserLogger-Protocol.h"
#include "IGPartialModalSheetHeightBehavior.h"
#include "IGPartialModalSheetListener-Protocol.h"

@class NSString;
@protocol IGSundialAudioBrowserViewControllerDelegate;

@interface IGSundialAudioBrowserIntentTarget : NSObject<FBIntentTarget>

@property (readonly, nonatomic) IGAsyncTask *catalogRequest;
@property (readonly, nonatomic) NSObject<IGAudioBrowserLogger> *audioLogger;
@property (readonly, nonatomic) NSObject<IGSundialAudioBrowserViewControllerDelegate> *delegate;
@property (readonly, nonatomic) long long filteredTypes;
@property (readonly, nonatomic) BOOL isInPartialModalSheet;
@property (readonly, nonatomic) IGPartialModalSheetHeightBehavior *partialModalSheetHeightBehavior;
@property (readonly, nonatomic) NSObject<IGPartialModalSheetListener> *partialModalSheetListener;
@property (readonly, nonatomic) BOOL themeAdaptsToUserInterfaceStyle;
@property (readonly, nonatomic) NSString *prefilledMusicSearchText;
@property (readonly, nonatomic) BOOL shouldAddDelegateAsDisposableObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCatalogRequest:(id)request audioLogger:(id)logger delegate:(id)delegate filteredTypes:(long long)types isInPartialModalSheet:(BOOL)sheet partialModalSheetHeightBehavior:(id)behavior partialModalSheetListener:(id)listener themeAdaptsToUserInterfaceStyle:(BOOL)style prefilledMusicSearchText:(id)text shouldAddDelegateAsDisposableObject:(BOOL)object;
@end

#endif /* IGSundialAudioBrowserIntentTarget_h */
