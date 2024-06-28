//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMusicOnProfileSettingsAddProfileSongSectionController_h
#define IGMusicOnProfileSettingsAddProfileSongSectionController_h
@import Foundation;

#include "IGListSectionController.h"
#include "IGAudioModelProtocol-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;
@protocol IGMusicOnProfileSettingsAddProfileSongSectionControllerDelegate;

@interface IGMusicOnProfileSettingsAddProfileSongSectionController : IGListSectionController<NSObject>

@property (retain, nonatomic) NSObject<IGAudioModelProtocol> *selectedAudio;
@property (weak, nonatomic) NSObject<IGMusicOnProfileSettingsAddProfileSongSectionControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)didUpdateToObject:(id)object;
- (long long)numberOfItems;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)index;
- (id)cellForItemAtIndex:(long long)index;
- (void)musicOnProfileSettingsAddProfileSongCellDidTapRemoveSong:(id)song;
- (void)musicOnProfileSettingsAddProfileSongCellShouldPresentAudioBrowser:(id)browser;
@end

#endif /* IGMusicOnProfileSettingsAddProfileSongSectionController_h */