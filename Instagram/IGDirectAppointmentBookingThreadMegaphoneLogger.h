//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectAppointmentBookingThreadMegaphoneLogger_h
#define IGDirectAppointmentBookingThreadMegaphoneLogger_h
@import Foundation;

#include "IGAnalyticsEventLoggingProtocol-Protocol.h"
#include "IGDirectAppointmentBookingThreadMegaphoneDataProvider.h"
#include "IGGenericMegaphoneLogger-Protocol.h"

@class NSString;

@interface IGDirectAppointmentBookingThreadMegaphoneLogger : NSObject<IGGenericMegaphoneLogger> {
  /* instance variables */
  IGDirectAppointmentBookingThreadMegaphoneDataProvider *_dataProvider;
  NSObject<IGAnalyticsEventLoggingProtocol> *_analyticsLogger;
  NSString *_consumerId;
  NSString *_businessId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataProvider:(id)provider userSession:(id)session consumerId:(id)id;
- (void)logMegaphoneWasSeen:(id)seen;
- (void)logMegaphoneDismissed:(id)dismissed;
- (void)logMegaphoneButtonTapped:(id)tapped onButton:(id)button;
@end

#endif /* IGDirectAppointmentBookingThreadMegaphoneLogger_h */