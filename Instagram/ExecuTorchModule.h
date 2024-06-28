//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef ExecuTorchModule_h
#define ExecuTorchModule_h
@import Foundation;

@protocol {unique_ptr<torch::executor::Module, std::default_delete<torch::executor::Module>>="__ptr_"{__compressed_pair<torch::executor::Module *, std::default_delete<torch::executor::Module>>="__value_"^{Module}}};

@interface ExecuTorchModule : NSObject {
  /* instance variables */
  struct unique_ptr<torch::executor::Module, std::default_delete<torch::executor::Module>> { struct __compressed_pair<torch::executor::Module *, std::default_delete<torch::executor::Module>> { struct Module *__value_; } __ptr_; } _module;
}

/* instance methods */
- (id)initWithFileAtPath:(id)path;
@end

#endif /* ExecuTorchModule_h */
