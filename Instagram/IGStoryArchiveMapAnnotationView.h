//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGStoryArchiveMapAnnotationView_h
#define IGStoryArchiveMapAnnotationView_h
@import Foundation;

#include "IGPlacesMapAnnotationView.h"

@class UIActivityIndicatorView;

@interface IGStoryArchiveMapAnnotationView : IGPlacesMapAnnotationView {
  /* instance variables */
  UIActivityIndicatorView *_activityIndicatorView;
}

/* instance methods */
- (id)initWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)showLoadingIndicator:(BOOL)indicator;
@end

#endif /* IGStoryArchiveMapAnnotationView_h */
