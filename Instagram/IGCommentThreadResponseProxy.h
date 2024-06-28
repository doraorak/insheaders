//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentThreadResponseProxy_h
#define IGCommentThreadResponseProxy_h
@import Foundation;

#include "IGDebuggableCachedItemProtocol-Protocol.h"
#include "IGLoadMoreResponseType-Protocol.h"
#include "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface IGCommentThreadResponseProxy : NSObject<IGLoadMoreResponseType, NSCoding, IGDebuggableCachedItemProtocol>

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *maxId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)debugResponseProperties;
- (id)debugJSONResponse;
@end

#endif /* IGCommentThreadResponseProxy_h */
