//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef IGImageDataCaching_Protocol_h
#define IGImageDataCaching_Protocol_h
@import Foundation;

@protocol IGImageDataCaching <NSObject>
/* instance methods */
- (void)setImageData:(id)data withURL:(id)url forKey:(id)key forModule:(id)module forFetchType:(long long)type forScans:(id)scans;
- (id)imageDataForKey:(id)key;
- (BOOL)containsImageDataForKey:(id)key;
- (void)removeAllImageData;
- (void)updateAccessTimeForImageDataWithKey:(id)key;
@end

#endif /* IGImageDataCaching_Protocol_h */