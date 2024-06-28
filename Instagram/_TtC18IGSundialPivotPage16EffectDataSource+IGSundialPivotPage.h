//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC18IGSundialPivotPage16EffectDataSource_IGSundialPivotPage_h
#define _TtC18IGSundialPivotPage16EffectDataSource_IGSundialPivotPage_h
@import Foundation;

@interface _TtC18IGSundialPivotPage16EffectDataSource (IGSundialPivotPage) <IGPivotPageViewModelDataSource>
/* instance methods */
- (BOOL)isLoading;
- (BOOL)hasMoreAvailable;
- (BOOL)hasLoadedOnce;
- (id)header;
- (id)headerButton;
- (id)placeholderText;
- (id)previews;
- (void)fetchDataWithCompletion:(id /* block */)completion;
- (void)fetchMoreDataWithCompletion:(id /* block */)completion;
@end

#endif /* _TtC18IGSundialPivotPage16EffectDataSource_IGSundialPivotPage_h */
