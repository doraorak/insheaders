//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBTigonMNSServiceProvider_h
#define FBTigonMNSServiceProvider_h
@import Foundation;

@interface FBTigonMNSServiceProvider : NSObject
/* class methods */
+ (void)initWithMNSConfig:(struct TigonMNSConfig { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned long long x5; BOOL x6; int x7; int x8; int x9; unsigned int x10; int x11; int x12; unsigned int x13; BOOL x14; unsigned int x15; int x16; int x17; int x18; BOOL x19; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x20; BOOL x21; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x22; BOOL x23; int x24; int x25; int x26; int x27; int x28; int x29; BOOL x30; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; int x38; int x39; BOOL x40; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x41; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x42; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x43; BOOL x44; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x45; BOOL x46; BOOL x47; unsigned int x48; BOOL x49; BOOL x50; unsigned long long x51; BOOL x52; })mnsconfig qlogLogger:(struct shared_ptr<facebook::xanalytics::FBAnalyticsShim> { struct FBAnalyticsShim * x0; struct __shared_weak_count * x1; })logger preconnectList:(id)list userAgent:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; })agent combinableResponseHeaders:(struct unordered_set<std::string, facebook::tigon::CaseInsensitiveHash, facebook::tigon::CaseInsensitiveEqual, std::allocator<std::string>> { struct __hash_table<std::string, facebook::tigon::CaseInsensitiveHash, facebook::tigon::CaseInsensitiveEqual, std::allocator<std::string>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { void * * x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { struct __hash_node_base<std::__hash_node<std::string, void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, facebook::tigon::CaseInsensitiveHash> { unsigned long long x0; } x2; struct __compressed_pair<float, facebook::tigon::CaseInsensitiveEqual> { float x0; } x3; } x0; })headers fallbackService:(struct shared_ptr<facebook::tigon::TigonService> { struct TigonService * x0; struct __shared_weak_count * x1; })service tigonLigerService:(struct shared_ptr<facebook::tigon::TigonService> { struct TigonService * x0; struct __shared_weak_count * x1; })service hostSuffixesServed:(struct vector<std::string, std::allocator<std::string>> { void * x0; void * x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void * x0; } x2; })served urlsServedRegex:(struct optional<std::regex> { union { char x0; struct basic_regex<char, std::regex_traits<char>> { struct regex_traits<char> { struct locale { struct __imp * x0; } x0; void * x1; void * x2; } x0; int x1; unsigned int x2; unsigned int x3; int x4; struct shared_ptr<std::__empty_state<char>> { void * x0; struct __shared_weak_count * x1; } x5; void * x6; } x1; } x0; BOOL x1; })regex;
+ (void)_runEvThread;
+ (void)_networkStateChanged:(id)changed;
@end

#endif /* FBTigonMNSServiceProvider_h */