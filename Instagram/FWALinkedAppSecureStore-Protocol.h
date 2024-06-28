//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FWALinkedAppSecureStore_Protocol_h
#define FWALinkedAppSecureStore_Protocol_h
@import Foundation;

@protocol FWALinkedAppSecureStore 
/* instance methods */
- (BOOL)setValue:(id)value forKey:(id)key error:(id *)error;
- (BOOL)setValue:(id)value forKey:(id)key accessibleAttr:(void *)attr error:(id *)error;
- (id)valueForKey:(id)key updatingAccessibleAttr:(void *)attr error:(id *)error;
@end

#endif /* FWALinkedAppSecureStore_Protocol_h */
