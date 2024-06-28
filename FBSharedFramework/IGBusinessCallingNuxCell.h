//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGBusinessCallingNuxCell_h
#define IGBusinessCallingNuxCell_h
@import Foundation;

#include "IGTableViewCell.h"
#include "IGCoreTextLinkHandler-Protocol.h"
#include "IGCoreTextView.h"
#include "IGImageView.h"

@class NSString, UILabel;
@protocol IGBusinessCallingNuxCellDelegate;

@interface IGBusinessCallingNuxCell : IGTableViewCell<IGCoreTextLinkHandler> {
  /* instance variables */
  IGImageView *_iconView;
  UILabel *_titleLabel;
  IGCoreTextView *_descriptionLabel;
}

@property (weak, nonatomic) NSObject<IGBusinessCallingNuxCellDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;
- (void)layoutSubviews;
- (void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
@end

#endif /* IGBusinessCallingNuxCell_h */