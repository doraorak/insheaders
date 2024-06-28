//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGOrganicAndAdsResult_h
#define IGOrganicAndAdsResult_h
@import Foundation;

@class NSArray;

@interface IGOrganicAndAdsResult : NSObject {
  /* instance variables */
  NSArray *_nonSponsoredItems;
}

@property (retain, nonatomic) NSArray *sponsoredItems;

/* instance methods */
- (id)initWithNonSponsoredItems:(id)items sponsoredItems:(id)items;
@end

#endif /* IGOrganicAndAdsResult_h */
