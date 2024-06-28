//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentGroupCaption_h
#define IGCommentGroupCaption_h
@import Foundation;

#include "IGListDiffable-Protocol.h"
#include "IGSimpleTrackableObject-Protocol.h"

@class IGCommentModel, IGPhoto, IGUser, NSString;

@interface IGCommentGroupCaption : NSObject<IGListDiffable, IGSimpleTrackableObject> {
  /* instance variables */
  BOOL _hideProfileImage;
  BOOL _showMediaThumbnail;
  IGPhoto *_mediaPhoto;
  NSString *_authorFollowContext;
}

@property (readonly, nonatomic) IGCommentModel *caption;
@property (readonly, nonatomic) IGUser *author;
@property (readonly, nonatomic) BOOL hideBottomSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newWithCaption:(id)caption hideProfileImage:(BOOL)image showMediaThumbnail:(BOOL)thumbnail mediaPhoto:(id)photo author:(id)author authorFollowContext:(id)context;
+ (id)newWithCaption:(id)caption hideProfileImage:(BOOL)image showMediaThumbnail:(BOOL)thumbnail mediaPhoto:(id)photo author:(id)author authorFollowContext:(id)context hideBottomSeparator:(BOOL)separator;

/* instance methods */
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (id)pk;
@end

#endif /* IGCommentGroupCaption_h */