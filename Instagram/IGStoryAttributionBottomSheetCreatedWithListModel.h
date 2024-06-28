//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryAttributionBottomSheetCreatedWithListModel_h
#define IGStoryAttributionBottomSheetCreatedWithListModel_h
@import Foundation;

#include "IGListDiffable-Protocol.h"
#include "IGStoryMultiAttributionBottomSheetItemModel.h"

@class NSArray, NSString, NSURL, UIImage;

@interface IGStoryAttributionBottomSheetCreatedWithListModel : NSObject<IGListDiffable> {
  /* instance variables */
  BOOL _isActivityIndicatorEnabled;
  UIImage *_titleImage;
  NSURL *_titleImageUrl;
  long long _imageViewContentMode;
  NSArray *_imageViewGradientBackgroundColors;
  IGStoryMultiAttributionBottomSheetItemModel *_multiAttributionModel;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSURL *imageUrl;

/* instance methods */
- (id)initWithTitle:(id)title subtitle:(id)subtitle titleImage:(id)image titleImageURL:(id)url image:(id)image imageURL:(id)url imageViewGradientBackgroundColors:(id)colors multiAttributionModel:(id)model isActivityIndicatorEnabled:(BOOL)enabled;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IGStoryAttributionBottomSheetCreatedWithListModel_h */
