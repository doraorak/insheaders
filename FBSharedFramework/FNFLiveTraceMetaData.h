//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FNFLiveTraceMetaData_h
#define FNFLiveTraceMetaData_h
@import Foundation;

@class NSDictionary, NSNumber, NSString;

@interface FNFLiveTraceMetaData : NSObject {
  /* instance variables */
  NSNumber *_eventCreationTime;
  NSString *_parentSource;
  NSDictionary *_extraMetadata;
}

@property (copy, nonatomic) NSString *streamId;
@property (nonatomic) int streamType;
@property (nonatomic) unsigned int traceId;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSNumber *eventId;
@property (copy, nonatomic) NSString *severity;
@property (copy, nonatomic) NSString *eventName;

/* instance methods */
@end

#endif /* FNFLiveTraceMetaData_h */
