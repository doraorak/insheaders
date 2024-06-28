//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC24IGAvatarEmotesNetworking13IGAvatarEmote_h
#define _TtC24IGAvatarEmotesNetworking13IGAvatarEmote_h
@import Foundation;

@interface _TtC24IGAvatarEmotesNetworking13IGAvatarEmote : NSObject { // (Swift)
  /* instance variables */
   emoteId;
   audioURLString;
   animationURLString;
   title;
   artistDisplayName;
   durationInMilliSeconds;
   staticThumbnailURLString;
   coverImageURLString;
   audioMediaId;
   mediaTemplateId;
   stickerTemplateName;
   imageSizeWidth;
   imageSizeHeight;
   fps;
   imageRatio;
}

/* instance methods */
- (id)initWithEmoteId:(id)id audioURLString:(id)urlstring animationURLString:(id)urlstring title:(id)title artistDisplayName:(id)name durationInMilliSeconds:(long long)seconds staticThumbnailURLString:(id)urlstring coverImageURLString:(id)urlstring audioMediaId:(id)id mediaTemplateId:(id)id stickerTemplateName:(id)name imageSizeWidth:(double)width imageSizeHeight:(double)height fps:(long long)fps;
- (id)init;
@end

#endif /* _TtC24IGAvatarEmotesNetworking13IGAvatarEmote_h */
