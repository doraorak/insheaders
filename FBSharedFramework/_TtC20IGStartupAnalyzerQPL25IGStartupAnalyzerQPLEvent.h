//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGStartupAnalyzerQPL25IGStartupAnalyzerQPLEvent_h
#define _TtC20IGStartupAnalyzerQPL25IGStartupAnalyzerQPLEvent_h
@import Foundation;

#include "_TtP20IGStartupAnalyzerQPL28IGStartupAnalyzerQPLProtocol_-Protocol.h"

@interface _TtC20IGStartupAnalyzerQPL25IGStartupAnalyzerQPLEvent : NSObject<_TtP20IGStartupAnalyzerQPL28IGStartupAnalyzerQPLProtocol_> { // (Swift)
  /* instance variables */
   state;
}

@property (nonatomic, readonly) int qplModule;
@property (nonatomic, readonly) int instanceKey;
@property (nonatomic, readonly) BOOL isActive;

/* instance methods */
- (id)initWithQplModule:(int)module;
- (void)startWithQplTime:(long long)time;
- (void)endWithActionId:(short)id qplTime:(long long)time;
- (void)markPointWithName:(id)name;
- (void)markPointWithName:(id)name qplTimestamp:(long long)timestamp;
- (void)markPointWithName:(id)name annotations:(id)annotations;
- (void)markPointWithName:(id)name qplTimestamp:(long long)timestamp annotations:(id)annotations;
- (void)markPointWithName:(id)name dataString:(id)string;
- (void)markPointWithName:(id)name qplTimestamp:(long long)timestamp dataString:(id)string;
- (void)markAnnotationKey:(id)key stringValue:(id)value;
- (void)markAnnotationKey:(id)key annotationBool:(BOOL)bool;
- (void)markAnnotationKey:(id)key annotationInt:(long long)int;
- (void)markAnnotationKey:(id)key annotationDouble:(double)double;
- (void)markAnnotations:(id /* block */)annotations;
- (id)init;
@end

#endif /* _TtC20IGStartupAnalyzerQPL25IGStartupAnalyzerQPLEvent_h */