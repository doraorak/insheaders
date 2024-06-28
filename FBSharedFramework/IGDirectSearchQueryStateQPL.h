//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGDirectSearchQueryStateQPL_h
#define IGDirectSearchQueryStateQPL_h
@import Foundation;

@protocol {unique_ptr<facebook::messenger::search::qpl::SearchQPLContext, std::default_delete<facebook::messenger::search::qpl::SearchQPLContext>>="__ptr_"{__compressed_pair<facebook::messenger::search::qpl::SearchQPLContext *, std::default_delete<facebook::messenger::search::qpl::SearchQPLContext>>="__value_"^{SearchQPLContext}}};

@interface IGDirectSearchQueryStateQPL : NSObject {
  /* instance variables */
  struct unique_ptr<facebook::messenger::search::qpl::SearchQPLContext, std::default_delete<facebook::messenger::search::qpl::SearchQPLContext>> { struct __compressed_pair<facebook::messenger::search::qpl::SearchQPLContext *, std::default_delete<facebook::messenger::search::qpl::SearchQPLContext>> { struct SearchQPLContext *__value_; } __ptr_; } _queryStateQPL;
  long long _queryStateQPLInstanceID;
}

/* instance methods */
- (id)initWithSurface:(id)surface numContacts:(long long)contacts;
@end

#endif /* IGDirectSearchQueryStateQPL_h */