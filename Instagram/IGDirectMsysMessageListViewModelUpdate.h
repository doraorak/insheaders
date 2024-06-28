//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMsysMessageListViewModelUpdate_h
#define IGDirectMsysMessageListViewModelUpdate_h
@import Foundation;

@class IGDirectDjangoUIThread, IGDirectMsysThread, IGDirectShhModeLearnMoreViewModel, IGDirectThreadNullStateViewModel, NSArray;

@interface IGDirectMsysMessageListViewModelUpdate : NSObject

@property (readonly, nonatomic) NSArray *viewModels;
@property (readonly, nonatomic) IGDirectMsysThread *threadModel;
@property (readonly, nonatomic) long long minTimestampMs;
@property (readonly, nonatomic) long long maxTimestampMs;
@property (readonly, nonatomic) IGDirectThreadNullStateViewModel *nullStateThreadHeaderViewModel;
@property (readonly, nonatomic) IGDirectShhModeLearnMoreViewModel *shhModeLearnMoreViewModel;
@property (readonly, nonatomic) IGDirectDjangoUIThread *djangoUIThread;
@property (readonly, nonatomic) unsigned long long updateReason;
@property (readonly, nonatomic) BOOL hasMoreMessages;

/* instance methods */
- (id)initWithViewModels:(id)models threadModel:(id)model minTimestampMs:(long long)ms maxTimestampMs:(long long)ms nullStateThreadHeaderViewModel:(id)model shhModeLearnMoreViewModel:(id)model djangoUIThread:(id)uithread updateReason:(unsigned long long)reason hasMoreMessages:(BOOL)messages;
@end

#endif /* IGDirectMsysMessageListViewModelUpdate_h */