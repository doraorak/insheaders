//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGPivotPageViewModelDataSource_Protocol_h
#define IGPivotPageViewModelDataSource_Protocol_h
@import Foundation;

@protocol IGPivotPageViewModelDataSource 

@property (nonatomic, readonly) BOOL hasMoreAvailable;
@property (nonatomic, readonly) BOOL isLoading;
@property (nonatomic, readonly) BOOL hasLoadedOnce;

/* instance methods */
- (id)header;
- (id)headerButton;
- (id)placeholderText;
- (id)previews;
- (void)fetchDataWithCompletion:(id /* block */)completion;
- (void)fetchMoreDataWithCompletion:(id /* block */)completion;
@end

#endif /* IGPivotPageViewModelDataSource_Protocol_h */
