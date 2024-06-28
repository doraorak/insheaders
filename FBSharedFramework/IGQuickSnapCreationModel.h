//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGQuickSnapCreationModel_h
#define IGQuickSnapCreationModel_h
@import Foundation;

@class NSArray, NSString, UIImage;

@interface IGQuickSnapCreationModel : NSObject {
  /* instance variables */
  NSArray *_selectedUserIDs;
}

@property (readonly, nonatomic) NSString *audienceListId;
@property (readonly, nonatomic) long long mediaAudience;
@property (readonly, nonatomic) UIImage *image;

/* instance methods */
- (id)initWithSelectedUserIDs:(id)ids audienceListId:(id)id mediaAudience:(long long)audience image:(id)image;
- (id)sharingInfoForStoriesUpload;
- (id)sharingInfo;
@end

#endif /* IGQuickSnapCreationModel_h */
