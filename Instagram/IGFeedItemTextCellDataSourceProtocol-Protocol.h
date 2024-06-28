//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGFeedItemTextCellDataSourceProtocol_Protocol_h
#define IGFeedItemTextCellDataSourceProtocol_Protocol_h
@import Foundation;

@protocol IGFeedItemTextCellDataSourceProtocol <NSObject>
/* instance methods */
- (id)feedItemForFeedItemTextCell:(id)cell;
- (id)carouselIndexForFeedItemTextCell:(id)cell;
- (id)commentModelPKForFeedItemTextCell:(id)cell;
@end

#endif /* IGFeedItemTextCellDataSourceProtocol_Protocol_h */