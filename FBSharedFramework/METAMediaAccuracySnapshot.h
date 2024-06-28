//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef METAMediaAccuracySnapshot_h
#define METAMediaAccuracySnapshot_h
@import Foundation;

@class NSData, NSString;

@interface METAMediaAccuracySnapshot : NSObject

@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSString *compositionID;
@property (readonly, nonatomic) NSString *waterfallID;
@property (readonly, nonatomic) NSString *uploadID;
@property (readonly, nonatomic) NSString *sourceType;

/* class methods */
+ (id)snapshotFromDirectory:(id)directory uploadID:(id)id;

/* instance methods */
- (id)initWithImageData:(id)data timestamp:(double)timestamp compositionID:(id)id waterfallID:(id)id sourceType:(id)type uploadID:(id)id;
- (BOOL)writeToDirectory:(id)directory waterfallID:(id)id uploadID:(id)id;
- (void)deleteCachedFileFromDirectory:(id)directory;
@end

#endif /* METAMediaAccuracySnapshot_h */