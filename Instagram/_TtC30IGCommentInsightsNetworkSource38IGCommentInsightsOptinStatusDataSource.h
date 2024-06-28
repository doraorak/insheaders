//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef _TtC30IGCommentInsightsNetworkSource38IGCommentInsightsOptinStatusDataSource_h
#define _TtC30IGCommentInsightsNetworkSource38IGCommentInsightsOptinStatusDataSource_h
@import Foundation;

#include "_TtP30IGCommentInsightsNetworkSource46IGCommentInsightsOptInStatusDataSourceDelegate_-Protocol.h"

@interface _TtC30IGCommentInsightsNetworkSource38IGCommentInsightsOptinStatusDataSource : NSObject { // (Swift)
  /* instance variables */
   isLoading;
   userSession;
}

@property (nonatomic, weak) NSObject<_TtP30IGCommentInsightsNetworkSource46IGCommentInsightsOptInStatusDataSourceDelegate_> *delegate;

/* instance methods */
- (id)initWithUserSession:(id)session;
- (void)updateOptInStatusWithOptinStatus:(BOOL)status completion:(id /* block */)completion;
- (void)getOptinStatus;
- (id)init;
@end

#endif /* _TtC30IGCommentInsightsNetworkSource38IGCommentInsightsOptinStatusDataSource_h */