//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGAudioBrowserCameraLogger_h
#define IGAudioBrowserCameraLogger_h
@import Foundation;

#include "IGAudioBrowserLogger-Protocol.h"
#include "IGUserSession.h"

@class NSString;

@interface IGAudioBrowserCameraLogger : NSObject<IGAudioBrowserLogger> {
  /* instance variables */
  IGUserSession *_userSession;
  struct { IGStrictUserFlowLogger *strictLogger; unsigned long long userFlowInstanceId; } _browserOpenLoggerStruct;
  struct { IGStrictUserFlowLogger *strictLogger; unsigned long long userFlowInstanceId; } _searchLoggerStruct;
  double _searchQueryStartTime;
  BOOL _isPrecapture;
  long long _cameraDestination;
  long long _musicBrowserEntryPoint;
  long long _surfaceElement;
}

@property (copy, nonatomic) NSString *compositionID;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *productName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (id)initWithUserSession:(id)session withMusicBrowserEntryPoint:(long long)point;
- (void)logImpressionForAudioTrack:(id)track withContext:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)logPlayForAudioTrack:(id)track withContext:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)logPauseForAudioTrack:(id)track withContext:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)logSelectForAudioTrack:(id)track withContext:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)logSaveTappedForAudioTrack:(id)track withContext:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)logAudioPageActionTappedForAudioTrack:(id)track withContext:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)logSavedAudioTabTapped;
- (void)logImportAudioTabTapped;
- (void)logSearchImpressionForArtistWithId:(id)id name:(id)name context:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)logSearchSelectForArtistWithId:(id)id name:(id)name context:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)logTappedRecentSearchesClearAllConfirm;
- (void)logAudioBrowserOpenWithContext:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)logSectionHeaderSeeMoreTappedWithContext:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context;
- (void)startAudioBrowserOpenPerfLoggingWithCameraDestination:(long long)destination;
- (void)endAudioBrowserOpenPerfLogging;
- (void)cancelAudioBrowserOpenPerfLoggingWithReason:(id)reason;
- (void)failAudioBrowserOpenPerfLoggingWithError:(id)error;
- (BOOL)isAudioBrowserOpenLoggingActive;
- (void)startAudioBrowserSearchPerfLoggingWithContext:(struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; long long x7; long long x8; unsigned long long x9; BOOL x10; })context searchQuery:(id)query cameraDestination:(long long)destination;
- (void)failAudioBrowserSearchPerfLoggingWithError:(id)error searchQuery:(id)query;
- (void)cancelAudioBrowserSearchPerfLoggingWithReason:(id)reason;
- (void)endAudioBrowserSearchPerfLoggingWithSearchQuery:(id)query numberOfSearchResults:(long long)results;
- (BOOL)isSearchPerfLoggingActive;
- (void)logTappedEditorChangeButtonForAudioTrack:(id)track;
- (void)logMusicEditorAlbumIconTap;
- (void)logMusicEditorTrashTap;
- (void)logMusicEditorDoneTap:(id)tap;
- (void)logMusicEditorDoneTapWithCameraTool:(long long)tool;
- (void)logMusicEditorTrackScrub;
- (void)logMusicEditorSelectedLicencedMusicSegment;
@end

#endif /* IGAudioBrowserCameraLogger_h */