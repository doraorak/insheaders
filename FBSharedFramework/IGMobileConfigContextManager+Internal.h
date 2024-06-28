//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGMobileConfigContextManager_Internal_h
#define IGMobileConfigContextManager_Internal_h
@import Foundation;

@interface IGMobileConfigContextManager (Internal) <FBMobileConfigDebugAPI>
/* instance methods */
- (BOOL)hasChangeListeners;
- (struct shared_ptr<mobileconfig::FBMobileConfigManager> { struct FBMobileConfigManager * x0; struct __shared_weak_count * x1; })configManager;
- (BOOL)logOneConfigIfNeeded:(unsigned int)needed accessedBeforeInit:(BOOL)init;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; })_getLoggingJsonOfOneConfig:(unsigned int)config accessedBeforeInit:(BOOL)init useLatestValue:(BOOL)value;
- (id)getLoggingJsonOfOneConfigForTest:(unsigned int)test accessedBeforeInit:(BOOL)init;
- (BOOL)_logMultiConfigsIfNeeded:(BOOL)needed;
- (void)logMultiConfigs:(id)configs accessedBeforeInit:(BOOL)init;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; })_getLoggingJsonOfMultiConfigs:(id)configs accessedBeforeInit:(BOOL)init useLatestValue:(BOOL)value;
- (id)getLoggingJsonOfMultiConfigsForTest:(id)test accessedBeforeInit:(BOOL)init;
- (void)logApiConsistency:(int)consistency;
@end

#endif /* IGMobileConfigContextManager_Internal_h */
