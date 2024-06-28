//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioBrowserArtistSpotlightBannerSectionController_h
#define IGAudioBrowserArtistSpotlightBannerSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGAudioBrowserLogger-Protocol.h"
#include "IGAudioMusicTrack.h"
#include "IGListDisplayDelegate-Protocol.h"
#include "IGUserSession.h"

@class NSString;
@protocol IGAudioBrowserArtistSpotlightBannerSectionControllerDelegate;

@interface IGAudioBrowserArtistSpotlightBannerSectionController : IGListSectionController<IGListDisplayDelegate> {
  /* instance variables */
  IGUserSession *_userSession;
}

@property (weak, nonatomic) NSObject<IGAudioBrowserArtistSpotlightBannerSectionControllerDelegate> *delegate;
@property (retain, nonatomic) NSObject<IGAudioBrowserLogger> *logger;
@property (retain, nonatomic) IGAudioMusicTrack *track;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session logger:(id)logger;
- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (id)cellForItemAtIndex:(long long)index;
- (void)didUpdateToObject:(id)object;
- (void)didSelectItemAtIndex:(long long)index;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller cell:(id)cell atIndex:(long long)index;
- (void)listAdapter:(id)adapter willDisplaySectionController:(id)controller;
- (void)listAdapter:(id)adapter didEndDisplayingSectionController:(id)controller;
@end

#endif /* IGAudioBrowserArtistSpotlightBannerSectionController_h */