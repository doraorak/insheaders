//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBWebImageDownloadingOptions_h
#define FBWebImageDownloadingOptions_h
@import Foundation;

@class NSArray, NSSet;
@protocol FBFeatureAttributionContextProtocol;

@interface FBWebImageDownloadingOptions : NSObject

@property (retain, nonatomic) NSObject<FBFeatureAttributionContextProtocol> *attributionContext;
@property (retain, nonatomic) NSSet *analyticsTags;
@property BOOL enableSmartFetchFramework;
@property (retain, nonatomic) NSArray *cdnAllowlist;
@property struct CGSize { double x0; double x1; } viewPortSizeInPixels;

/* instance methods */
@end

#endif /* FBWebImageDownloadingOptions_h */