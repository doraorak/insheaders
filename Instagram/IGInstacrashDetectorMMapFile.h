//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGInstacrashDetectorMMapFile_h
#define IGInstacrashDetectorMMapFile_h
@import Foundation;

@protocol {unique_ptr<reliability::MmappedFile, std::default_delete<reliability::MmappedFile>>="__ptr_"{__compressed_pair<reliability::MmappedFile *, std::default_delete<reliability::MmappedFile>>="__value_"^{MmappedFile}}};

@interface IGInstacrashDetectorMMapFile : NSObject {
  /* instance variables */
  struct unique_ptr<reliability::MmappedFile, std::default_delete<reliability::MmappedFile>> { struct __compressed_pair<reliability::MmappedFile *, std::default_delete<reliability::MmappedFile>> { struct MmappedFile *__value_; } __ptr_; } _instacrashDetectorMMapFile;
  struct  * _instacrashDetectorContent;
}

/* instance methods */
- (id)init;
@end

#endif /* IGInstacrashDetectorMMapFile_h */