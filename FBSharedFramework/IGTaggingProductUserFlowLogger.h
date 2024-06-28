//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTaggingProductUserFlowLogger_h
#define IGTaggingProductUserFlowLogger_h
@import Foundation;

@class NSString;

@interface IGTaggingProductUserFlowLogger : NSObject {
  /* instance variables */
  unsigned long long _userFlowInstanceId;
  NSString *_productTaggingStage;
  BOOL _isProductTaggingStageCreation;
}

/* instance methods */
- (id)initWithUserSession:(id)session productTaggingStage:(id)stage;
@end

#endif /* IGTaggingProductUserFlowLogger_h */
