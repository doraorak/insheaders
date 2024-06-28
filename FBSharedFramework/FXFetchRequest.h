//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FXFetchRequest_h
#define FXFetchRequest_h
@import Foundation;

#include "FXAccessLibraryLogData.h"
#include "FXRequestDebuggable-Protocol.h"
#include "FXRequestProtocol-Protocol.h"
#include "FXRequestQueryProtocol-Protocol.h"

@class NSString;

@interface FXFetchRequest : NSObject<FXRequestDebuggable, FXRequestProtocol>

@property (retain, nonatomic) NSString *callerName;
@property (retain, nonatomic) NSString *callerContext;
@property (nonatomic) BOOL skipFetchOwnDataWarning;
@property (nonatomic) BOOL skipOperateCurrentAppRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<FXRequestQueryProtocol> *query;
@property (readonly, nonatomic) FXAccessLibraryLogData *logData;

/* instance methods */
- (id)initWithQuery:(id)query callerName:(id)name callerContext:(id)context;
- (id)initWithQuery:(id)query callerName:(id)name callerContext:(id)context logLocation:(id)location;
@end

#endif /* FXFetchRequest_h */
