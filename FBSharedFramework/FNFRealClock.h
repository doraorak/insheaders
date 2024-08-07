//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFRealClock_h
#define FNFRealClock_h
@import Foundation;

#include "FNFClock-Protocol.h"

@class NSMutableArray, NSString;

@interface FNFRealClock : NSObject<FNFClock> {
  /* instance variables */
  struct OpaqueCMClock * _audioDeviceClock;
  struct OpaqueCMTimebase * _controlTimebase;
  NSMutableArray *_timeObservers;
  float _playRate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithShouldCreateTimebase:(BOOL)timebase playerConfig:(struct { struct FNFPlayerConfigGen { long long x0; BOOL x1; BOOL x2; } x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; int x5; BOOL x6; BOOL x7; unsigned int x8; double x9; BOOL x10; BOOL x11; BOOL x12; int x13; unsigned long long x14; BOOL x15; int x16; int x17; double x18; long long x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; BOOL x24; double x25; int x26; BOOL x27; BOOL x28; BOOL x29; double x30; int x31; struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } x32; BOOL x33; double x34; int x35; unsigned int x36; BOOL x37; BOOL x38; BOOL x39; int x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; double x45; BOOL x46; BOOL x47; BOOL x48; int x49; double x50; BOOL x51; BOOL x52; int x53; double x54; double x55; int x56; BOOL x57; BOOL x58; int x59; int x60; int x61; int x62; int x63; BOOL x64; BOOL x65; BOOL x66; int x67; BOOL x68; BOOL x69; BOOL x70; BOOL x71; int x72; BOOL x73; BOOL x74; BOOL x75; BOOL x76; unsigned long long x77; double x78; BOOL x79; BOOL x80; BOOL x81; double x82; BOOL x83; BOOL x84; BOOL x85; })config;
- (BOOL)_initTimebase;
- (void)initTimebase;
- (id)createTimeObserverWithInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })interval block:(id /* block */)block fireOnceAtExactTime:(BOOL)time followMasterClock:(BOOL)clock;
- (BOOL)addTimeObserver:(id)observer;
- (void)resume;
- (void)pause;
- (void)set:(struct { long long x0; int x1; unsigned int x2; long long x3; })set;
- (void)setRate:(float)rate;
- (float)currentPlayRate;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)_dispatchSourceFiredForTimeObserver:(id)observer;
- (void)dealloc;
- (void)resumeTimeObserver:(id)observer;
- (void)suspendTimeObserver:(id)observer;
- (void)removeTimeObserver:(id)observer;
- (void)removeTimeObserverInternal:(id)internal;
- (void)flushTimeObserver:(id)observer;
- (id)observers;
- (void)removeAllTimeObservers;
- (void)syncWithLayer:(id)layer;
- (void)_updateNextFireTimeForObserver:(id)observer;
- (struct OpaqueCMClock *)deviceAudioClock;
- (id)renderSynchronizer;
@end

#endif /* FNFRealClock_h */
