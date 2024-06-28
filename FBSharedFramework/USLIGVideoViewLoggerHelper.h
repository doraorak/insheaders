//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef USLIGVideoViewLoggerHelper_h
#define USLIGVideoViewLoggerHelper_h
@import Foundation;

#include "IGUserSession.h"

@interface USLIGVideoViewLoggerHelper : NSObject {
  /* instance variables */
  IGUserSession *_userSession;
}

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)logVideoViewedUSLEventWithAnalyticsEvent:(id)event uslLoggingFailedBlock:(id /* block */)block;
- (struct VideoViewedTimeEvent { int x0; long long x1; id x2; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x3; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x4; id x5; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x6; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x7; id x8; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x9; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x10; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x11; id x12; id x13; id x14; id x15; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x16; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x17; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x18; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x19; id x20; id x21; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x22; id x23; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x24; id x25; id x26; id x27; id x28; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x29; id x30; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x31; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x32; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x33; double x34; double x35; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x36; id x37; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x38; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x39; id x40; id x41; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x42; id x43; id x44; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x45; id x46; id x47; id x48; BOOL x49; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x50; id x51; long long x52; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x53; id x54; id x55; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x56; double x57; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x58; id x59; id x60; id x61; id x62; id x63; id x64; id x65; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x66; id x67; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x68; id x69; })_generateVideoViewedTimeEventWithAnalyticsEvent:(id)event;
- (struct VideoFullViewedTimeEvent { int x0; long long x1; id x2; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x3; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x4; id x5; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x6; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x7; id x8; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x9; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x10; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x11; id x12; id x13; id x14; id x15; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x16; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x17; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x18; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x19; id x20; id x21; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x22; id x23; id x24; id x25; id x26; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x27; id x28; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x29; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x30; struct optional<bool> { union { char x0; BOOL x1; } x0; BOOL x1; } x31; double x32; double x33; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x34; id x35; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x36; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x37; id x38; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x39; id x40; id x41; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x42; id x43; id x44; id x45; BOOL x46; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x47; id x48; long long x49; id x50; id x51; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x52; double x53; struct optional<double> { union { char x0; double x1; } x0; BOOL x1; } x54; id x55; id x56; id x57; id x58; id x59; id x60; id x61; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x62; id x63; struct optional<long long> { union { char x0; long long x1; } x0; BOOL x1; } x64; id x65; })_generateVideoFullViewedTimeEventWithAnalyticsEvent:(id)event;
@end

#endif /* USLIGVideoViewLoggerHelper_h */