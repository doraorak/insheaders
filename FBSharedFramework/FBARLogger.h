//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARLogger_h
#define FBARLogger_h
@import Foundation;

@protocol {shared_ptr<facebook::arengineservices::ScriptLogger>="__ptr_"^{ScriptLogger}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<facebook::arengineservices::ShaderLogger>="__ptr_"^{ShaderLogger}"__cntrl_"^{__shared_weak_count}}, {unique_ptr<msqrd::logger::AREngineLogger, std::default_delete<msqrd::logger::AREngineLogger>>="__ptr_"{__compressed_pair<msqrd::logger::AREngineLogger *, std::default_delete<msqrd::logger::AREngineLogger>>="__value_"^{AREngineLogger}}};

@interface FBARLogger : NSObject {
  /* instance variables */
  id /* block */ _loggingBlock;
  struct unique_ptr<msqrd::logger::AREngineLogger, std::default_delete<msqrd::logger::AREngineLogger>> { struct __compressed_pair<msqrd::logger::AREngineLogger *, std::default_delete<msqrd::logger::AREngineLogger>> { struct AREngineLogger *__value_; } __ptr_; } _engineLogger;
  struct shared_ptr<facebook::arengineservices::ScriptLogger> { struct ScriptLogger *__ptr_; struct __shared_weak_count *__cntrl_; } _scriptLogger;
  struct shared_ptr<facebook::arengineservices::ShaderLogger> { struct ShaderLogger *__ptr_; struct __shared_weak_count *__cntrl_; } _shaderLogger;
}

/* class methods */
+ (id)newEmptyLogger;
+ (id)newWithLoggingBlock:(id /* block */)block;
+ (id)newWithLoggingBlock:(id /* block */)block scriptLoggingBlock:(id /* block */)block scriptWatchBlock:(id /* block */)block;
+ (id)newWithLoggingBlock:(id /* block */)block scriptLoggingBlock:(id /* block */)block shaderLoggingBlock:(id /* block */)block scriptWatchBlock:(id /* block */)block;

/* instance methods */
- (id)initWithLoggingBlock:(id /* block */)block scriptLoggingBlock:(id /* block */)block shaderLoggingBlock:(id /* block */)block scriptWatchBlock:(id /* block */)block;
@end

#endif /* FBARLogger_h */
