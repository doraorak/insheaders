//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGTag_h
#define IGTag_h
@import Foundation;

#include "IGTagGroup.h"
#include "IGTagLoggable-Protocol.h"
#include "IGTagPosition.h"
#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;
@protocol IGTaggableObject><IGTagLoggable;

@interface IGTag : NSObject<IGTagLoggable, NSCoding, NSCopying> {
  /* instance variables */
  NSObject *_lockForPosition;
  BOOL _isAutoTag;
  NSString *_creationMethod;
}

@property (retain, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *placeholderString;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) BOOL isRemovable;
@property (nonatomic) BOOL showCategoryOfUser;
@property (retain) NSObject<IGTaggableObject><IGTagLoggable> *object;
@property (readonly) id props;
@property (retain) IGTagPosition *position;
@property (weak) IGTagGroup *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)inTagFromDictionary:(id)dictionary objectStores:(id)stores;
+ (id)inTagFromDictionary:(id)dictionary objectStores:(id)stores props:(id)props;
+ (id)inTagFromObject:(id)object objectStores:(id)stores;

/* instance methods */
- (id)_initWithObject:(id)object placeholderString:(id)string props:(id)props position:(id)position isHidden:(BOOL)hidden isAutoTag:(BOOL)tag isRemovable:(BOOL)removable category:(id)category showCategoryOfUser:(BOOL)user creationMethod:(id)method;
- (id)tagId;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)asDictionary;
- (BOOL)isEqual:(id)equal;
- (id)entityID;
- (id)entityName;
- (long long)entityType;
@end

#endif /* IGTag_h */
