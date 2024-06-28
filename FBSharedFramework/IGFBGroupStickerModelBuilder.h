//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFBGroupStickerModelBuilder_h
#define IGFBGroupStickerModelBuilder_h
@import Foundation;

@class NSData, NSString;

@interface IGFBGroupStickerModelBuilder : NSObject {
  /* instance variables */
  NSString *_pk;
  NSString *_fbGroupId;
  NSData *_stickerImageData;
}

/* class methods */
+ (id)groupStickerModelFromExistingGroupStickerModel:(id)model;

/* instance methods */
- (id)initWithPk:(id)pk fbGroupId:(id)id;
- (id)build;
- (id)withPk:(id)pk;
- (id)withFbGroupId:(id)id;
- (id)withStickerImageData:(id)data;
@end

#endif /* IGFBGroupStickerModelBuilder_h */