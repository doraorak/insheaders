//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC9IGPokeKit11IGPokeModel_h
#define _TtC9IGPokeKit11IGPokeModel_h
@import Foundation;

@class NSString;

@interface _TtC9IGPokeKit11IGPokeModel : NSObject // (Swift)

@property (nonatomic, readonly) NSString *senderID;
@property (nonatomic, readonly) NSString *receiverID;
@property (nonatomic, readonly) NSString *receiverUsername;
@property (nonatomic, readonly) BOOL isPokeBack;

/* instance methods */
- (id)initWithSenderID:(id)id receiverID:(id)id receiverUsername:(id)username isPokeBack:(BOOL)back;
- (id)init;
@end

#endif /* _TtC9IGPokeKit11IGPokeModel_h */