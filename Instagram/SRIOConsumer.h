//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.468, BuildCommit: a1243d3a18f9b0e29af55a12ad74ccd2cd1f0abc)
//
//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15.0, SDK: 17.4, Tool: ld (16.0)
//    - LC_SOURCE_VERSION: 
//
#ifndef SRIOConsumer_h
#define SRIOConsumer_h
@import Foundation;

@interface SRIOConsumer : NSObject {
  /* instance variables */
  id /* block */ _scanner;
}

@property (readonly, copy, nonatomic) id /* block */ consumer;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned long long bytesNeeded;
@property (readonly, nonatomic) BOOL readToCurrentFrame;
@property (readonly, nonatomic) BOOL unmaskBytes;

/* instance methods */
- (void)resetWithScanner:(id /* block */)scanner handler:(id /* block */)handler bytesNeeded:(unsigned long long)needed readToCurrentFrame:(BOOL)frame unmaskBytes:(BOOL)bytes;
@end

#endif /* SRIOConsumer_h */
