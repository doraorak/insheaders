//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectLocationMessageViewModel_h
#define IGDirectLocationMessageViewModel_h
@import Foundation;

#include "IGDirectMessageViewModelProtocol-Protocol.h"
#include "IGListDiffable-Protocol.h"

@class IGAPILocationDict, IGDirectMessageCellViewModel, IGDirectUIMessageMetadata, NSArray, NSString;

@interface IGDirectLocationMessageViewModel : NSObject<IGDirectMessageViewModelProtocol, IGListDiffable> {
  /* instance variables */
  NSString *_locationName;
  NSString *_streetAddress;
}

@property (readonly, nonatomic) IGDirectUIMessageMetadata *messageMetadata;
@property (readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel;
@property (readonly, copy, nonatomic) NSString *contentType;
@property (readonly, nonatomic) IGAPILocationDict *location;
@property (readonly, nonatomic) NSArray *previewMedia;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLocationMessage:(id)message messageCellViewModel:(id)model;
- (double)contentHeight;
- (BOOL)senderIsCurrentUser;
- (BOOL)isChevronHidden;
- (long long)verifiedType;
- (id)bubbleStyle;
- (long long)layoutType;
- (id)reshareTitle;
- (id)reshareSubtitle;
- (id)headerImageSpecifiers;
- (long long)headerIconLayoutType;
- (id)usersInHeaderFacepile;
- (unsigned long long)headerImageBadgeImageAsset;
- (id)module;
- (id)headerPlayableAudioURL;
- (id)playPauseButtonGradient;
- (id)resharePreviewMediaUrls;
- (double)thumbnailSize;
- (BOOL)isEqual:(id)equal;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)object;
@end

#endif /* IGDirectLocationMessageViewModel_h */
