//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCloudIDValidation_h
#define IGCloudIDValidation_h
@import Foundation;

@class CKRecordID, NSError, NSString;

@interface IGCloudIDValidation : NSObject {
  /* instance variables */
  CKRecordID *_discoveredCloudID;
  NSString *_storedNonce;
  NSError *_failedWithError;
}

@property (copy) id /* block */ completionBlock;
@property long long status;

/* instance methods */
- (id)errorMessage;
- (id)storedNonce;
@end

#endif /* IGCloudIDValidation_h */