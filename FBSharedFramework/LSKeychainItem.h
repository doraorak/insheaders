//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef LSKeychainItem_h
#define LSKeychainItem_h
@import Foundation;

@class NSDictionary, NSString;

@interface LSKeychainItem : NSObject

@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secretValue;
@property (retain, nonatomic) id accessibleAttr;
@property (nonatomic) BOOL isSynchronizable;
@property (copy, nonatomic) NSDictionary *genericData;

/* class methods */
+ (id)userID:(id)id;
+ (id)secretValue:(id)value;
+ (id)accessibleAttr:(id)attr;
+ (id)genericData:(id)data;
+ (id)genericValue:(id)value forKey:(id)key;

/* instance methods */
- (id)initWithServiceID:(id)id userID:(id)id secretValue:(id)value accessibleAttr:(id)attr isSynchronizable:(BOOL)synchronizable genericData:(id)data;
- (id)initWithServiceID:(id)id userID:(id)id secretValue:(id)value accessibleAttr:(id)attr genericData:(id)data;
- (BOOL)isEqual:(id)equal;
- (id)genericValueForKey:(id)key;
- (unsigned long long)hash;
- (id)copyWithUserID:(id)id;
- (id)copyWithAccessibleAttr:(id)attr;
- (id)copyWithGenericData:(id)data;
- (id)copyWithSecretValue:(id)value;
- (id)copyWithServiceId:(id)id;
- (id)copyWithGenericValue:(id)value forKey:(id)key;
- (id)copyWithGenericValue:(id)value forKey:(id)key andAccessibleAttr:(id)attr;
@end

#endif /* LSKeychainItem_h */
