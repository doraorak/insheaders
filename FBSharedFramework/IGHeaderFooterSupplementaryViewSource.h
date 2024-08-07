//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGHeaderFooterSupplementaryViewSource_h
#define IGHeaderFooterSupplementaryViewSource_h
@import Foundation;

#include "IGLabelSupplementaryViewSource.h"
#include "IGListSupplementaryViewSource-Protocol.h"
#include "IGSeparatorSupplementaryViewSource.h"

@class NSString;

@interface IGHeaderFooterSupplementaryViewSource : NSObject<IGListSupplementaryViewSource> {
  /* instance variables */
  BOOL _hideFooter;
}

@property (readonly, nonatomic) IGLabelSupplementaryViewSource *header;
@property (readonly, nonatomic) IGSeparatorSupplementaryViewSource *footer;
@property (nonatomic) BOOL hideHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@optional
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHeaderViewSource:(id)source footerViewSource:(id)source;
- (id)initWithSectionController:(id)controller collectionContext:(id)context;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)kind atIndex:(long long)index;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)kind atIndex:(long long)index;
@end

#endif /* IGHeaderFooterSupplementaryViewSource_h */
