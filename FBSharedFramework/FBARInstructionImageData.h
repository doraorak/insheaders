//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef FBARInstructionImageData_h
#define FBARInstructionImageData_h
@import Foundation;

@class NSData, NSNumber;

@interface FBARInstructionImageData : NSObject

@property (retain) NSData *data;
@property (retain) NSNumber *width;
@property (retain) NSNumber *height;

/* class methods */
+ (id)newWithData:(id)data withWidth:(id)width withHeight:(id)height;

/* instance methods */
- (id)initWithData:(id)data withWidth:(id)width withHeight:(id)height;
@end

#endif /* FBARInstructionImageData_h */
