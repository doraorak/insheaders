//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryMediaCompositionUploadValidatorLog_h
#define IGStoryMediaCompositionUploadValidatorLog_h
@import Foundation;

@class NSDate;

@interface IGStoryMediaCompositionUploadValidatorLog : NSObject

@property (readonly, nonatomic) long long event;
@property (readonly, nonatomic) NSDate *date;

/* instance methods */
- (id)initWithEvent:(long long)event date:(id)date;
- (id)description;
@end

#endif /* IGStoryMediaCompositionUploadValidatorLog_h */