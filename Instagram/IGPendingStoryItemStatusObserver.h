//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPendingStoryItemStatusObserver_h
#define IGPendingStoryItemStatusObserver_h
@import Foundation;

#include "IGPendingStoryItemStatusDelegate-Protocol.h"
#include "IGPostShareListener-Protocol.h"
#include "IGStoryOwnerType-Protocol.h"

@class NSDictionary, NSString;

@interface IGPendingStoryItemStatusObserver : NSObject<IGPostShareListener> {
  /* instance variables */
  NSString *_shareID;
}

@property (retain, nonatomic) NSString *uploadID;
@property (retain, nonatomic) NSString *customErrorMessage;
@property (retain, nonatomic) NSString *errorIdentifier;
@property (nonatomic) unsigned long long status;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long failedReason;
@property (retain, nonatomic) NSObject<IGStoryOwnerType> *reelOwner;
@property (retain, nonatomic) NSDictionary *serverResponse;
@property (weak, nonatomic) NSObject<IGPendingStoryItemStatusDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)postShare:(id)share didUpdateProgress:(double)progress;
- (void)postShare:(id)share didUpdateStatus:(long long)status serverResponse:(id)response;
- (void)postShare:(id)share didRenderVideoAtURL:(id)url;
- (void)postShareDidSuspendVideoProcessing:(id)processing;
@end

#endif /* IGPendingStoryItemStatusObserver_h */