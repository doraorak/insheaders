//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryDraft_h
#define IGStoryDraft_h
@import Foundation;

#include "IGSerializable-Protocol.h"
#include "IGUserLauncherSetProviding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSDate, NSString, NSUUID, UIImage;

@interface IGStoryDraft : NSObject<NSCopying, IGSerializable> {
  /* instance variables */
  UIImage *_previewImage;
  NSString *_previewImageResource;
  NSString *_previewImagePath;
  NSObject<IGUserLauncherSetProviding> *_launcherSet;
  BOOL _isInvisibleToUser;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSString *uploadId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithMetadata:(id)metadata resourceDirectory:(id)directory userSession:(id)session error:(id *)error;

/* instance methods */
- (id)initWithIdentifier:(id)identifier creationDate:(id)date modificationDate:(id)date duration:(double)duration previewImage:(id)image previewImageResource:(id)resource uploadId:(id)id isInvisibleToUser:(BOOL)user previewImagePath:(id)path launcherSet:(id)set;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)metadataForResourceDirectory:(id)directory userSession:(id)session error:(id *)error;
@end

#endif /* IGStoryDraft_h */