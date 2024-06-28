//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ETCoreMLAsset_h
#define ETCoreMLAsset_h
@import Foundation;

@class NSString, NSURL;
@protocol {Asset="identifier"{basic_string<char, std::char_traits<char>, std::allocator<char>>="__r_"{__compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"b63"__is_long_"b1}"__s"{__short="__data_"[23c]"__padding_"[0C]"__size_"b7"__is_long_"b1}"__r"{__raw="__words"[3Q]})}}}"path"{basic_string<char, std::char_traits<char>, std::allocator<char>>="__r_"{__compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"b63"__is_long_"b1}"__s"{__short="__data_"[23c]"__padding_"[0C]"__size_"b7"__is_long_"b1}"__r"{__raw="__words"[3Q]})}}}"package_info"{PackageInfo="name"{basic_string<char, std::char_traits<char>, std::allocator<char>>="__r_"{__compressed_pair<std::basic_string<char>::__rep, std::allocator<char>>="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"b63"__is_long_"b1}"__s"{__short="__data_"[23c]"__padding_"[0C]"__size_"b7"__is_long_"b1}"__r"{__raw="__words"[3Q]})}}}"file_infos"{vector<executorchcoreml::FileInfo, std::allocator<executorchcoreml::FileInfo>>="__begin_"^{FileInfo}"__end_"^{FileInfo}"__end_cap_"{__compressed_pair<executorchcoreml::FileInfo *, std::allocator<executorchcoreml::FileInfo>>="__value_"^{FileInfo}}}}}, {vector<std::unique_ptr<__sFILE, int (*)(__sFILE *)>, std::allocator<std::unique_ptr<__sFILE, int (*)(__sFILE *)>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::unique_ptr<__sFILE, int (*)(__sFILE *)> *, std::allocator<std::unique_ptr<__sFILE, int (*)(__sFILE *)>>>="__value_"^v}};

@interface ETCoreMLAsset : NSObject {
  /* instance variables */
  struct Asset { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned int x :63 __cap_; unsigned int x :1 __is_long_; } __l; struct __short { char x[23] __data_; unsigned char x[0] __padding_; unsigned int x :7 __size_; unsigned int x :1 __is_long_; } __s; struct __raw { unsigned long long x[3] __words; } __r; } x0; } __value_; } __r_; } identifier; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned int x :63 __cap_; unsigned int x :1 __is_long_; } __l; struct __short { char x[23] __data_; unsigned char x[0] __padding_; unsigned int x :7 __size_; unsigned int x :1 __is_long_; } __s; struct __raw { unsigned long long x[3] __words; } __r; } x0; } __value_; } __r_; } path; struct PackageInfo { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned int x :63 __cap_; unsigned int x :1 __is_long_; } __l; struct __short { char x[23] __data_; unsigned char x[0] __padding_; unsigned int x :7 __size_; unsigned int x :1 __is_long_; } __s; struct __raw { unsigned long long x[3] __words; } __r; } x0; } __value_; } __r_; } name; struct vector<executorchcoreml::FileInfo, std::allocator<executorchcoreml::FileInfo>> { struct FileInfo *__begin_; struct FileInfo *__end_; struct __compressed_pair<executorchcoreml::FileInfo *, std::allocator<executorchcoreml::FileInfo>> { struct FileInfo *__value_; } __end_cap_; } file_infos; } package_info; } _backingAsset;
  struct vector<std::unique_ptr<__sFILE, int (*)(__sFILE *)>, std::allocator<std::unique_ptr<__sFILE, int (*)(__sFILE *)>>> { void *__begin_; void *__end_; struct __compressed_pair<std::unique_ptr<__sFILE, int (*)(__sFILE *)> *, std::allocator<std::unique_ptr<__sFILE, int (*)(__sFILE *)>>> { void *__value_; } __end_cap_; } _openFiles;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *contentURL;
@property (readonly, nonatomic) unsigned long long totalSizeInBytes;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isAlive;

/* instance methods */
- (id)initWithBackingAsset:(struct Asset { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x1; struct PackageInfo { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char * x0; unsigned long long x1; unsigned int x2 :63; unsigned int x3 :1; } x0; struct __short { char x0[23] unsigned char x1[0] unsigned int x2 :7; unsigned int x3 :1; } x1; struct __raw { unsigned long long x0[3] } x2; } x0; } x0; } x0; } x0; struct vector<executorchcoreml::FileInfo, std::allocator<executorchcoreml::FileInfo>> { struct FileInfo * x0; struct FileInfo * x1; struct __compressed_pair<executorchcoreml::FileInfo *, std::allocator<executorchcoreml::FileInfo>> { struct FileInfo * x0; } x2; } x1; } x2; })asset;
- (void)dealloc;
- (BOOL)_keepAliveAndReturnError:(id *)error;
- (BOOL)keepAliveAndReturnError:(id *)error;
- (BOOL)prewarmAndReturnError:(id *)error;
- (void)close;
@end

#endif /* ETCoreMLAsset_h */