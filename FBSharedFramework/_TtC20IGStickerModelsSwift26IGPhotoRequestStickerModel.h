//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC20IGStickerModelsSwift26IGPhotoRequestStickerModel_h
#define _TtC20IGStickerModelsSwift26IGPhotoRequestStickerModel_h
@import Foundation;

#include "IGStickerModelType-Protocol.h"

@class NSString;

@interface _TtC20IGStickerModelsSwift26IGPhotoRequestStickerModel : NSObject<IGStickerModelType> // (Swift)

@property (nonatomic, readonly) NSString *pk;
@property (nonatomic, readonly) BOOL includeInRecent;
@property (nonatomic) BOOL isBoostEligible;
@property (nonatomic, copy) NSString *stickerSection;
@property (nonatomic, copy) NSString *captionText;

/* class methods */
+ (id)bundleIdentifier;

/* instance methods */
- (id)initWithCaptionText:(id)text;
- (id)init;
@end

#endif /* _TtC20IGStickerModelsSwift26IGPhotoRequestStickerModel_h */
