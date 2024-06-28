//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectMsysSecureConsentFrameworkServicing_Protocol_h
#define IGDirectMsysSecureConsentFrameworkServicing_Protocol_h
@import Foundation;

@protocol IGDirectMsysSecureConsentFrameworkServicing <NSObject>

@property (readonly, nonatomic) BOOL isOnDeviceNudityConsentPendingForServerOptimisticValue;
@property (readonly, nonatomic) BOOL isHWPredefinedListConsentPendingForServerOptimisticValue;
@property (readonly, nonatomic) BOOL isHWCustomListConsentPendingForServerOptimisticBoolValue;
@property (readonly, nonatomic) BOOL isHWCustomListConsentPendingForServerOptimisticStringValue;
@property (readonly, nonatomic) BOOL isOnDeviceNudityControlImageScanEnabledForAny;
@property (readonly, nonatomic) BOOL isHiddenWordsPredefinedListEnabled;
@property (readonly, nonatomic) BOOL isHiddenWordsCustomListEnabled;
@property (readonly, nonatomic) NSString *hiddenWordsCustomListServerOptimisticStringValue;
@property (readonly, nonatomic) NSString *hiddenWordsCustomListClientStringValue;
@property (readonly, nonatomic) BOOL isHiddenWordsPredefinedListMigrationEnabled;
@property (readonly, nonatomic) BOOL isHiddenWordsCustomListMigrationEnabled;

/* instance methods */
- (BOOL)isOnDeviceNudityControlImageScanEnabledWithIsInstamadillo:(BOOL)instamadillo isMSYS:(BOOL)msys;
- (void)setOnDeviceNudityControlImageScanEnabled:(BOOL)enabled isTurnedOnByMeta:(BOOL)meta;
- (void)setHiddenWordsPredefinedListStateEnabled:(BOOL)enabled;
- (void)setHiddenWordsCustomListStateEnabled:(BOOL)enabled;
- (void)syncHiddenWordsCustomListStrings:(id)strings;
- (void)startObserve;
- (void)syncCurrentDeviceCustomListStrings;
@end

#endif /* IGDirectMsysSecureConsentFrameworkServicing_Protocol_h */
