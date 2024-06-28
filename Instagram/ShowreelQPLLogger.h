//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ShowreelQPLLogger_h
#define ShowreelQPLLogger_h
@import Foundation;

#include "ShowreelLoggingEventManager.h"
#include "ShowreelLoggingListenerAnnouncer.h"
#include "ShowreelQPLSession.h"

@class NSDictionary;
@protocol ShowreelLoggingListener;

@interface ShowreelQPLLogger : NSObject {
  /* instance variables */
  int _markerId;
  int _markerInstanceId;
  NSDictionary *_commonMarkerAnnotationDict;
  NSDictionary *_extraMarkerAnnotationDict;
  ShowreelLoggingEventManager *_loggingEventManager;
  NSObject<ShowreelLoggingListener> *_loggingListener;
  ShowreelLoggingListenerAnnouncer *_loggingAnnouncer;
  ShowreelQPLSession *_qplSession;
  BOOL _separatePointDataIntoColumns;
  BOOL _isSafeQueueEnabled;
}

/* instance methods */
- (id)initWithMarkerId:(int)id commonInfo:(id)info customInfo:(id)info;
- (id)initWithMarkerId:(int)id commonInfo:(id)info customInfo:(id)info qplSession:(id)session;
- (void)endLoggingWithAction:(unsigned long long)action;
@end

#endif /* ShowreelQPLLogger_h */