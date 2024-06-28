//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFStitchQualityManager_h
#define FNFStitchQualityManager_h
@import Foundation;

#include "FNFDashQualityManager.h"
#include "FNFDashQualitySelectorCreating-Protocol.h"
#include "FNFStitchContext.h"

@class NSString;

@interface FNFStitchQualityManager : NSObject<FNFDashQualitySelectorCreating> {
  /* instance variables */
  FNFStitchContext *_stitchContext;
  FNFDashQualityManager *_dashQualityManager;
  BOOL _isLive;
  BOOL _isPrefetch;
  BOOL _isLatencySensitiveBroadcast;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStitchContext:(id)context isLive:(BOOL)live isPrefetch:(BOOL)prefetch isLatencySensitiveBroadcast:(BOOL)broadcast;
- (id)createQualitySelectorWithConfig:(struct FNFDashConfig { struct FNFDashConfigGen { BOOL x0; long long x1; double x2; double x3; double x4; double x5; BOOL x6; double x7; double x8; double x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; double x18; long long x19; double x20; double x21; double x22; double x23; double x24; double x25; long long x26; BOOL x27; long long x28; double x29; double x30; BOOL x31; BOOL x32; long long x33; BOOL x34; double x35; long long x36; long long x37; long long x38; long long x39; long long x40; BOOL x41; BOOL x42; BOOL x43; long long x44; BOOL x45; BOOL x46; double x47; long long x48; double x49; double x50; double x51; double x52; double x53; BOOL x54; BOOL x55; BOOL x56; BOOL x57; BOOL x58; BOOL x59; BOOL x60; BOOL x61; BOOL x62; BOOL x63; BOOL x64; long long x65; long long x66; long long x67; long long x68; long long x69; long long x70; long long x71; long long x72; long long x73; double x74; BOOL x75; double x76; BOOL x77; long long x78; double x79; long long x80; double x81; double x82; double x83; double x84; double x85; double x86; double x87; double x88; double x89; double x90; double x91; double x92; double x93; double x94; double x95; double x96; double x97; BOOL x98; double x99; double x100; double x101; long long x102; BOOL x103; BOOL x104; double x105; double x106; BOOL x107; } x0; long long x1[5] double x2; double x3; double x4; double x5; double x6; BOOL x7; int x8; int x9; BOOL x10; BOOL x11; int x12; int x13; int x14; double x15; BOOL x16; int x17; int x18; int x19; int x20; double x21; double x22; double x23; int x24; int x25; int x26; int x27; int x28; double x29; BOOL x30; double x31; BOOL x32; BOOL x33; BOOL x34; long long x35; BOOL x36; double x37; double x38; double x39; double x40; int x41; double x42; BOOL x43; long long x44; BOOL x45; long long x46; double x47; double x48; double x49; double x50; BOOL x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; double x63; double x64; double x65; double x66; double x67; double x68; double x69; double x70; double x71; double x72; double x73; double x74; double x75; double x76; double x77; double x78; double x79; double x80; double x81; double x82; long long x83; long long x84; double x85; int x86; int x87; int x88; int x89; int x90; int x91; int x92; int x93; int x94; int x95; int x96; int x97; int x98; int x99; double x100; BOOL x101; double x102; double x103; double x104; double x105; double x106; BOOL x107; BOOL x108; BOOL x109; double x110; int x111; BOOL x112; double x113; BOOL x114; int x115; BOOL x116; BOOL x117; int x118; int x119; BOOL x120; BOOL x121; BOOL x122; BOOL x123; BOOL x124; BOOL x125; double x126; long long x127; int x128; double x129; double x130; double x131; double x132; double x133; double x134; double x135; double x136; double x137; double x138; double x139; double x140; BOOL x141; double x142; double x143; BOOL x144; double x145; BOOL x146; BOOL x147; long long x148; int x149; int x150; int x151; int x152; BOOL x153; BOOL x154; BOOL x155; BOOL x156; BOOL x157; BOOL x158; BOOL x159; BOOL x160; int x161; BOOL x162; BOOL x163; BOOL x164; BOOL x165; BOOL x166; BOOL x167; BOOL x168; BOOL x169; long long x170; long long x171; long long x172; BOOL x173; BOOL x174; BOOL x175; int x176; int x177; BOOL x178; BOOL x179; BOOL x180; BOOL x181; BOOL x182; BOOL x183; BOOL x184; BOOL x185; BOOL x186; BOOL x187; BOOL x188; })config playlist:(id)playlist resourceLoader:(id)loader bandwidthProvider:(id)provider playerMetadata:(id)metadata trackType:(long long)type logger:(id)logger;
@end

#endif /* FNFStitchQualityManager_h */
