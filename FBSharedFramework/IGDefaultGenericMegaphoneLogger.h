//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDefaultGenericMegaphoneLogger_h
#define IGDefaultGenericMegaphoneLogger_h
@import Foundation;

#include "IGGenericMegaphoneLogger-Protocol.h"
#include "IGUserSession.h"

@class NSString;

@interface IGDefaultGenericMegaphoneLogger : NSObject<IGGenericMegaphoneLogger>

@property (nonatomic) unsigned long long displaySource;
@property (nonatomic) BOOL seen;
@property (readonly, nonatomic) IGUserSession *userSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUserSession:(id)session displaySource:(unsigned long long)source;
- (id)getLogRequestBuilderWithMegaphoneType:(id)type action:(id)action displaySourceString:(id)string reason:(id)reason;
- (void)logMegaphoneWasSeen:(id)seen;
- (void)logMegaphoneDismissed:(id)dismissed;
- (void)logMegaphoneButtonTapped:(id)tapped onButton:(id)button;
@end

#endif /* IGDefaultGenericMegaphoneLogger_h */
