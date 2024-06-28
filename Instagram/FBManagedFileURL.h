//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBManagedFileURL_h
#define FBManagedFileURL_h
@import Foundation;

@class NSURL;

@interface FBManagedFileURL : NSObject

@property (readonly, nonatomic) NSURL *fileURL;

/* instance methods */
- (id)initWithFileURL:(id)url;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
@end

#endif /* FBManagedFileURL_h */
