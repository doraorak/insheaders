//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGCommentAttachment_h
#define IGCommentAttachment_h
@import Foundation;

#include "FBIvarBasedEqualityObject.h"
#include "NSCoding-Protocol.h"

@class NSNumber, NSURL;

@interface IGCommentAttachment : FBIvarBasedEqualityObject<NSCoding> {
  /* instance variables */
  unsigned long long _subtype;
  NSURL *_image_imageURL;
  BOOL _image_animated;
  NSNumber *_image_width;
  NSNumber *_image_height;
  NSURL *_video_videoURL;
  NSURL *_video_coverImageURL;
  double _video_duration;
  double _video_width;
  double _video_height;
  NSURL *_avatar_avatarURL;
  BOOL _avatar_animated;
  NSNumber *_avatar_width;
  NSNumber *_avatar_height;
}

/* class methods */
+ (id)avatarWithAvatarURL:(id)url animated:(BOOL)animated width:(id)width height:(id)height;
+ (id)imageWithImageURL:(id)url animated:(BOOL)animated width:(id)width height:(id)height;
+ (id)unavailable;
+ (id)unsupported;
+ (id)videoWithVideoURL:(id)url coverImageURL:(id)url duration:(double)duration width:(double)width height:(double)height;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IGCommentAttachment_h */