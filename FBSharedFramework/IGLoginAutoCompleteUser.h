//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGLoginAutoCompleteUser_h
#define IGLoginAutoCompleteUser_h
@import Foundation;

@class NSString;

@interface IGLoginAutoCompleteUser : NSObject {
  /* instance variables */
  BOOL _isFBConnected;
}

@property (readonly, copy, nonatomic) NSString *pk;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *profilePicURL;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSString *email;
@property (readonly, copy, nonatomic) NSString *phoneNumber;

/* instance methods */
- (id)initWithPK:(id)pk username:(id)username profilePicURL:(id)url fullName:(id)name email:(id)email phoneNumber:(id)number isFBConnected:(BOOL)fbconnected;
@end

#endif /* IGLoginAutoCompleteUser_h */